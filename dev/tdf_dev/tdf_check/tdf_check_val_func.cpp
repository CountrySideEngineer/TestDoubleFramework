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

	ValFunc3ValArg_init();;

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

	ValFunc3ValArg_init();;

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
