#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf_check.h"
#include "tdf.h"

BEGIN_DEF_TD(ValFuncNoArg)
DEF_VAL_FUNC(int, ValFuncNoArg)
END_DEF_TD(ValFuncNoArg)

void CheckValFuncNoArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFuncNoArg));

	TD_INIT(ValFuncNoArg);

	SET_FUNC_RET_VAL(ValFuncNoArg, 0, 3);
	SET_FUNC_RET_VAL(ValFuncNoArg, 1, 4);

	int ValFuncNoArg_ret_val = ValFuncNoArg();

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFuncNoArg)),
		CALLED_COUNT(ValFuncNoArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFuncNoArg_ret_val),
		ValFuncNoArg_ret_val,
		3);

	ValFuncNoArg_ret_val = ValFuncNoArg();

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFuncNoArg)),
		CALLED_COUNT(ValFuncNoArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFuncNoArg_ret_val),
		ValFuncNoArg_ret_val,
		4);

	TD_INIT(ValFuncNoArg);
	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFuncNoArg)),
		CALLED_COUNT(ValFuncNoArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFuncNoArg, 0)),
		FUNC_RET_VAL(ValFuncNoArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFuncNoArg, 1)),
		FUNC_RET_VAL(ValFuncNoArg, 1),
		0);
}

BEGIN_DEF_TD(ValFunc1ValArg)
REG_VAL_ARG(ValFunc1ValArg, int, input1)
DEF_VAL_FUNC(int, ValFunc1ValArg, int, input1)
END_DEF_TD(ValFunc1ValArg)

void CheckValFunc1ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc1ValArg));

	TD_INIT(ValFunc1ValArg);

	SET_FUNC_RET_VAL(ValFunc1ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc1ValArg, 1, 4);

	int input1 = 1;
	int ValFunc1Arg_ret_val = ValFunc1ValArg(input1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc1ValArg)),
		CALLED_COUNT(ValFunc1ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc1Arg_ret_val),
		ValFunc1Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc1ValArg, input1, 0)),
		ARG_VAL(ValFunc1ValArg, input1, 0),
		1);

	input1 = 11;
	ValFunc1Arg_ret_val = ValFunc1ValArg(input1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc1ValArg)),
		CALLED_COUNT(ValFunc1ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc1Arg_ret_val),
		ValFunc1Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc1ValArg, input1, 1)),
		ARG_VAL(ValFunc1ValArg, input1, 1),
		11);

	TD_INIT(ValFunc1ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc1ValArg)),
		CALLED_COUNT(ValFunc1ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc1ValArg, 0)),
		FUNC_RET_VAL(ValFunc1ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc1ValArg, 1)),
		FUNC_RET_VAL(ValFunc1ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc1ValArg, input1, 0)),
		ARG_VAL(ValFunc1ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc1ValArg, input1, 1)),
		ARG_VAL(ValFunc1ValArg, input1, 1),
		0);
}

BEGIN_DEF_TD(ValFunc2ValArg)
REG_VAL_ARG(ValFunc2ValArg, int, input1)
REG_VAL_ARG(ValFunc2ValArg, int, input2)
DEF_VAL_FUNC(int, ValFunc2ValArg, int, input1, int, input2)
END_DEF_TD(ValFunc2ValArg)

void CheckValFunc2ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc2ValArg));

	TD_INIT(ValFunc2ValArg);

	SET_FUNC_RET_VAL(ValFunc2ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc2ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int ValFunc2Arg_ret_val = ValFunc2ValArg(input1, input2);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc2ValArg)),
		CALLED_COUNT(ValFunc2ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc2Arg_ret_val),
		ValFunc2Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input1, 0)),
		ARG_VAL(ValFunc2ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input2, 0)),
		ARG_VAL(ValFunc2ValArg, input2, 0),
		2);

	input1 = 11;
	input2 = 22;
	ValFunc2Arg_ret_val = ValFunc2ValArg(input1, input2);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc2ValArg)),
		CALLED_COUNT(ValFunc2ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc2Arg_ret_val),
		ValFunc2Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input1, 1)),
		ARG_VAL(ValFunc2ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input2, 1)),
		ARG_VAL(ValFunc2ValArg, input2, 1),
		22);

	TD_INIT(ValFunc2ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc2ValArg)),
		CALLED_COUNT(ValFunc2ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc2ValArg, 0)),
		FUNC_RET_VAL(ValFunc2ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc2ValArg, 1)),
		FUNC_RET_VAL(ValFunc2ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input1, 0)),
		(ValFunc2ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input2, 0)),
		(ValFunc2ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input1, 1)),
		(ValFunc2ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc2ValArg, input2, 1)),
		(ValFunc2ValArg, input2, 0),
		0);
}

BEGIN_DEF_TD(ValFunc3ValArg)
REG_VAL_ARG(ValFunc3ValArg, int, input1)
REG_VAL_ARG(ValFunc3ValArg, int, input2)
REG_VAL_ARG(ValFunc3ValArg, int, input3)
DEF_VAL_FUNC(int, ValFunc3ValArg, int, input1, int, input2, int, input3)
END_DEF_TD(ValFunc3ValArg)

void CheckValFunc3ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc3ValArg));

	TD_INIT(ValFunc3ValArg);

	SET_FUNC_RET_VAL(ValFunc3ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc3ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int ValFunc3Arg_ret_val = ValFunc3ValArg(input1, input2, input3);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc3ValArg)),
		CALLED_COUNT(ValFunc3ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc3Arg_ret_val),
		ValFunc3Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input1, 0)),
		ARG_VAL(ValFunc3ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input2, 0)),
		ARG_VAL(ValFunc3ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input3, 0)),
		ARG_VAL(ValFunc3ValArg, input3, 0),
		3);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	ValFunc3Arg_ret_val = ValFunc3ValArg(input1, input2, input3);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc3ValArg)),
		CALLED_COUNT(ValFunc3ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc3Arg_ret_val),
		ValFunc3Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input1, 1)),
		ARG_VAL(ValFunc3ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input2, 1)),
		ARG_VAL(ValFunc3ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input3, 1)),
		ARG_VAL(ValFunc3ValArg, input3, 1),
		33);

	TD_INIT(ValFunc3ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc3ValArg)),
		CALLED_COUNT(ValFunc3ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc3ValArg, 0)),
		FUNC_RET_VAL(ValFunc3ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc3ValArg, 1)),
		FUNC_RET_VAL(ValFunc3ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input1, 0)),
		ARG_VAL(ValFunc3ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input2, 0)),
		ARG_VAL(ValFunc3ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input3, 0)),
		ARG_VAL(ValFunc3ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input1, 1)),
		ARG_VAL(ValFunc3ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input2, 1)),
		ARG_VAL(ValFunc3ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc3ValArg, input3, 1)),
		ARG_VAL(ValFunc3ValArg, input3, 1),
		0);
}

BEGIN_DEF_TD(ValFunc4ValArg)
REG_VAL_ARG(ValFunc4ValArg, int, input1)
REG_VAL_ARG(ValFunc4ValArg, int, input2)
REG_VAL_ARG(ValFunc4ValArg, int, input3)
REG_VAL_ARG(ValFunc4ValArg, int, input4)
DEF_VAL_FUNC(int, ValFunc4ValArg, int, input1, int, input2, int, input3, int, input4)
END_DEF_TD(ValFunc4ValArg)

void CheckValFunc4ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc4ValArg));

	TD_INIT(ValFunc4ValArg);

	SET_FUNC_RET_VAL(ValFunc4ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc4ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int ValFunc4Arg_ret_val = ValFunc4ValArg(input1, input2, input3, input4);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc4ValArg)),
		CALLED_COUNT(ValFunc4ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc4Arg_ret_val),
		ValFunc4Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input1, 0)),
		ARG_VAL(ValFunc4ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input2, 0)),
		ARG_VAL(ValFunc4ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input3, 0)),
		ARG_VAL(ValFunc4ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input4, 0)),
		ARG_VAL(ValFunc4ValArg, input4, 0),
		4);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	ValFunc4Arg_ret_val = ValFunc4ValArg(input1, input2, input3, input4);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc4ValArg)),
		CALLED_COUNT(ValFunc4ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc4Arg_ret_val),
		ValFunc4Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input1, 1)),
		ARG_VAL(ValFunc4ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input2, 1)),
		ARG_VAL(ValFunc4ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input3, 1)),
		ARG_VAL(ValFunc4ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input4, 1)),
		ARG_VAL(ValFunc4ValArg, input4, 1),
		44);

	TD_INIT(ValFunc4ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc4ValArg)),
		CALLED_COUNT(ValFunc4ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc4ValArg, 0)),
		FUNC_RET_VAL(ValFunc4ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc4ValArg, 1)),
		FUNC_RET_VAL(ValFunc4ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input1, 0)),
		ARG_VAL(ValFunc4ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input2, 0)),
		ARG_VAL(ValFunc4ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input3, 0)),
		ARG_VAL(ValFunc4ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input4, 0)),
		ARG_VAL(ValFunc4ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input1, 1)),
		ARG_VAL(ValFunc4ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input2, 1)),
		ARG_VAL(ValFunc4ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input3, 1)),
		ARG_VAL(ValFunc4ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc4ValArg, input4, 1)),
		ARG_VAL(ValFunc4ValArg, input4, 1),
		0);
}

BEGIN_DEF_TD(ValFunc5ValArg)
REG_VAL_ARG(ValFunc5ValArg, int, input1)
REG_VAL_ARG(ValFunc5ValArg, int, input2)
REG_VAL_ARG(ValFunc5ValArg, int, input3)
REG_VAL_ARG(ValFunc5ValArg, int, input4)
REG_VAL_ARG(ValFunc5ValArg, int, input5)
DEF_VAL_FUNC(int, ValFunc5ValArg, int, input1, int, input2, int, input3, int, input4, int, input5)
END_DEF_TD(ValFunc5ValArg)

void CheckValFunc5ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc5ValArg));

	TD_INIT(ValFunc5ValArg);

	SET_FUNC_RET_VAL(ValFunc5ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc5ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int ValFunc5Arg_ret_val = ValFunc5ValArg(input1, input2, input3, input4, input5);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc5ValArg)),
		CALLED_COUNT(ValFunc5ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc5Arg_ret_val),
		ValFunc5Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input1, 0)),
		ARG_VAL(ValFunc5ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input2, 0)),
		ARG_VAL(ValFunc5ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input3, 0)),
		ARG_VAL(ValFunc5ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input4, 0)),
		ARG_VAL(ValFunc5ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input5, 0)),
		ARG_VAL(ValFunc5ValArg, input5, 0),
		5);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	ValFunc5Arg_ret_val = ValFunc5ValArg(input1, input2, input3, input4, input5);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc5ValArg)),
		CALLED_COUNT(ValFunc5ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc5Arg_ret_val),
		ValFunc5Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input1, 1)),
		ARG_VAL(ValFunc5ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input2, 1)),
		ARG_VAL(ValFunc5ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input3, 1)),
		ARG_VAL(ValFunc5ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input4, 1)),
		ARG_VAL(ValFunc5ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input5, 1)),
		ARG_VAL(ValFunc5ValArg, input5, 1),
		55);

	TD_INIT(ValFunc5ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc5ValArg)),
		CALLED_COUNT(ValFunc5ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc5ValArg, 0)),
		FUNC_RET_VAL(ValFunc5ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc5ValArg, 1)),
		FUNC_RET_VAL(ValFunc5ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input1, 0)),
		ARG_VAL(ValFunc5ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input2, 0)),
		ARG_VAL(ValFunc5ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input3, 0)),
		ARG_VAL(ValFunc5ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input4, 0)),
		ARG_VAL(ValFunc5ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input5, 0)),
		ARG_VAL(ValFunc5ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input1, 1)),
		ARG_VAL(ValFunc5ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input2, 1)),
		ARG_VAL(ValFunc5ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input3, 1)),
		ARG_VAL(ValFunc5ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input4, 1)),
		ARG_VAL(ValFunc5ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc5ValArg, input5, 1)),
		ARG_VAL(ValFunc5ValArg, input5, 1),
		0);
}

BEGIN_DEF_TD(ValFunc6ValArg)
REG_VAL_ARG(ValFunc6ValArg, int, input1)
REG_VAL_ARG(ValFunc6ValArg, int, input2)
REG_VAL_ARG(ValFunc6ValArg, int, input3)
REG_VAL_ARG(ValFunc6ValArg, int, input4)
REG_VAL_ARG(ValFunc6ValArg, int, input5)
REG_VAL_ARG(ValFunc6ValArg, int, input6)
DEF_VAL_FUNC(int, ValFunc6ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6)
END_DEF_TD(ValFunc6ValArg)

void CheckValFunc6ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc6ValArg));

	TD_INIT(ValFunc6ValArg);

	SET_FUNC_RET_VAL(ValFunc6ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc6ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int ValFunc6Arg_ret_val = ValFunc6ValArg(input1, input2, input3, input4, input5, input6);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc6ValArg)),
		CALLED_COUNT(ValFunc6ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc6Arg_ret_val),
		ValFunc6Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input1, 0)),
		ARG_VAL(ValFunc6ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input2, 0)),
		ARG_VAL(ValFunc6ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input3, 0)),
		ARG_VAL(ValFunc6ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input4, 0)),
		ARG_VAL(ValFunc6ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input5, 0)),
		ARG_VAL(ValFunc6ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input6, 0)),
		ARG_VAL(ValFunc6ValArg, input6, 0),
		6);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	ValFunc6Arg_ret_val = ValFunc6ValArg(input1, input2, input3, input4, input5, input6);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc6ValArg)),
		CALLED_COUNT(ValFunc6ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc6Arg_ret_val),
		ValFunc6Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input1, 1)),
		ARG_VAL(ValFunc6ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input2, 1)),
		ARG_VAL(ValFunc6ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input3, 1)),
		ARG_VAL(ValFunc6ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input4, 1)),
		ARG_VAL(ValFunc6ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input5, 1)),
		ARG_VAL(ValFunc6ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input6, 1)),
		ARG_VAL(ValFunc6ValArg, input6, 1),
		66);

	TD_INIT(ValFunc6ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc6ValArg)),
		CALLED_COUNT(ValFunc6ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc6ValArg, 0)),
		FUNC_RET_VAL(ValFunc6ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc6ValArg, 1)),
		FUNC_RET_VAL(ValFunc6ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input1, 0)),
		ARG_VAL(ValFunc6ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input2, 0)),
		ARG_VAL(ValFunc6ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input3, 0)),
		ARG_VAL(ValFunc6ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input4, 0)),
		ARG_VAL(ValFunc6ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input5, 0)),
		ARG_VAL(ValFunc6ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input6, 0)),
		ARG_VAL(ValFunc6ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input1, 1)),
		ARG_VAL(ValFunc6ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input2, 1)),
		ARG_VAL(ValFunc6ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input3, 1)),
		ARG_VAL(ValFunc6ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input4, 1)),
		ARG_VAL(ValFunc6ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input5, 1)),
		ARG_VAL(ValFunc6ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc6ValArg, input6, 1)),
		ARG_VAL(ValFunc6ValArg, input6, 1),
		0);
}

BEGIN_DEF_TD(ValFunc7ValArg)
REG_VAL_ARG(ValFunc7ValArg, int, input1)
REG_VAL_ARG(ValFunc7ValArg, int, input2)
REG_VAL_ARG(ValFunc7ValArg, int, input3)
REG_VAL_ARG(ValFunc7ValArg, int, input4)
REG_VAL_ARG(ValFunc7ValArg, int, input5)
REG_VAL_ARG(ValFunc7ValArg, int, input6)
REG_VAL_ARG(ValFunc7ValArg, int, input7)
DEF_VAL_FUNC(int, ValFunc7ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7)
END_DEF_TD(ValFunc7ValArg)

void CheckValFunc7ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc7ValArg));

	TD_INIT(ValFunc7ValArg);

	SET_FUNC_RET_VAL(ValFunc7ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc7ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int ValFunc7Arg_ret_val = ValFunc7ValArg(input1, input2, input3, input4, input5, input6, input7);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc7ValArg)),
		CALLED_COUNT(ValFunc7ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc7Arg_ret_val),
		ValFunc7Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input1, 0)),
		ARG_VAL(ValFunc7ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input2, 0)),
		ARG_VAL(ValFunc7ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input3, 0)),
		ARG_VAL(ValFunc7ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input4, 0)),
		ARG_VAL(ValFunc7ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input5, 0)),
		ARG_VAL(ValFunc7ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input6, 0)),
		ARG_VAL(ValFunc7ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input7, 0)),
		ARG_VAL(ValFunc7ValArg, input7, 0),
		7);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	ValFunc7Arg_ret_val = ValFunc7ValArg(input1, input2, input3, input4, input5, input6, input7);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc7ValArg)),
		CALLED_COUNT(ValFunc7ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc7Arg_ret_val),
		ValFunc7Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input1, 1)),
		ARG_VAL(ValFunc7ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input2, 1)),
		ARG_VAL(ValFunc7ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input3, 1)),
		ARG_VAL(ValFunc7ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input4, 1)),
		ARG_VAL(ValFunc7ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input5, 1)),
		ARG_VAL(ValFunc7ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input6, 1)),
		ARG_VAL(ValFunc7ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input7, 1)),
		ARG_VAL(ValFunc7ValArg, input7, 1),
		77);

	TD_INIT(ValFunc7ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc7ValArg)),
		CALLED_COUNT(ValFunc7ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc7ValArg, 0)),
		FUNC_RET_VAL(ValFunc7ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc7ValArg, 1)),
		FUNC_RET_VAL(ValFunc7ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input1, 0)),
		ARG_VAL(ValFunc7ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input2, 0)),
		ARG_VAL(ValFunc7ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input3, 0)),
		ARG_VAL(ValFunc7ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input4, 0)),
		ARG_VAL(ValFunc7ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input5, 0)),
		ARG_VAL(ValFunc7ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input6, 0)),
		ARG_VAL(ValFunc7ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input7, 0)),
		ARG_VAL(ValFunc7ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input1, 1)),
		ARG_VAL(ValFunc7ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input2, 1)),
		ARG_VAL(ValFunc7ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input3, 1)),
		ARG_VAL(ValFunc7ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input4, 1)),
		ARG_VAL(ValFunc7ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input5, 1)),
		ARG_VAL(ValFunc7ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input6, 1)),
		ARG_VAL(ValFunc7ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc7ValArg, input7, 1)),
		ARG_VAL(ValFunc7ValArg, input7, 1),
		0);
}

BEGIN_DEF_TD(ValFunc8ValArg)
REG_VAL_ARG(ValFunc8ValArg, int, input1)
REG_VAL_ARG(ValFunc8ValArg, int, input2)
REG_VAL_ARG(ValFunc8ValArg, int, input3)
REG_VAL_ARG(ValFunc8ValArg, int, input4)
REG_VAL_ARG(ValFunc8ValArg, int, input5)
REG_VAL_ARG(ValFunc8ValArg, int, input6)
REG_VAL_ARG(ValFunc8ValArg, int, input7)
REG_VAL_ARG(ValFunc8ValArg, int, input8)
DEF_VAL_FUNC(int, ValFunc8ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8)
END_DEF_TD(ValFunc8ValArg)

void CheckValFunc8ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc8ValArg));

	TD_INIT(ValFunc8ValArg);

	SET_FUNC_RET_VAL(ValFunc8ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc8ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int input8 = 8;
	int ValFunc8Arg_ret_val = ValFunc8ValArg(input1, input2, input3, input4, input5, input6, input7, input8);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc8ValArg)),
		CALLED_COUNT(ValFunc8ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc8Arg_ret_val),
		ValFunc8Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input1, 0)),
		ARG_VAL(ValFunc8ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input2, 0)),
		ARG_VAL(ValFunc8ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input3, 0)),
		ARG_VAL(ValFunc8ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input4, 0)),
		ARG_VAL(ValFunc8ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input5, 0)),
		ARG_VAL(ValFunc8ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input6, 0)),
		ARG_VAL(ValFunc8ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input7, 0)),
		ARG_VAL(ValFunc8ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input8, 0)),
		ARG_VAL(ValFunc8ValArg, input8, 0),
		8);

	input1 = 11;
	input2 = 22;
	input3 = 33;
	input4 = 44;
	input5 = 55;
	input6 = 66;
	input7 = 77;
	input8 = 88;
	ValFunc8Arg_ret_val = ValFunc8ValArg(input1, input2, input3, input4, input5, input6, input7, input8);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc8ValArg)),
		CALLED_COUNT(ValFunc8ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc8Arg_ret_val),
		ValFunc8Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input1, 1)),
		ARG_VAL(ValFunc8ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input2, 1)),
		ARG_VAL(ValFunc8ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input3, 1)),
		ARG_VAL(ValFunc8ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input4, 1)),
		ARG_VAL(ValFunc8ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input5, 1)),
		ARG_VAL(ValFunc8ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input6, 1)),
		ARG_VAL(ValFunc8ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input7, 1)),
		ARG_VAL(ValFunc8ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input8, 1)),
		ARG_VAL(ValFunc8ValArg, input8, 1),
		88);

	TD_INIT(ValFunc8ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc8ValArg)),
		CALLED_COUNT(ValFunc8ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc8ValArg, 0)),
		FUNC_RET_VAL(ValFunc8ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc8ValArg, 1)),
		FUNC_RET_VAL(ValFunc8ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input1, 0)),
		ARG_VAL(ValFunc8ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input2, 0)),
		ARG_VAL(ValFunc8ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input3, 0)),
		ARG_VAL(ValFunc8ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input4, 0)),
		ARG_VAL(ValFunc8ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input5, 0)),
		ARG_VAL(ValFunc8ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input6, 0)),
		ARG_VAL(ValFunc8ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input7, 0)),
		ARG_VAL(ValFunc8ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input8, 0)),
		ARG_VAL(ValFunc8ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input1, 1)),
		ARG_VAL(ValFunc8ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input2, 1)),
		ARG_VAL(ValFunc8ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input3, 1)),
		ARG_VAL(ValFunc8ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input4, 1)),
		ARG_VAL(ValFunc8ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input5, 1)),
		ARG_VAL(ValFunc8ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input6, 1)),
		ARG_VAL(ValFunc8ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input7, 1)),
		ARG_VAL(ValFunc8ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc8ValArg, input8, 1)),
		ARG_VAL(ValFunc8ValArg, input8, 1),
		0);
}

BEGIN_DEF_TD(ValFunc9ValArg)
REG_VAL_ARG(ValFunc9ValArg, int, input1)
REG_VAL_ARG(ValFunc9ValArg, int, input2)
REG_VAL_ARG(ValFunc9ValArg, int, input3)
REG_VAL_ARG(ValFunc9ValArg, int, input4)
REG_VAL_ARG(ValFunc9ValArg, int, input5)
REG_VAL_ARG(ValFunc9ValArg, int, input6)
REG_VAL_ARG(ValFunc9ValArg, int, input7)
REG_VAL_ARG(ValFunc9ValArg, int, input8)
REG_VAL_ARG(ValFunc9ValArg, int, input9)
DEF_VAL_FUNC(int, ValFunc9ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8, int, input9)
END_DEF_TD(ValFunc9ValArg)

void CheckValFunc9ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc9ValArg));

	TD_INIT(ValFunc9ValArg);

	SET_FUNC_RET_VAL(ValFunc9ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc9ValArg, 1, 4);

	int input1 = 1;
	int input2 = 2;
	int input3 = 3;
	int input4 = 4;
	int input5 = 5;
	int input6 = 6;
	int input7 = 7;
	int input8 = 8;
	int input9 = 9;
	int ValFunc9Arg_ret_val = ValFunc9ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc9ValArg)),
		CALLED_COUNT(ValFunc9ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc9Arg_ret_val),
		ValFunc9Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input1, 0)),
		ARG_VAL(ValFunc9ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input2, 0)),
		ARG_VAL(ValFunc9ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input3, 0)),
		ARG_VAL(ValFunc9ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input4, 0)),
		ARG_VAL(ValFunc9ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input5, 0)),
		ARG_VAL(ValFunc9ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input6, 0)),
		ARG_VAL(ValFunc9ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input7, 0)),
		ARG_VAL(ValFunc9ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input8, 0)),
		ARG_VAL(ValFunc9ValArg, input8, 0),
		8);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input9, 0)),
		ARG_VAL(ValFunc9ValArg, input9, 0),
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
	ValFunc9Arg_ret_val = ValFunc9ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc9ValArg)),
		CALLED_COUNT(ValFunc9ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc9Arg_ret_val),
		ValFunc9Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input1, 1)),
		ARG_VAL(ValFunc9ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input2, 1)),
		ARG_VAL(ValFunc9ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input3, 1)),
		ARG_VAL(ValFunc9ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input4, 1)),
		ARG_VAL(ValFunc9ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input5, 1)),
		ARG_VAL(ValFunc9ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input6, 1)),
		ARG_VAL(ValFunc9ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input7, 1)),
		ARG_VAL(ValFunc9ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input8, 1)),
		ARG_VAL(ValFunc9ValArg, input8, 1),
		88);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input9, 1)),
		ARG_VAL(ValFunc9ValArg, input9, 1),
		99);

	TD_INIT(ValFunc9ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc9ValArg)),
		CALLED_COUNT(ValFunc9ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc9ValArg, 0)),
		FUNC_RET_VAL(ValFunc9ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc9ValArg, 1)),
		FUNC_RET_VAL(ValFunc9ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input1, 0)),
		ARG_VAL(ValFunc9ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input2, 0)),
		ARG_VAL(ValFunc9ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input3, 0)),
		ARG_VAL(ValFunc9ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input4, 0)),
		ARG_VAL(ValFunc9ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input5, 0)),
		ARG_VAL(ValFunc9ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input6, 0)),
		ARG_VAL(ValFunc9ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input7, 0)),
		ARG_VAL(ValFunc9ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input8, 0)),
		ARG_VAL(ValFunc9ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input9, 0)),
		ARG_VAL(ValFunc9ValArg, input9, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input1, 1)),
		ARG_VAL(ValFunc9ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input2, 1)),
		ARG_VAL(ValFunc9ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input3, 1)),
		ARG_VAL(ValFunc9ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input4, 1)),
		ARG_VAL(ValFunc9ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input5, 1)),
		ARG_VAL(ValFunc9ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input6, 1)),
		ARG_VAL(ValFunc9ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input7, 1)),
		ARG_VAL(ValFunc9ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input8, 1)),
		ARG_VAL(ValFunc9ValArg, input8, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc9ValArg, input9, 1)),
		ARG_VAL(ValFunc9ValArg, input9, 1),
		0);
}

BEGIN_DEF_TD(ValFunc10ValArg)
REG_VAL_ARG(ValFunc10ValArg, int, input1)
REG_VAL_ARG(ValFunc10ValArg, int, input2)
REG_VAL_ARG(ValFunc10ValArg, int, input3)
REG_VAL_ARG(ValFunc10ValArg, int, input4)
REG_VAL_ARG(ValFunc10ValArg, int, input5)
REG_VAL_ARG(ValFunc10ValArg, int, input6)
REG_VAL_ARG(ValFunc10ValArg, int, input7)
REG_VAL_ARG(ValFunc10ValArg, int, input8)
REG_VAL_ARG(ValFunc10ValArg, int, input9)
REG_VAL_ARG(ValFunc10ValArg, int, input10)
DEF_VAL_FUNC(int, ValFunc10ValArg, int, input1, int, input2, int, input3, int, input4, int, input5, int, input6, int, input7, int, input8, int, input9, int, input10)
END_DEF_TD(ValFunc10ValArg)

void CheckValFunc10ValArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckValFunc10ValArg));

	TD_INIT(ValFunc10ValArg);

	SET_FUNC_RET_VAL(ValFunc10ValArg, 0, 3);
	SET_FUNC_RET_VAL(ValFunc10ValArg, 1, 4);

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
	int ValFunc10Arg_ret_val = ValFunc10ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9, input10);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc10ValArg)),
		CALLED_COUNT(ValFunc10ValArg),
		1);
	CHECK_VALUE(
		GET_NAME(ValFunc10Arg_ret_val),
		ValFunc10Arg_ret_val,
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input1, 0)),
		ARG_VAL(ValFunc10ValArg, input1, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input2, 0)),
		ARG_VAL(ValFunc10ValArg, input2, 0),
		2);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input3, 0)),
		ARG_VAL(ValFunc10ValArg, input3, 0),
		3);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input4, 0)),
		ARG_VAL(ValFunc10ValArg, input4, 0),
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input5, 0)),
		ARG_VAL(ValFunc10ValArg, input5, 0),
		5);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input6, 0)),
		ARG_VAL(ValFunc10ValArg, input6, 0),
		6);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input7, 0)),
		ARG_VAL(ValFunc10ValArg, input7, 0),
		7);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input8, 0)),
		ARG_VAL(ValFunc10ValArg, input8, 0),
		8);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input9, 0)),
		ARG_VAL(ValFunc10ValArg, input9, 0),
		9);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input10, 0)),
		ARG_VAL(ValFunc10ValArg, input10, 0),
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
	input10 = 100;
	ValFunc10Arg_ret_val = ValFunc10ValArg(input1, input2, input3, input4, input5, input6, input7, input8, input9, input10);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc10ValArg)),
		CALLED_COUNT(ValFunc10ValArg),
		2);
	CHECK_VALUE(
		GET_NAME(ValFunc10Arg_ret_val),
		ValFunc10Arg_ret_val,
		4);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input1, 1)),
		ARG_VAL(ValFunc10ValArg, input1, 1),
		11);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input2, 1)),
		ARG_VAL(ValFunc10ValArg, input2, 1),
		22);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input3, 1)),
		ARG_VAL(ValFunc10ValArg, input3, 1),
		33);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input4, 1)),
		ARG_VAL(ValFunc10ValArg, input4, 1),
		44);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input5, 1)),
		ARG_VAL(ValFunc10ValArg, input5, 1),
		55);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input6, 1)),
		ARG_VAL(ValFunc10ValArg, input6, 1),
		66);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input7, 1)),
		ARG_VAL(ValFunc10ValArg, input7, 1),
		77);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input8, 1)),
		ARG_VAL(ValFunc10ValArg, input8, 1),
		88);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input9, 1)),
		ARG_VAL(ValFunc10ValArg, input9, 1),
		99);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input10, 1)),
		ARG_VAL(ValFunc10ValArg, input10, 1),
		100);

	TD_INIT(ValFunc10ValArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(ValFunc10ValArg)),
		CALLED_COUNT(ValFunc10ValArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc10ValArg, 0)),
		FUNC_RET_VAL(ValFunc10ValArg, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			FUNC_RET_VAL(ValFunc10ValArg, 1)),
		FUNC_RET_VAL(ValFunc10ValArg, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input1, 0)),
		ARG_VAL(ValFunc10ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input2, 0)),
		ARG_VAL(ValFunc10ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input3, 0)),
		ARG_VAL(ValFunc10ValArg, input3, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input4, 0)),
		ARG_VAL(ValFunc10ValArg, input4, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input5, 0)),
		ARG_VAL(ValFunc10ValArg, input5, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input6, 0)),
		ARG_VAL(ValFunc10ValArg, input6, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input7, 0)),
		ARG_VAL(ValFunc10ValArg, input7, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input8, 0)),
		ARG_VAL(ValFunc10ValArg, input8, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input9, 0)),
		ARG_VAL(ValFunc10ValArg, input9, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input10, 0)),
		ARG_VAL(ValFunc10ValArg, input10, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input1, 1)),
		ARG_VAL(ValFunc10ValArg, input1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input2, 1)),
		ARG_VAL(ValFunc10ValArg, input2, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input3, 1)),
		ARG_VAL(ValFunc10ValArg, input3, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input4, 1)),
		ARG_VAL(ValFunc10ValArg, input4, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input5, 1)),
		ARG_VAL(ValFunc10ValArg, input5, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input6, 1)),
		ARG_VAL(ValFunc10ValArg, input6, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input7, 1)),
		ARG_VAL(ValFunc10ValArg, input7, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input8, 1)),
		ARG_VAL(ValFunc10ValArg, input8, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input9, 1)),
		ARG_VAL(ValFunc10ValArg, input9, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			ARG_VAL(ValFunc10ValArg, input10, 1)),
		ARG_VAL(ValFunc10ValArg, input10, 1),
		0);
}
