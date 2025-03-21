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
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 0)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 1)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 18)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 18),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 19)),
		PTR_ARG_RET_VAL(VoidFuncOutPtrArg, ptrInput1, 1, 19),
		0);
}

BEGIN_DEF_TD(VoidFuncInOutPtrArg)
REG_PTR_ARG_P1_IN_OUT(VoidFuncInOutPtrArg, int, ptrInOutput1)
DEF_VOID_FUNC(VoidFuncInOutPtrArg, int*, ptrInOutput1)
END_DEF_TD(VoidFuncInOutPtrArg)

void CheckVoidFuncInOutPtrArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFuncInOutPtrArg));

	TD_INIT(VoidFuncInOutPtrArg);

	int	ptrInOutput1[20] = { 0 };
	for (int index = 0; index < 10; index++) {
		ptrInOutput1[index] = (index + 1);
	}

	SET_PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0, 10);

	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0, 10);
	for (int index = 0; index < 10; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, index, 10 + (index + 1));
	}

	VoidFuncInOutPtrArg(ptrInOutput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInOutPtrArg)),
		CALLED_COUNT(VoidFuncInOutPtrArg),
		1);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[0]),
		ptrInOutput1[0],
		11);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[1]),
		ptrInOutput1[1],
		12);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[8]),
		ptrInOutput1[8],
		19);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[9]),
		ptrInOutput1[9],
		20);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[10]),
		ptrInOutput1[10],
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0),
		1);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1),
		2);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8),
		9);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9),
		10);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 10)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 10),
		0);


	for (int index = 0; index < 20; index++) {
		ptrInOutput1[index] = 20 + (index + 1);
	}

	SET_PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1, 20);

	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1, 20);
	for (int index = 0; index < 20; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, index, 40 + (index + 1));
	}

	VoidFuncInOutPtrArg(ptrInOutput1);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInOutPtrArg)),
		CALLED_COUNT(VoidFuncInOutPtrArg),
		2);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[0]),
		ptrInOutput1[0],
		41);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[1]),
		ptrInOutput1[1],
		42);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[8]),
		ptrInOutput1[8],
		49);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[9]),
		ptrInOutput1[9],
		50);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[10]),
		ptrInOutput1[10],
		51);
	CHECK_VALUE(
		GET_NAME(ptrInOutput1[19]),
		ptrInOutput1[19],
		60);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0),
		21);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1),
		22);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8),
		29);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9),
		30);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10),
		31);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11),
		32);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18),
		39);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19),
		40);

	TD_INIT(VoidFuncInOutPtrArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncInOutPtrArg)),
		CALLED_COUNT(VoidFuncInOutPtrArg),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0)),
		PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0)),
		PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 8),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 0, 9),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1)),
		PTR_ARG_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1)),
		PTR_ARG_RET_VAL_SIZE(VoidFuncInOutPtrArg, ptrInOutput1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19)),
		PTR_ARG_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 8),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 9),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 10),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 11),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 18),
		0);
	CHECK_VALUE(
		GET_NAME(PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19)),
		PTR_ARG_RET_VAL(VoidFuncInOutPtrArg, ptrInOutput1, 1, 19),
		0);
}

BEGIN_DEF_TD(VoidFuncDoublePtrArg)
REG_PTR_ARG_P2_OUT(VoidFuncDoublePtrArg, int, dblPointerOutput1)
DEF_VOID_FUNC(VoidFuncDoublePtrArg, int**, dblPointerOutput1)
END_DEF_TD(VoidFuncDoublePtrArg)

void CheckVoidFuncDoublePtrArg(void)
{
	_tprintf(_T("%s Start!\n"), GET_NAME(CheckVoidFuncDoublePtrArg));

	TD_INIT(VoidFuncDoublePtrArg);

	int* ptrOutput = NULL;

	for (int index = 0; index < 10; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, index, (index + 1));
	}
	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 1);

	VoidFuncDoublePtrArg(&ptrOutput);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncDoublePtrArg)),
		CALLED_COUNT(VoidFuncDoublePtrArg),
		1);
	CHECK_VALUE(
		GET_NAME(ptrOutput[0]),
		ptrOutput[0],
		1);
	CHECK_VALUE(
		GET_NAME(ptrOutput[1]),
		ptrOutput[1],
		2);
	CHECK_VALUE(
		GET_NAME(ptrOutput[9]),
		ptrOutput[9],
		10);
	CHECK_VALUE(
		GET_NAME(ptrOutput[10]),
		ptrOutput[10],
		0);

	for (int index = 0; index < 20; index++) {
		SET_PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, index, 10 + (index + 1));
	}
	SET_PTR_ARG_RET_VAL_SIZE(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 1);

	ptrOutput = NULL;

	VoidFuncDoublePtrArg(&ptrOutput);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncDoublePtrArg)),
		CALLED_COUNT(VoidFuncDoublePtrArg),
		2);
	CHECK_VALUE(
		GET_NAME(ptrOutput[0]),
		ptrOutput[0],
		11);
	CHECK_VALUE(
		GET_NAME(ptrOutput[1]),
		ptrOutput[1],
		12);
	CHECK_VALUE(
		GET_NAME(ptrOutput[9]),
		ptrOutput[9],
		20);
	CHECK_VALUE(
		GET_NAME(ptrOutput[10]),
		ptrOutput[10],
		21);
	CHECK_VALUE(
		GET_NAME(ptrOutput[11]),
		ptrOutput[11],
		22);
	CHECK_VALUE(
		GET_NAME(ptrOutput[19]),
		ptrOutput[19],
		30);

	TD_INIT(VoidFuncDoublePtrArg);

	CHECK_VALUE(
		GET_NAME(
			CALLED_COUNT(VoidFuncDoublePtrArg)),
		CALLED_COUNT(VoidFuncDoublePtrArg),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 0)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 1)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 8)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 8),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 9)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 9),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 10)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 0, 10),
		0);


	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 0)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 0),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 1)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 1),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 8)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 8),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 9)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 9),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 10)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 10),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 11)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 11),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 18)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 18),
		0);
	CHECK_VALUE(
		GET_NAME(
			PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 19)),
		PTR_ARG_RET_VAL(VoidFuncDoublePtrArg, dblPointerOutput1, 1, 19),
		0);
}
