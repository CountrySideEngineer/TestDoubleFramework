#include <iostream>
#include <Windows.h>
#include "tdf.h"
#include "gtest/gtest.h"
#include "test_driver_003.h"
#include "tdf_sample_test_double_003.h"

// Test target function.
VOID	SampleFunc_003(BYTE* input1, SHORT input2);

VOID SampleFunc_003_test::SetUp()
{
	CALL_FUNC_INIT(SampleSubFunc_003_001)
}

VOID SampleFunc_003_test::TearDown() { }

TEST_F(SampleFunc_003_test, 001)
{
	BYTE	_input1[100];
	BYTE*	input1 = &_input1[0];
	SHORT	input2 = 1;

	SET_PTR_ARG_RET_VAL_SIZE(SampleSubFunc_003_001, input1, 0, input2);
	SET_PTR_ARG_RET_VAL(SampleSubFunc_003_001, input1, 0, 0, 11);

	for (int index = 0; index < 100; index++) {
		_input1[index] = 0;
	}

	SampleFunc_003(_input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_003_001));
	ASSERT_EQ(11, _input1[0]);
}

TEST_F(SampleFunc_003_test, 002)
{
	BYTE	_input1[100];
	BYTE*	input1 = &_input1[0];
	SHORT	input2 = 7;

	SET_PTR_ARG_RET_VAL_SIZE(SampleSubFunc_003_001, input1, 0, input2);

	for (int index = 0; index < input2; index++) {
		SET_PTR_ARG_RET_VAL(SampleSubFunc_003_001, input1, 0, index, (index + 1) * 3);
	}

	for (int index = 0; index < 100; index++) {
		_input1[index] = 0;
	}

	SampleFunc_003(_input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_003_001));
	ASSERT_EQ(3, _input1[0]);
	ASSERT_EQ(6, _input1[1]);
	ASSERT_EQ(9, _input1[2]);
	ASSERT_EQ(12, _input1[3]);
	ASSERT_EQ(15, _input1[4]);
	ASSERT_EQ(18, _input1[5]);
	ASSERT_EQ(21, _input1[6]);
}
