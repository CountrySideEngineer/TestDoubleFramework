#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf_check.h"
#include "tdf.h"

/*
	Define test double of "void FuncA(void)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFuncNoArg)
DEF_VOID_FUNC(VoidFuncNoArg)
END_DEF_TD(VoidFuncNoArg)

void CheckVoidFuncNoArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFuncNoArg));

	TD_INIT(VoidFuncNoArg);

	VoidFuncNoArg();

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncNoArg)),
		CALLED_COUNT(VoidFuncNoArg),
		1);

	VoidFuncNoArg();

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncNoArg)),
		CALLED_COUNT(VoidFuncNoArg),
		2);

	TD_INIT(VoidFuncNoArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncNoArg)),
		CALLED_COUNT(VoidFuncNoArg),
		0);
}

/*
	Define test double of "void FuncA(int input1)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc1ValArg)
REG_VAL_ARG(VoidFunc1ValArg, int, input1)
DEF_VOID_FUNC(VoidFunc1ValArg, int, input1)
END_DEF_TD(VoidFunc1ValArg)

void CheckVoidFunc1ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFunc1ValArg));

	TD_INIT(VoidFunc1ValArg);

	int input1 = 1;
	VoidFunc1ValArg(input1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc1ValArg)),
		CALLED_COUNT(VoidFunc1ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc1ValArg, input1, 0)),
		ARG_VAL(VoidFunc1ValArg, input1, 0),
		1);

	input1 = 11;
	VoidFunc1ValArg(input1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc1ValArg)),
		CALLED_COUNT(VoidFunc1ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc1ValArg, input1, 1)),
		ARG_VAL(VoidFunc1ValArg, input1, 1),
		11);

	TD_INIT(VoidFunc1ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc1ValArg)),
		CALLED_COUNT(VoidFunc1ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc1ValArg, input1, 0)),
		ARG_VAL(VoidFunc1ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc1ValArg, input1, 1)),
		ARG_VAL(VoidFunc1ValArg, input1, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc2ValArg)
REG_VAL_ARG(VoidFunc2ValArg, int, input1)
REG_VAL_ARG(VoidFunc2ValArg, int, input2)
DEF_VOID_FUNC(VoidFunc2ValArg, int, input1, int, input2)
END_DEF_TD(VoidFunc2ValArg)

void CheckVoidFunc2ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFunc2ValArg));

	TD_INIT(VoidFunc2ValArg);

	int input1 = 1;
	int input2 = 2;
	VoidFunc2ValArg(input1, input2);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc2ValArg)),
		CALLED_COUNT(VoidFunc2ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input1, 0)),
		ARG_VAL(VoidFunc2ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input2, 0)),
		ARG_VAL(VoidFunc2ValArg, input2, 0),
		2);

	input1 = 11;
	input2 = 22;
	VoidFunc2ValArg(input1, input2);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc2ValArg)),
		CALLED_COUNT(VoidFunc2ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input1, 1)),
		ARG_VAL(VoidFunc2ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input2, 1)),
		ARG_VAL(VoidFunc2ValArg, input2, 1),
		22);

	TD_INIT(VoidFunc2ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc2ValArg)),
		CALLED_COUNT(VoidFunc2ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input1, 0)),
		ARG_VAL(VoidFunc2ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input2, 0)),
		ARG_VAL(VoidFunc2ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input1, 1)),
		ARG_VAL(VoidFunc2ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc2ValArg, input2, 1)),
		ARG_VAL(VoidFunc2ValArg, input2, 1),
		0);
}
