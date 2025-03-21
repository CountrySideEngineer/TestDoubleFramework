﻿#include <iostream>
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
		6);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
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

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5, int input6)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc7ValArg)
REG_VAL_ARG(VoidFunc7ValArg, int, input1)
REG_VAL_ARG(VoidFunc7ValArg, int, input2)
REG_VAL_ARG(VoidFunc7ValArg, int, input3)
REG_VAL_ARG(VoidFunc7ValArg, int, input4)
REG_VAL_ARG(VoidFunc7ValArg, int, input5)
REG_VAL_ARG(VoidFunc7ValArg, int, input6)
REG_VAL_ARG(VoidFunc7ValArg, int, input7)
DEF_VOID_FUNC(VoidFunc7ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7)
END_DEF_TD(VoidFunc7ValArg)

void CheckVoidFunc7ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc7ValArg));

	TD_INIT(VoidFunc7ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	VoidFunc7ValArg(input1, input2, input3, input4, input5, input6, input7);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc7ValArg)),
		CALLED_COUNT(VoidFunc7ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input1, 0)),
		ARG_VAL(VoidFunc7ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input2, 0)),
		ARG_VAL(VoidFunc7ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input3, 0)),
		ARG_VAL(VoidFunc7ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input4, 0)),
		ARG_VAL(VoidFunc7ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input5, 0)),
		ARG_VAL(VoidFunc7ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input6, 0)),
		ARG_VAL(VoidFunc7ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input7, 0)),
		ARG_VAL(VoidFunc7ValArg, input7, 0),
		7);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	VoidFunc7ValArg(input1, input2, input3, input4, input5, input6, input7);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc7ValArg)),
		CALLED_COUNT(VoidFunc7ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input1, 1)),
		ARG_VAL(VoidFunc7ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input2, 1)),
		ARG_VAL(VoidFunc7ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input3, 1)),
		ARG_VAL(VoidFunc7ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input4, 1)),
		ARG_VAL(VoidFunc7ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input5, 1)),
		ARG_VAL(VoidFunc7ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input6, 1)),
		ARG_VAL(VoidFunc7ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input7, 1)),
		ARG_VAL(VoidFunc7ValArg, input7, 1),
		77);

	TD_INIT(VoidFunc7ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc7ValArg)),
		CALLED_COUNT(VoidFunc7ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input1, 0)),
		ARG_VAL(VoidFunc7ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input2, 0)),
		ARG_VAL(VoidFunc7ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input3, 0)),
		ARG_VAL(VoidFunc7ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input4, 0)),
		ARG_VAL(VoidFunc7ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input5, 0)),
		ARG_VAL(VoidFunc7ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input6, 0)),
		ARG_VAL(VoidFunc7ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input7, 0)),
		ARG_VAL(VoidFunc7ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input1, 1)),
		ARG_VAL(VoidFunc7ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input2, 1)),
		ARG_VAL(VoidFunc7ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input3, 1)),
		ARG_VAL(VoidFunc7ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input4, 1)),
		ARG_VAL(VoidFunc7ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input5, 1)),
		ARG_VAL(VoidFunc7ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input6, 1)),
		ARG_VAL(VoidFunc7ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc7ValArg, input7, 1)),
		ARG_VAL(VoidFunc7ValArg, input7, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5, int input6)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc8ValArg)
REG_VAL_ARG(VoidFunc8ValArg, int, input1)
REG_VAL_ARG(VoidFunc8ValArg, int, input2)
REG_VAL_ARG(VoidFunc8ValArg, int, input3)
REG_VAL_ARG(VoidFunc8ValArg, int, input4)
REG_VAL_ARG(VoidFunc8ValArg, int, input5)
REG_VAL_ARG(VoidFunc8ValArg, int, input6)
REG_VAL_ARG(VoidFunc8ValArg, int, input7)
REG_VAL_ARG(VoidFunc8ValArg, int, input8)
DEF_VOID_FUNC(VoidFunc8ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8)
END_DEF_TD(VoidFunc8ValArg)

void CheckVoidFunc8ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc8ValArg));

	TD_INIT(VoidFunc8ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int input8 = 8;
	VoidFunc8ValArg(input1, input2, input3, input4, input5, input6, input7, input8);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc8ValArg)),
		CALLED_COUNT(VoidFunc8ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input1, 0)),
		ARG_VAL(VoidFunc8ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input2, 0)),
		ARG_VAL(VoidFunc8ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input3, 0)),
		ARG_VAL(VoidFunc8ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input4, 0)),
		ARG_VAL(VoidFunc8ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input5, 0)),
		ARG_VAL(VoidFunc8ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input6, 0)),
		ARG_VAL(VoidFunc8ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input7, 0)),
		ARG_VAL(VoidFunc8ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input8, 0)),
		ARG_VAL(VoidFunc8ValArg, input8, 0),
		8);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	input8 = 88;
	VoidFunc8ValArg(input1, input2, input3, input4, input5, input6, input7, input8);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc8ValArg)),
		CALLED_COUNT(VoidFunc8ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input1, 1)),
		ARG_VAL(VoidFunc8ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input2, 1)),
		ARG_VAL(VoidFunc8ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input3, 1)),
		ARG_VAL(VoidFunc8ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input4, 1)),
		ARG_VAL(VoidFunc8ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input5, 1)),
		ARG_VAL(VoidFunc8ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input6, 1)),
		ARG_VAL(VoidFunc8ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input7, 1)),
		ARG_VAL(VoidFunc8ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input8, 1)),
		ARG_VAL(VoidFunc8ValArg, input8, 1),
		88);

	TD_INIT(VoidFunc8ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc8ValArg)),
		CALLED_COUNT(VoidFunc8ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input1, 0)),
		ARG_VAL(VoidFunc8ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input2, 0)),
		ARG_VAL(VoidFunc8ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input3, 0)),
		ARG_VAL(VoidFunc8ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input4, 0)),
		ARG_VAL(VoidFunc8ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input5, 0)),
		ARG_VAL(VoidFunc8ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input6, 0)),
		ARG_VAL(VoidFunc8ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input7, 0)),
		ARG_VAL(VoidFunc8ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input8, 0)),
		ARG_VAL(VoidFunc8ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input1, 1)),
		ARG_VAL(VoidFunc8ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input2, 1)),
		ARG_VAL(VoidFunc8ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input3, 1)),
		ARG_VAL(VoidFunc8ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input4, 1)),
		ARG_VAL(VoidFunc8ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input5, 1)),
		ARG_VAL(VoidFunc8ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input6, 1)),
		ARG_VAL(VoidFunc8ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input7, 1)),
		ARG_VAL(VoidFunc8ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc8ValArg, input8, 1)),
		ARG_VAL(VoidFunc8ValArg, input8, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5, int input6)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc9ValArg)
REG_VAL_ARG(VoidFunc9ValArg, int, input1)
REG_VAL_ARG(VoidFunc9ValArg, int, input2)
REG_VAL_ARG(VoidFunc9ValArg, int, input3)
REG_VAL_ARG(VoidFunc9ValArg, int, input4)
REG_VAL_ARG(VoidFunc9ValArg, int, input5)
REG_VAL_ARG(VoidFunc9ValArg, int, input6)
REG_VAL_ARG(VoidFunc9ValArg, int, input7)
REG_VAL_ARG(VoidFunc9ValArg, int, input8)
REG_VAL_ARG(VoidFunc9ValArg, int, input9)
DEF_VOID_FUNC(VoidFunc9ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8, int, input9)
END_DEF_TD(VoidFunc9ValArg)

void CheckVoidFunc9ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc9ValArg));

	TD_INIT(VoidFunc9ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int input8 = 8;
	int input9 = 9;
	VoidFunc9ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc9ValArg)),
		CALLED_COUNT(VoidFunc9ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input1, 0)),
		ARG_VAL(VoidFunc9ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input2, 0)),
		ARG_VAL(VoidFunc9ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input3, 0)),
		ARG_VAL(VoidFunc9ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input4, 0)),
		ARG_VAL(VoidFunc9ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input5, 0)),
		ARG_VAL(VoidFunc9ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input6, 0)),
		ARG_VAL(VoidFunc9ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input7, 0)),
		ARG_VAL(VoidFunc9ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input8, 0)),
		ARG_VAL(VoidFunc9ValArg, input8, 0),
		8);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input9, 0)),
		ARG_VAL(VoidFunc9ValArg, input9, 0),
		9);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	input8 = 88;
	input9 = 99;
	VoidFunc9ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc9ValArg)),
		CALLED_COUNT(VoidFunc9ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input1, 1)),
		ARG_VAL(VoidFunc9ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input2, 1)),
		ARG_VAL(VoidFunc9ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input3, 1)),
		ARG_VAL(VoidFunc9ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input4, 1)),
		ARG_VAL(VoidFunc9ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input5, 1)),
		ARG_VAL(VoidFunc9ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input6, 1)),
		ARG_VAL(VoidFunc9ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input7, 1)),
		ARG_VAL(VoidFunc9ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input8, 1)),
		ARG_VAL(VoidFunc9ValArg, input8, 1),
		88);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input9, 1)),
		ARG_VAL(VoidFunc9ValArg, input9, 1),
		99);

	TD_INIT(VoidFunc9ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc9ValArg)),
		CALLED_COUNT(VoidFunc9ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input1, 0)),
		ARG_VAL(VoidFunc9ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input2, 0)),
		ARG_VAL(VoidFunc9ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input3, 0)),
		ARG_VAL(VoidFunc9ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input4, 0)),
		ARG_VAL(VoidFunc9ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input5, 0)),
		ARG_VAL(VoidFunc9ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input6, 0)),
		ARG_VAL(VoidFunc9ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input7, 0)),
		ARG_VAL(VoidFunc9ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input8, 0)),
		ARG_VAL(VoidFunc9ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input9, 0)),
		ARG_VAL(VoidFunc9ValArg, input9, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input1, 1)),
		ARG_VAL(VoidFunc9ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input2, 1)),
		ARG_VAL(VoidFunc9ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input3, 1)),
		ARG_VAL(VoidFunc9ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input4, 1)),
		ARG_VAL(VoidFunc9ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input5, 1)),
		ARG_VAL(VoidFunc9ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input6, 1)),
		ARG_VAL(VoidFunc9ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input7, 1)),
		ARG_VAL(VoidFunc9ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input8, 1)),
		ARG_VAL(VoidFunc9ValArg, input8, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc9ValArg, input9, 1)),
		ARG_VAL(VoidFunc9ValArg, input9, 1),
		0);
}

/*
	Define test double of "void FuncA(int input1, int input2, int input3, int input4, int input5, int input6)"
	using macros of test double framework defined in "tdf.h"
	header file.
 */
BEGIN_DEF_TD(VoidFunc10ValArg)
REG_VAL_ARG(VoidFunc10ValArg, int, input1)
REG_VAL_ARG(VoidFunc10ValArg, int, input2)
REG_VAL_ARG(VoidFunc10ValArg, int, input3)
REG_VAL_ARG(VoidFunc10ValArg, int, input4)
REG_VAL_ARG(VoidFunc10ValArg, int, input5)
REG_VAL_ARG(VoidFunc10ValArg, int, input6)
REG_VAL_ARG(VoidFunc10ValArg, int, input7)
REG_VAL_ARG(VoidFunc10ValArg, int, input8)
REG_VAL_ARG(VoidFunc10ValArg, int, input9)
REG_VAL_ARG(VoidFunc10ValArg, int, input10)
DEF_VOID_FUNC(VoidFunc10ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8, int, input9, int, input10)
END_DEF_TD(VoidFunc10ValArg)

void CheckVoidFunc10ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(VoidFunc10ValArg));

	TD_INIT(VoidFunc10ValArg);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int input8 = 8;
	int input9 = 9;
	int input10 = 10;
	VoidFunc10ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9, input10);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc10ValArg)),
		CALLED_COUNT(VoidFunc10ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input1, 0)),
		ARG_VAL(VoidFunc10ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input2, 0)),
		ARG_VAL(VoidFunc10ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input3, 0)),
		ARG_VAL(VoidFunc10ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input4, 0)),
		ARG_VAL(VoidFunc10ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input5, 0)),
		ARG_VAL(VoidFunc10ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input6, 0)),
		ARG_VAL(VoidFunc10ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input7, 0)),
		ARG_VAL(VoidFunc10ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input8, 0)),
		ARG_VAL(VoidFunc10ValArg, input8, 0),
		8);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input9, 0)),
		ARG_VAL(VoidFunc10ValArg, input9, 0),
		9);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input10, 0)),
		ARG_VAL(VoidFunc10ValArg, input10, 0),
		10);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	input8 = 88;
	input9 = 99;
	input10 = 111;
	VoidFunc10ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9, input10);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc10ValArg)),
		CALLED_COUNT(VoidFunc10ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input1, 1)),
		ARG_VAL(VoidFunc10ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input2, 1)),
		ARG_VAL(VoidFunc10ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input3, 1)),
		ARG_VAL(VoidFunc10ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input4, 1)),
		ARG_VAL(VoidFunc10ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input5, 1)),
		ARG_VAL(VoidFunc10ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input6, 1)),
		ARG_VAL(VoidFunc10ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input7, 1)),
		ARG_VAL(VoidFunc10ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input8, 1)),
		ARG_VAL(VoidFunc10ValArg, input8, 1),
		88);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input9, 1)),
		ARG_VAL(VoidFunc10ValArg, input9, 1),
		99);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input10, 1)),
		ARG_VAL(VoidFunc10ValArg, input10, 1),
		111);

	TD_INIT(VoidFunc10ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFunc10ValArg)),
		CALLED_COUNT(VoidFunc10ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input1, 0)),
		ARG_VAL(VoidFunc10ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input2, 0)),
		ARG_VAL(VoidFunc10ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input3, 0)),
		ARG_VAL(VoidFunc10ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input4, 0)),
		ARG_VAL(VoidFunc10ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input5, 0)),
		ARG_VAL(VoidFunc10ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input6, 0)),
		ARG_VAL(VoidFunc10ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input7, 0)),
		ARG_VAL(VoidFunc10ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input8, 0)),
		ARG_VAL(VoidFunc10ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input9, 0)),
		ARG_VAL(VoidFunc10ValArg, input9, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input10, 0)),
		ARG_VAL(VoidFunc10ValArg, input10, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input1, 1)),
		ARG_VAL(VoidFunc10ValArg, input1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input2, 1)),
		ARG_VAL(VoidFunc10ValArg, input2, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input3, 1)),
		ARG_VAL(VoidFunc10ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input4, 1)),
		ARG_VAL(VoidFunc10ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input5, 1)),
		ARG_VAL(VoidFunc10ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input6, 1)),
		ARG_VAL(VoidFunc10ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input7, 1)),
		ARG_VAL(VoidFunc10ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input8, 1)),
		ARG_VAL(VoidFunc10ValArg, input8, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input9, 1)),
		ARG_VAL(VoidFunc10ValArg, input9, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(VoidFunc10ValArg, input10, 1)),
		ARG_VAL(VoidFunc10ValArg, input10, 1),
		0);
}
