#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf_check.h"
#include "tdf.h"

BEGIN_DEF_TD(VoidFuncInPtrArg)
REG_PTR_ARG_P1_IN(VoidFuncInPtrArg, int, ptrInput1)
DEF_VOID_FUNC(VoidFuncInPtrArg, int*, ptrInput1)
END_DEF_TD(VoidFuncInPtrArg)

void CheckVoidFuncInPtrArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFuncInPtrArg));

	TD_INIT(VoidFuncInPtrArg);

	int	ptrInput1[20] = { 0 };
	for (int index = 0; index < 10; index++) {
		ptrInput1[index] = (index + 1);
	}
	SET_PTR_ARG_VAL_SIZE(VoidFuncInPtrArg, ptrInput1, 0, 10);
	SET_PTR_ARG_VAL_SIZE(VoidFuncInPtrArg, ptrInput1, 1, 20);

	VoidFuncInPtrArg(ptrInput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInPtrArg)),
		CALLED_COUNT(VoidFuncInPtrArg),
		1);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 0)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 0),
		1);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 1)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 1),
		2);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 8)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 8),
		9);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 9)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 9),
		10);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 10)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 10),
		0);

	for (int index = 0; index < 20; index++) {
		ptrInput1[index] = 10 + (index + 1);
	}

	VoidFuncInPtrArg(ptrInput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInPtrArg)),
		CALLED_COUNT(VoidFuncInPtrArg),
		2);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 0)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 0),
		11);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 1)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 1),
		12);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 8)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 8),
		19);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 9)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 9),
		20);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 10)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 10),
		21);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 19)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 19),
		30);

	TD_INIT(VoidFuncInPtrArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInPtrArg)),
		CALLED_COUNT(VoidFuncInPtrArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 0)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 1)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 8)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 8),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 9)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 0, 9),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 0)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 1)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 8)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 8),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 9)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 9),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 10)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 10),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 19)),
		PTR_ARG_VAL(VoidFuncInPtrArg, ptrInput1, 1, 19),
		0);
}

BEGIN_DEF_TD(VoidFuncOutPtrArg)
REG_PTR_ARG_P1_OUT(VoidFuncOutPtrArg, int, ptrInput1)
DEF_VOID_FUNC(VoidFuncOutPtrArg, int*, ptrInput1)
END_DEF_TD(VoidFuncOutPtrArg)

void CheckVoidFuncOutPtrArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFuncOutPtrArg));

	TD_INIT(VoidFuncOutPtrArg);

	int	ptrInput1[20] = { 0 };
	for (int index = 0; index < 10; index++) {
		ptrInput1[index] = 0;
	}
	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncOutPtrArg, ptrInput1, 0, 10);
	for (int index = 0; index < 10; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, index, (index + 1));
	}

	VoidFuncOutPtrArg(ptrInput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncOutPtrArg)),
		CALLED_COUNT(VoidFuncOutPtrArg),
		1);
	CHECK_VALUE(
		GET_NAME(ptrInput1[0]),
		ptrInput1[0],
		1);
	CHECK_VALUE(
		GET_NAME(ptrInput1[1]),
		ptrInput1[1],
		2);
	CHECK_VALUE(
		GET_NAME(ptrInput1[8]),
		ptrInput1[8],
		9);
	CHECK_VALUE(
		GET_NAME(ptrInput1[9]),
		ptrInput1[9],
		10);
	CHECK_VALUE(
		GET_NAME(ptrInput1[10]),
		ptrInput1[10],
		0);

	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncOutPtrArg, ptrInput1, 1, 20);
	for (int index = 0; index < 20; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, index, (10 + (index + 1)));
	}

	VoidFuncOutPtrArg(ptrInput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncOutPtrArg)),
		CALLED_COUNT(VoidFuncOutPtrArg),
		2);
	CHECK_VALUE(
		GET_NAME(ptrInput1[0]),
		ptrInput1[0],
		11);
	CHECK_VALUE(
		GET_NAME(ptrInput1[1]),
		ptrInput1[1],
		12);
	CHECK_VALUE(
		GET_NAME(ptrInput1[8]),
		ptrInput1[8],
		19);
	CHECK_VALUE(
		GET_NAME(ptrInput1[9]),
		ptrInput1[9],
		20);
	CHECK_VALUE(
		GET_NAME(ptrInput1[10]),
		ptrInput1[10],
		21);
	CHECK_VALUE(
		GET_NAME(ptrInput1[19]),
		ptrInput1[19],
		30);

	TD_INIT(VoidFuncOutPtrArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncOutPtrArg)),
		CALLED_COUNT(VoidFuncOutPtrArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL_SIZE(VoidFuncOutPtrArg, ptrInput1, 1)),
		PTR_ARG_RET_VAL_SIZE(VoidFuncOutPtrArg, ptrInput1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 0)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 1)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 8)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 8),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 9)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 0, 9),
		0);



}
