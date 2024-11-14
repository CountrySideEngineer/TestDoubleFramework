#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEFINE_TD(SampleSubFunc_004_001)
REG_PTR_ARG_P2_OUT(SampleSubFunc_004_001, BYTE, input1);
DEFINE_VOID_FUNC_1(SampleSubFunc_004_001, BYTE**, input1);
END_DEFINE_TD(SampleSubFunc_004_001)

BEGIN_DEFINE_TD(SampleSubFunc_004_002)
DEF_VOID_FUNC(SampleSubFunc_004_002)
END_DEFINE_TD(SampleSubFunc_004_002)

BEGIN_DEFINE_TD(SampleSubFunc_004_003)
REG_VALUE_ARG(SampleSubFunc_004_003, int, input1)
DEF_VOID_FUNC(SampleSubFunc_004_003, int, input1)
END_DEFINE_TD(SampleSubFunc_004_003)

BEGIN_DEFINE_TD(SampleSubFunc_004_004)
REG_VALUE_ARG(SampleSubFunc_004_004, int, input1)
REG_VALUE_ARG(SampleSubFunc_004_004, short, input2)
DEF_VOID_FUNC(SampleSubFunc_004_004, int, input1, short, input2)
END_DEFINE_TD(SampleSubFunc_004_004)

BEGIN_DEFINE_TD(SampleSubFunc_004_005)
REG_VALUE_ARG(SampleSubFunc_004_005, long, input1)
DEF_VALUE_FUNC(int, SampleSubFunc_004_005, long, input1)
END_DEFINE_TD(SampleSubFunc_004_005)

BEGIN_DEFINE_TD(SampleSubFunc_004_006)
REG_PTR_ARG_P1_IN(SampleSubFunc_004_006, int, input1)
DEF_VALUE_FUNC(long, SampleSubFunc_004_006, int*, input1)
END_DEFINE_TD(SampleSubFunc_004_006)

BEGIN_DEFINE_TD(SampleSubFunc_004_007)
DEF_PTR_FUNC(int, SampleSubFunc_004_007)
END_DEFINE_TD(SampleSubFunc_004_007)
