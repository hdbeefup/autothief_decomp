#!/usr/bin/perl
use strict;
use warnings;
use File::Path qw(make_path);

# === Configuration ===
my $INPUT   = $ARGV[0] || 'AutoThief.exe_decompiled.txt';
my $OUT_DIR = $ARGV[1] || 'autothief_split';

make_path($OUT_DIR) unless -d $OUT_DIR;

# === Named function classification ===
my %named_to_module = (
    # CRT / runtime
    '_CxxThrowException'    => 'crt_runtime',
    'operator_delete'       => 'crt_runtime',
    'operator_delete[]'     => 'crt_runtime',
    'operator_new'          => 'crt_runtime',
    'wcslen'                => 'crt_runtime',
    'isdigit'               => 'crt_runtime',
    'isalpha'               => 'crt_runtime',
    'isalnum'               => 'crt_runtime',
    'isspace'               => 'crt_runtime',
    'fclose'                => 'crt_runtime',
    'fopen'                 => 'crt_runtime',
    'fread'                 => 'crt_runtime',
    'fwrite'                => 'crt_runtime',
    'fseek'                 => 'crt_runtime',
    'ftell'                 => 'crt_runtime',
    'free'                  => 'crt_runtime',
    'malloc'                => 'crt_runtime',
    'calloc'                => 'crt_runtime',
    '__CxxFrameHandler'     => 'crt_runtime',
    '__chkstk'              => 'crt_runtime',
    '__onexit'              => 'crt_runtime',
    '_atexit'               => 'crt_runtime',
    '__allmul'               => 'crt_runtime',
    '__aullshr'             => 'crt_runtime',
    '_snprintf'             => 'crt_runtime',
    '_vsnprintf'            => 'crt_runtime',
    'sprintf'               => 'crt_runtime',
    'sscanf'                => 'crt_runtime',
    'atoi'                  => 'crt_runtime',
    'memset'                => 'crt_runtime',
    'qsort'                 => 'crt_runtime',
    '_strdup'               => 'crt_runtime',
    'setlocale'             => 'crt_runtime',
    '_controlfp'            => 'crt_runtime',
    '_callnewh'             => 'crt_runtime',
    '_finite'               => 'crt_runtime',
    'ftol'                  => 'crt_runtime',
    'floor'                 => 'crt_runtime',
    'exit'                  => 'crt_runtime',
    'longjmp'               => 'crt_runtime',
    'setjmp3'               => 'crt_runtime',
    '__SEH_prolog'          => 'crt_runtime',
    '__SEH_epilog'          => 'crt_runtime',
    '__dllonexit'           => 'crt_runtime',
    '_amsg_exit'            => 'crt_runtime',
    'initterm'              => 'crt_runtime',
    '__security_check_cookie'   => 'crt_runtime',
    '__security_error_handler'  => 'crt_runtime',
    'report_failure'        => 'crt_runtime',
    '__ArrayUnwind'         => 'crt_runtime',
    '_CIacos'               => 'crt_runtime',
    '_CIasin'               => 'crt_runtime',
    '_CIfmod'               => 'crt_runtime',
    '_CIpow'                => 'crt_runtime',
    'acos'                  => 'crt_runtime',
    'asin'                  => 'crt_runtime',
    'atan'                  => 'crt_runtime',
    'exp'                   => 'crt_runtime',
    'fmod'                  => 'crt_runtime',
    'log'                   => 'crt_runtime',
    'pow'                   => 'crt_runtime',
    '~type_info'            => 'crt_runtime',
    '~_com_error'           => 'crt_runtime',
    '~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>' => 'crt_runtime',
    "eh_vector_destructor_iterator'" => 'crt_runtime',
    "eh_vector_constructor_iterator'" => 'crt_runtime',
    "`eh_vector_destructor_iterator'" => 'crt_runtime',
    "`eh_vector_constructor_iterator'" => 'crt_runtime',

    # AVI / Video for Windows
    'AVIFileExit'           => 'avi_video',
    'AVIFileRelease'        => 'avi_video',
    'AVIStreamRelease'      => 'avi_video',
    'AVIStreamWrite'        => 'avi_video',
    'AVIStreamSetFormat'    => 'avi_video',
    'AVIMakeCompressedStream' => 'avi_video',
    'AVISaveOptionsFree'    => 'avi_video',
    'AVISaveOptions'        => 'avi_video',
    'AVIFileCreateStreamA'  => 'avi_video',
    'AVIFileOpenA'          => 'avi_video',
    'AVIFileInit'           => 'avi_video',
    'VideoForWindowsVersion' => 'avi_video',

    # Direct3D
    'Direct3DCreate8'       => 'd3d_api',

    # ATL/COM
    'CAtlComModule'         => 'atl_com',
    'CAtlWinModule'         => 'atl_com',
    '_ATL_WIN_MODULE70'     => 'atl_com',
    '~CAtlBaseModule'       => 'atl_com',
    'Term'                  => 'atl_com',
    'RemoveAll'             => 'atl_com',

    # Ogg Vorbis
    'ov_clear'              => 'ogg_vorbis',
    'ov_comment'            => 'ogg_vorbis',
    'ov_info'               => 'ogg_vorbis',
    'ov_open_callbacks'     => 'ogg_vorbis',
    'ov_pcm_seek'           => 'ogg_vorbis',
    'ov_pcm_total'          => 'ogg_vorbis',
    'ov_read'               => 'ogg_vorbis',
);

# === Content-based classification rules for FUN_ functions ===
# Each rule: [ module_name, regex_pattern applied to full function body ]
# Order matters - first match wins. More specific patterns first.
my @content_rules = (
    # pbeScene / pbeTexture (source file references)
    [ 'pbe_scene',      qr/pbeScene\.cpp/ ],
    [ 'pbe_texture',    qr/pbeTexture\.cpp/ ],

    # Terrain
    [ 'terrain',        qr/CTerrain|CRoadNetwork|terrain.*subdivLevel|Terrain\\\\%s/ ],

    # Vehicle / car mechanics
    [ 'vehicle',        qr/Sounds\\\\[Cc]ar\\\\|CarSkid|CarSettings|carskid|cardoor|horn[12]|chirp\.wav|diesel\.wav|med\.wav|sport\.wav|CarJacker|CARJACKER|car\\\\alarm|car\\\\police|SpeedMeter|OnLoadWheel|OutOfFuel|StartEngine|AutoOutOfCar|CanOutOfCar|OutOfCar/ ],

    # Audio / sound system
    [ 'audio',          qr/Default sound device|ov_clear|ov_read|ov_open|DirectSound|waveOut|\.wav"|\.ogg"|channel[0-9]|sound.*device/i ],

    # D3D / rendering / shaders
    [ 'rendering',      qr/D3D|Direct3D|CreateDevice|shader|Shader|vertex.*process|VertexShader|PixelShader|ValidateVertexShader|ValidatePixelShader|render.*info|render.*target|BumpMapping|EnvMapping|WaterRefl|StencilShadow|d3d8\.dll|d3d8d\.dll|Assembler Version|Failed to create shader/i ],

    # GUI / menu / dialog / editor
    [ 'gui',            qr/EDITOR.WINDOW|EDITOR_LOAD|EDITOR_SAVE|DIALOG_ANSWER|DIALOG_REPLIC|ENTER MAP NAME|ShowConsole|ShowCursor|guihide\.lua|GUI\\\\|FullScreen|ScreenWidth|ScreenHeight|VideoWidth|VideoHeight|VideoBrightness|VideoContrast/i ],

    # AVI / video playback (in FUN_ functions)
    [ 'video_playback', qr/AVI Engine|AVI Stream|AVI Compressed|RenderFile|Cutscene Player|FullScreenMode|put_FullScreen|get_FullScreen/ ],

    # Compression / PNG / zlib
    [ 'compression',    qr/zlib|inflate|deflate|adler32|png_do_dither|constant table overflow|invalid literal|invalid distance|invalid block type|too many length|invalid stored|invalid code lengths|invalid bit length/i ],

    # Models / collision
    [ 'models',         qr/models\\\\|\.col\b|col file|collision|splatters|CPMTemplate/i ],

    # Level / world loading
    [ 'world',          qr/Can't load level|Empty level|Level \[|loaded objects|Initializing loaded|insert.*NULL level/i ],

    # Scripts / Lua
    [ 'scripting',      qr/scripts\\\\|\.lua"|run scripts/ ],

    # Config / settings / registry
    [ 'config',         qr/Config\.ini|REGISTRY|CarSettings|MaxDecaledShadows|TrafficDensity|ParkedChance|TempRS/ ],

    # Font
    [ 'font',           qr/font_01|FontFile|Font\b/ ],

    # Camera
    [ 'camera',         qr/fpcamera|firstperson/ ],

    # Input
    [ 'input',          qr/OnKeyDn|OnKeyUp|selectWeapon/ ],
);

# === Parse functions ===
print "Parsing $INPUT...\n";
open(my $fh, '<', $INPUT) or die "Cannot open $INPUT: $!";
my @lines = <$fh>;
close($fh);
my $total_lines = scalar @lines;
print "  Total lines: $total_lines\n";

my @functions;
my $cur_func = undef;

for my $line (@lines) {
    if ($line =~ m{^/\* Function: (.+?) \*/}) {
        if ($cur_func) {
            push @functions, $cur_func;
        }
        $cur_func = {
            name  => $1,
            lines => [$line],
            body  => '',
        };
    } elsif ($cur_func) {
        push @{$cur_func->{lines}}, $line;
        $cur_func->{body} .= $line;
    }
}
push @functions, $cur_func if $cur_func;

my $func_count = scalar @functions;
print "  Extracted $func_count functions\n";

# === Classify each function ===

sub classify_function {
    my ($func) = @_;
    my $name = $func->{name};
    my $body = $func->{body};

    # 1. Catch handlers
    return 'exception_catch' if $name =~ /^Catch@/;

    # 2. Unwind handlers
    return 'exception_unwind' if $name =~ /^Unwind@/;

    # 3. Thunks
    return 'thunks' if $name =~ /^thunk_/;

    # 4. Entry point
    return 'entry_point' if $name eq 'entry';

    # 5. Named function lookup
    if ($name !~ /^FUN_/) {
        # Try exact match
        return $named_to_module{$name} if exists $named_to_module{$name};
        # Try without leading backtick/tilde
        my $clean = $name;
        $clean =~ s/^[`~]//;
        return $named_to_module{$clean} if exists $named_to_module{$clean};
        return $named_to_module{"`$clean"} if exists $named_to_module{"`$clean"};

        # AVI pattern
        return 'avi_video' if $name =~ /^AVI/;
        # ov_ pattern (ogg vorbis)
        return 'ogg_vorbis' if $name =~ /^ov_/;

        # Fall through to content-based for unrecognized named functions
    }

    # 6. Content-based classification for FUN_ and unrecognized named functions
    for my $rule (@content_rules) {
        my ($module, $pattern) = @$rule;
        if ($body =~ $pattern) {
            return $module;
        }
    }

    # 7. Default: unclassified (will be chunked by address)
    return undef;
}

my %module_funcs;
my %module_counts;
my @unclassified;

for my $func (@functions) {
    my $module = classify_function($func);
    if (defined $module) {
        push @{$module_funcs{$module}}, $func;
        $module_counts{$module}++;
    } else {
        push @unclassified, $func;
    }
}

# === Chunk unclassified functions by address range ===
my $CHUNK_SIZE = 500;
my $chunk_idx = 0;
my $in_chunk = 0;

for my $func (@unclassified) {
    my $module = sprintf("globals_%02d", $chunk_idx);
    push @{$module_funcs{$module}}, $func;
    $module_counts{$module}++;
    $in_chunk++;
    if ($in_chunk >= $CHUNK_SIZE) {
        $chunk_idx++;
        $in_chunk = 0;
    }
}

# === Print summary ===
print "\n  Module classification summary:\n";
my $classified_total = 0;
for my $mod (sort keys %module_counts) {
    printf "    %-25s %4d functions\n", $mod, $module_counts{$mod};
    $classified_total += $module_counts{$mod};
}
print "  Total classified: $classified_total\n";
print "  (of which " . scalar(@unclassified) . " in globals chunks)\n\n";

# === Generate output files ===
print "Generating output files in $OUT_DIR/...\n";

for my $module (sort keys %module_funcs) {
    my $c_file = "$OUT_DIR/$module.c";
    open(my $cf, '>', $c_file) or die "Cannot write $c_file: $!";
    print $cf "/* $module functions - AutoThief.exe Ghidra decompilation */\n\n";

    for my $func (@{$module_funcs{$module}}) {
        for my $line (@{$func->{lines}}) {
            print $cf $line;
        }
        print $cf "\n";
    }
    close($cf);
    print "  Written: $c_file (" . scalar(@{$module_funcs{$module}}) . " functions)\n";
}

# === Summary ===
print "\n=== Summary ===\n";
print "Input: $INPUT\n";
print "Modules generated: " . scalar(keys %module_funcs) . "\n";
print "Total functions: $func_count\n";
print "Output directory: $OUT_DIR/\n";
print "Done!\n";
