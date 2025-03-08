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

/*
	Define test double of "void FuncA(int input1, int input2)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc3ValArg)
REG_VAL_ARG(VoidFunc3ValArg, int, input1)
REG_VAL_ARG(VoidFunc3ValArg, int, input2)
REG_VAL_ARG(VoidFunc3ValArg, int, input3)
DEF_VOID_FUNC(VoidFunc3ValArg, int, input1, int, input2, int, input3)
END_DEF_TD(VoidFunc3ValArg)

void CheckVoidFunc3ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc3ValArg));

	TD_INIT(VoidFunc3ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	VoidFunc3ValArg(input1, input2, input3);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc3ValArg)),
		CALLED_COUNT(VoidFunc3ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input1, 0)),
		ARG_VAL(VoidFunc3ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input2, 0)),
		ARG_VAL(VoidFunc3ValArg, input2, 0),
		2);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	VoidFunc3ValArg(input1, input2, input3);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc3ValArg)),
		CALLED_COUNT(VoidFunc3ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input1, 1)),
		ARG_VAL(VoidFunc3ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input2, 1)),
		ARG_VAL(VoidFunc3ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input3, 1)),
		ARG_VAL(VoidFunc3ValArg, input3, 1),
		33);

	TD_INIT(VoidFunc3ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc3ValArg)),
		CALLED_COUNT(VoidFunc3ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input1, 0)),
		ARG_VAL(VoidFunc3ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input2, 0)),
		ARG_VAL(VoidFunc3ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input3, 0)),
		ARG_VAL(VoidFunc3ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input1, 1)),
		ARG_VAL(VoidFunc3ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input2, 1)),
		ARG_VAL(VoidFunc3ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc3ValArg, input3, 1)),
		ARG_VAL(VoidFunc3ValArg, input3, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc4ValArg)
REG_VAL_ARG(VoidFunc4ValArg, int, input1)
REG_VAL_ARG(VoidFunc4ValArg, int, input2)
REG_VAL_ARG(VoidFunc4ValArg, int, input3)
REG_VAL_ARG(VoidFunc4ValArg, int, input4)
DEF_VOID_FUNC(VoidFunc4ValArg, int, input1, int, input2, int, input3, int, input4)
END_DEF_TD(VoidFunc4ValArg)

void CheckVoidFunc4ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc4ValArg));

	TD_INIT(VoidFunc4ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	VoidFunc4ValArg(input1, input2, input3, input4);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc4ValArg)),
		CALLED_COUNT(VoidFunc4ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input1, 0)),
		ARG_VAL(VoidFunc4ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input2, 0)),
		ARG_VAL(VoidFunc4ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input3, 0)),
		ARG_VAL(VoidFunc4ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input4, 0)),
		ARG_VAL(VoidFunc4ValArg, input4, 0),
		4);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	VoidFunc4ValArg(input1, input2, input3, input4);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc4ValArg)),
		CALLED_COUNT(VoidFunc4ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input1, 1)),
		ARG_VAL(VoidFunc4ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input2, 1)),
		ARG_VAL(VoidFunc4ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input3, 1)),
		ARG_VAL(VoidFunc4ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input4, 1)),
		ARG_VAL(VoidFunc4ValArg, input4, 1),
		44);

	TD_INIT(VoidFunc4ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc4ValArg)),
		CALLED_COUNT(VoidFunc4ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input1, 0)),
		ARG_VAL(VoidFunc4ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input2, 0)),
		ARG_VAL(VoidFunc4ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input3, 0)),
		ARG_VAL(VoidFunc4ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input4, 0)),
		ARG_VAL(VoidFunc4ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input1, 1)),
		ARG_VAL(VoidFunc4ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input2, 1)),
		ARG_VAL(VoidFunc4ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input3, 1)),
		ARG_VAL(VoidFunc4ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc4ValArg, input4, 1)),
		ARG_VAL(VoidFunc4ValArg, input4, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc5ValArg)
REG_VAL_ARG(VoidFunc5ValArg, int, input1)
REG_VAL_ARG(VoidFunc5ValArg, int, input2)
REG_VAL_ARG(VoidFunc5ValArg, int, input3)
REG_VAL_ARG(VoidFunc5ValArg, int, input4)
REG_VAL_ARG(VoidFunc5ValArg, int, input5)
DEF_VOID_FUNC(VoidFunc5ValArg, int, input1, int, input2, int, input3, int, input4, int, input5)
END_DEF_TD(VoidFunc5ValArg)

void CheckVoidFunc5ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc5ValArg));

	TD_INIT(VoidFunc5ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	VoidFunc5ValArg(input1, input2, input3, input4, input5);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc5ValArg)),
		CALLED_COUNT(VoidFunc5ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input1, 0)),
		ARG_VAL(VoidFunc5ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input2, 0)),
		ARG_VAL(VoidFunc5ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input3, 0)),
		ARG_VAL(VoidFunc5ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input4, 0)),
		ARG_VAL(VoidFunc5ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input5, 0)),
		ARG_VAL(VoidFunc5ValArg, input5, 0),
		5);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	VoidFunc5ValArg(input1, input2, input3, input4, input5);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc5ValArg)),
		CALLED_COUNT(VoidFunc5ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input1, 1)),
		ARG_VAL(VoidFunc5ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input2, 1)),
		ARG_VAL(VoidFunc5ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input3, 1)),
		ARG_VAL(VoidFunc5ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input4, 1)),
		ARG_VAL(VoidFunc5ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input5, 1)),
		ARG_VAL(VoidFunc5ValArg, input5, 1),
		55);

	TD_INIT(VoidFunc5ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc5ValArg)),
		CALLED_COUNT(VoidFunc5ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input1, 0)),
		ARG_VAL(VoidFunc5ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input2, 0)),
		ARG_VAL(VoidFunc5ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input3, 0)),
		ARG_VAL(VoidFunc5ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input4, 0)),
		ARG_VAL(VoidFunc5ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input5, 0)),
		ARG_VAL(VoidFunc5ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input1, 1)),
		ARG_VAL(VoidFunc5ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input2, 1)),
		ARG_VAL(VoidFunc5ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input3, 1)),
		ARG_VAL(VoidFunc5ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input4, 1)),
		ARG_VAL(VoidFunc5ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc5ValArg, input5, 1)),
		ARG_VAL(VoidFunc5ValArg, input5, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5, int input6)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc6ValArg)
REG_VAL_ARG(VoidFunc6ValArg, int, input1)
REG_VAL_ARG(VoidFunc6ValArg, int, input2)
REG_VAL_ARG(VoidFunc6ValArg, int, input3)
REG_VAL_ARG(VoidFunc6ValArg, int, input4)
REG_VAL_ARG(VoidFunc6ValArg, int, input5)
REG_VAL_ARG(VoidFunc6ValArg, int, input6)
DEF_VOID_FUNC(VoidFunc6ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6)
END_DEF_TD(VoidFunc6ValArg)

void CheckVoidFunc6ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc6ValArg));

	TD_INIT(VoidFunc6ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	VoidFunc6ValArg(input1, input2, input3, input4, input5, input6);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc6ValArg)),
		CALLED_COUNT(VoidFunc6ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input1, 0)),
		ARG_VAL(VoidFunc6ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input2, 0)),
		ARG_VAL(VoidFunc6ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input3, 0)),
		ARG_VAL(VoidFunc6ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input4, 0)),
		ARG_VAL(VoidFunc6ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input5, 0)),
		ARG_VAL(VoidFunc6ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input6, 0)),
		ARG_VAL(VoidFunc6ValArg, input6, 0),
		5);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input5 = 66;
	VoidFunc6ValArg(input1, input2, input3, input4, input5, input6);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc6ValArg)),
		CALLED_COUNT(VoidFunc6ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input1, 1)),
		ARG_VAL(VoidFunc6ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input2, 1)),
		ARG_VAL(VoidFunc6ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input3, 1)),
		ARG_VAL(VoidFunc6ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input4, 1)),
		ARG_VAL(VoidFunc6ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input5, 1)),
		ARG_VAL(VoidFunc6ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input6, 1)),
		ARG_VAL(VoidFunc6ValArg, input6, 1),
		66);

	TD_INIT(VoidFunc6ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc6ValArg)),
		CALLED_COUNT(VoidFunc6ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input1, 0)),
		ARG_VAL(VoidFunc6ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input2, 0)),
		ARG_VAL(VoidFunc6ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input3, 0)),
		ARG_VAL(VoidFunc6ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input4, 0)),
		ARG_VAL(VoidFunc6ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input5, 0)),
		ARG_VAL(VoidFunc6ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input6, 0)),
		ARG_VAL(VoidFunc6ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input1, 1)),
		ARG_VAL(VoidFunc6ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input2, 1)),
		ARG_VAL(VoidFunc6ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input3, 1)),
		ARG_VAL(VoidFunc6ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input4, 1)),
		ARG_VAL(VoidFunc6ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input5, 1)),
		ARG_VAL(VoidFunc6ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc6ValArg, input6, 1)),
		ARG_VAL(VoidFunc6ValArg, input6, 1),
		0);
}
