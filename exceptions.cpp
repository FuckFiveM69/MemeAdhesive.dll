auto CALLBACK VectoredExceptionHandler(_EXCEPTION_POINTERS* ep) -> LONG
{
    if (ep->ExceptionRecord->ExceptionCode == 0xc00001d || ep->ExceptionRecord->ExceptionCode == 0x80000001 ) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    else {
        return EXCEPTION_CONTINUE_SEARCH;
    }
}
