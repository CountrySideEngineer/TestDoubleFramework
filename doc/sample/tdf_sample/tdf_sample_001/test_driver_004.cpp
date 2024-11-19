#include <iostream>
#include <Windows.h>
#include "gtest/gtest.h"
#include "tdf.h"
#include "tdf_sample_test_double_004.h"
#include "test_driver_004.h"

//  Test target function.
VOID	SampleFunc_004(BYTE* input1, ULONG input2);

VOID	SampleFunc_004_test::SetUp()
{
	TD_INIT(SampleSubFunc_004_001);
}
VOID SampleFunc_004_test::TearDown() {}

TEST_F(SampleFunc_004_test, 001)
{
	BYTE	_input1[100];
	BYTE*	input1 = &_input1[0];
	ULONG	input2 = 10;

	SET_PTR_ARG_RET_VAL_SIZE(SampleSubFunc_004_001, input1, 0, 1);
	for (ULONG index = 0; index < input2; index++) {
		SET_PTR_ARG_RET_VAL(SampleSubFunc_004_001, input1, 0, index, (BYTE)(index + 10));
	}
	for (int index = 0; index < 100; index++) {
		_input1[index] = 0xAA;
	}

	SampleFunc_004(input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_004_001));
	ASSERT_EQ(10, _input1[0]);
	ASSERT_EQ(11, _input1[1]);
	ASSERT_EQ(12, _input1[2]);
	ASSERT_EQ(13, _input1[3]);
	ASSERT_EQ(14, _input1[4]);
}
