#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf.h"
#include "gtest/gtest.h"
#include "test_driver_002.h"
#include "tdf_sample_test_double_002.h"

// Test target function.
VOID	SampleFunc_002(BYTE* input1, SHORT input2);
VOID	SampleFunc_002_2(BYTE* input1, SHORT input2, BYTE* input3, SHORT input4);

VOID SampleFunc_002_test::SetUp()
{
	CALL_FUNC_INIT(SampleSubFunc_002_001)
}

VOID SampleFunc_002_test::TearDown() {}

TEST_F(SampleFunc_002_test, 001)
{
	BYTE	_input1 = 1;
	BYTE*	input1 = &_input1;
	SHORT	input2 = 1;

	SET_PTR_ARG_VAL_SIZE(SampleSubFunc_002_001, input1, 0, 1);
	SET_PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 0, 1);

	SampleFunc_002(input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_002_001));
	ASSERT_EQ(1, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 0));
	ASSERT_EQ(1, ARG_VAL(SampleSubFunc_002_001, input2, 0));
}

TEST_F(SampleFunc_002_test, 002)
{
	BYTE	_input1[10] = { 0 };
	BYTE*	input1 = &_input1[0];
	SHORT	input2 = 10;

	for (int index = 0; index < input2; index++) {
		_input1[index] = (index + 10);
	}
	SET_PTR_ARG_VAL_SIZE(SampleSubFunc_002_001, input1, 0, input2);

	SampleFunc_002(input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_002_001));
	ASSERT_EQ(10, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 0));
	ASSERT_EQ(11, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 1));
	ASSERT_EQ(19, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 9));
	ASSERT_EQ(10, ARG_VAL(SampleSubFunc_002_001, input2, 0));
}

VOID SampleFunc_002_2_test::SetUp()
{
	CALL_FUNC_INIT(SampleSubFunc_002_001)
}

VOID SampleFunc_002_2_test::TearDown() {}

TEST_F(SampleFunc_002_2_test, 001)
{
	BYTE	_input1 = 1;
	BYTE*	input1 = &_input1;
	SHORT	input2 = 1;
	BYTE	_input3[10] = { 0 };
	BYTE*	input3 = &_input3[0];
	SHORT	input4 = 7;

	SET_PTR_ARG_VAL_SIZE(SampleSubFunc_002_001, input1, 0, 1);
	SET_PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 0, 1);
	SET_PTR_ARG_VAL_SIZE(SampleSubFunc_002_001, input1, 1, input4);
	for (int index = 0; index < 10; index++) {
		input3[index] = (index + 1);
	}

	SampleFunc_002_2(input1, input2, input3, input4);

	ASSERT_EQ(2, CALLED_COUNT(SampleSubFunc_002_001));
	ASSERT_EQ(1, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 0, 0));
	ASSERT_EQ(1, ARG_VAL(SampleSubFunc_002_001, input2, 0));
	ASSERT_EQ(1, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 1, 0));
	ASSERT_EQ(2, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 1, 1));
	ASSERT_EQ(3, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 1, 2));
	ASSERT_EQ(7, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 1, 6));
	ASSERT_EQ(0, PTR_ARG_VAL(SampleSubFunc_002_001, input1, 1, 7));
	ASSERT_EQ(7, ARG_VAL(SampleSubFunc_002_001, input2, 1));
}
