#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf.h"
#include "gtest/gtest.h"
#include "test_driver.h"
#include "tdf_sample_test_double_001.h"
#include "tdf_sample_test_double_002.h"

// Test target function.
LONG	SampleFunc_001(SHORT input1, SHORT input2);
VOID	SampleFunc_002(BYTE* input1, SHORT input2);

VOID SampleFunc_001_test::SetUp()
{
	CALL_FUNC_INIT(SampleSubFunc_001_001)
}

VOID SampleFunc_001_test::TearDown() { }

TEST_F(SampleFunc_001_test, 001)
{
	SHORT	input1 = 1;
	SHORT	input2 = 2;

	SET_FUNC_RET_VAL(SampleSubFunc_001_001, 0, 1)
	SET_FUNC_RET_VAL(SampleSubFunc_001_002, 0, 2)

	LONG	_ret_val = SampleFunc_001(input1, input2);

	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_001_001));
	ASSERT_EQ(1, CALLED_COUNT(SampleSubFunc_001_002));
	ASSERT_EQ(3, _ret_val);
}

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
