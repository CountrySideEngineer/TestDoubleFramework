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
