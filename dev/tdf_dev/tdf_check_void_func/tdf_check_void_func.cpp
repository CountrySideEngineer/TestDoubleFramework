#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf.h"

#define GET_NAME(name)	\
	_T(# name)

/*
	Define test double of "void FuncA(void)
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(FuncA)
DEF_VOID_FUNC(FuncA)
END_DEC_TD(FuncA)

/*
	Check the test double defined by test double framework macros.
 */
int main()
{
	FuncA();

	_tprintf(_T("%s = %d\n"), GET_NAME(CALLED_COUNT(FuncA)), CALLED_COUNT(FuncA));
}
