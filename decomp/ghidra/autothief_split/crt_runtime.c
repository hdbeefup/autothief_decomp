/* crt_runtime functions - AutoThief.exe Ghidra decompilation */

/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004ceffe. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}




/* Function: operator_delete */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cf016. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}




/* Function: wcslen */

size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = wcslen(_Str);
  return sVar1;
}




/* Function: isdigit */

int __cdecl isdigit(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isdigit(_C);
  return iVar1;
}




/* Function: fclose */

int __cdecl fclose(FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fclose(_File);
  return iVar1;
}




/* Function: fopen */

FILE * __cdecl fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf02e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = fopen(_Filename,_Mode);
  return pFVar1;
}




/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x004cf034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}




/* Function: __CxxFrameHandler */

void __CxxFrameHandler(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler();
  return;
}




/* Function: operator_delete[] */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cf040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}




/* Function: __chkstk */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __chkstk(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &stack0x00000004;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}




/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf08e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}




/* Function: __onexit */

/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

void __onexit(_onexit_t param_1)

{
  if (DAT_005b81cc == -1) {
                    /* WARNING: Could not recover jumptable at 0x004cf09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_005b81cc,&DAT_005b81c8);
  return;
}




/* Function: _atexit */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  int iVar1;
  
  iVar1 = __onexit(param_1);
  return (iVar1 != 0) - 1;
}




/* Function: __allmul */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}




/* Function: _snprintf */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf10a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _snprintf(_Dest,_Count,_Format);
  return iVar1;
}




/* Function: __ArrayUnwind */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  return;
}




/* Function: `eh_vector_destructor_iterator' */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  FUN_004cf22b();
  return;
}




/* Function: `eh_vector_constructor_iterator' */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    (*param_4)(unaff_EDI);
  }
  FUN_004cf470();
  return;
}




/* Function: operator_new */

void * __cdecl operator_new(uint param_1,nothrow_t *param_2)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_004cf66c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  uVar1 = FUN_00493c27(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(void **)(unaff_EBP + -0x14);
}




/* Function: _vsnprintf */

int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _vsnprintf(_Dest,_Count,_Format,_Args);
  return iVar1;
}




/* Function: atoi */

int __cdecl atoi(char *_Str)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = atoi(_Str);
  return iVar1;
}




/* Function: isspace */

int __cdecl isspace(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isspace(_C);
  return iVar1;
}




/* Function: fread */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf4a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fread(_DstBuf,_ElementSize,_Count,_File);
  return sVar1;
}




/* Function: fwrite */

size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}




/* Function: fseek */

int __cdecl fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fseek(_File,_Offset,_Origin);
  return iVar1;
}




/* Function: ftell */

long __cdecl ftell(FILE *_File)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ftell(_File);
  return lVar1;
}




/* Function: operator_new */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int,struct std::nothrow_t const &)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1,nothrow_t *param_2)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_004cf66c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  uVar1 = FUN_00493c27(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(void **)(unaff_EBP + -0x14);
}




/* Function: report_failure */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    _report_failure
   
   Library: Visual Studio 2003 Release */

void __cdecl report_failure(void)

{
  __security_error_handler(1,0);
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}




/* Function: __security_check_cookie */

/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_005b12c0) {
    return;
  }
  report_failure();
  return;
}




/* Function: exit */

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x004cf53c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}




/* Function: longjmp */

void __cdecl longjmp(int *_Buf,int _Value)

{
                    /* WARNING: Could not recover jumptable at 0x004cf542. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  longjmp(_Buf,_Value);
  return;
}




/* Function: setjmp3 */

void __cdecl setjmp3(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setjmp3();
  return;
}




/* Function: sprintf */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf54e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sprintf(_Dest,_Format);
  return iVar1;
}




/* Function: isalpha */

int __cdecl isalpha(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isalpha(_C);
  return iVar1;
}




/* Function: isalnum */

int __cdecl isalnum(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf55a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isalnum(_C);
  return iVar1;
}




/* Function: sscanf */

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sscanf(_Src,_Format);
  return iVar1;
}




/* Function: _CIfmod */

void _CIfmod(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIfmod();
  return;
}




/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}




/* Function: __SEH_prolog */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog
   
   Library: Visual Studio */

void __SEH_prolog(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_18 + param_2 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + param_2 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + param_2 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* Function: __SEH_epilog */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog
   
   Library: Visual Studio */

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}




/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}




/* Function: _CIacos */

void _CIacos(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIacos();
  return;
}




/* Function: _finite */

int __cdecl _finite(double _X)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _finite(_X);
  return iVar1;
}




/* Function: ftol */

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}




/* Function: _CIpow */

void _CIpow(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIpow();
  return;
}




/* Function: floor */

double __cdecl floor(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}




/* Function: __aullshr */

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}




/* Function: _strdup */

char * __cdecl _strdup(char *_Src)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = _strdup(_Src);
  return pcVar1;
}




/* Function: setlocale */

char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = setlocale(_Category,_Locale);
  return pcVar1;
}




/* Function: qsort */

void __cdecl
qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
                    /* WARNING: Could not recover jumptable at 0x004cf6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  return;
}




/* Function: _controlfp */

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}




/* Function: calloc */

void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cf6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}




/* Function: ~type_info */

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cf6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}




/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}




/* Function: _amsg_exit */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cf706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}




/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}




/* Function: __security_error_handler */

void __security_error_handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x004cf802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __security_error_handler();
  return;
}




/* Function: ~_com_error */

/* Library Function - Single Match
    public: virtual __thiscall _com_error::~_com_error(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall _com_error::~_com_error(_com_error *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR_FUN_0058f7ac;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(HLOCAL *)(this + 0xc) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(this + 0xc));
  }
  return;
}




/* Function: ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x004fc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  return;
}




/* Function: _CIasin */

void _CIasin(void)

{
                    /* WARNING: Could not recover jumptable at 0x0057a4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIasin();
  return;
}




/* Function: asin */

double __cdecl asin(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = asin(_X);
  return dVar1;
}




/* Function: acos */

double __cdecl acos(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = acos(_X);
  return dVar1;
}




/* Function: atan */

double __cdecl atan(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan(_X);
  return dVar1;
}




/* Function: fmod */

double __cdecl fmod(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fmod(_X,_Y);
  return dVar1;
}




/* Function: pow */

double __cdecl pow(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = pow(_X,_Y);
  return dVar1;
}




/* Function: log */

double __cdecl log(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log(_X);
  return dVar1;
}




/* Function: exp */

double __cdecl exp(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057a522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = exp(_X);
  return dVar1;
}




