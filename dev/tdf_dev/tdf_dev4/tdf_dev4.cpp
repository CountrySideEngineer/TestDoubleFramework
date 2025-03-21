#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf.h"

/*
	void FuncA(void);
 */
BEGIN_DEF_TD(FuncA);
DEF_VOID_FUNC(FuncA);
END_DEF_TD(FuncA);

/*
	void FuncB(int input1)
 */
BEGIN_DEF_TD(FuncB);
REG_VAL_ARG(FuncB, int, input1);
DEF_VOID_FUNC(FuncB, int, input1)
END_DEF_TD(FuncB)

/*
	void FuncB(int input1)
 */
BEGIN_DEF_TD(FuncC);
REG_PTR_ARG_P1_IN(FuncC, int, input1);
DEF_VOID_FUNC(FuncC, int*, input1);
END_DEF_TD(FuncC)

#define	GET_NAME(str)	_T(# str)

int main()
{
	int input1 = 0;

	TD_INIT(FuncC);

	FuncC(&input1);

	_tprintf(_T("%s = %d\n"), GET_NAME(input1), input1);
	_tprintf(_T("%s = %d\n"), GET_NAME(CALLED_COUNT(FuncC)), CALLED_COUNT(FuncC));
	return 0;
}


