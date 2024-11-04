#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEFINE_TD(SampleSubFunc_001_001)
REG_VALUE_ARG(SampleSubFunc_001_001, SHORT, input1)
REG_VALUE_ARG(SampleSubFunc_001_001, SHORT, input2)
DEFINE_VAL_FUNC_2(LONG, SampleSubFunc_001_001, SHORT, input1, SHORT, input2)
END_DEFINE_TD(SampleSubFunc_001_001)

BEGIN_DEFINE_TD(SampleSubFunc_001_002)
REG_VALUE_ARG(SampleSubFunc_001_002, SHORT, input1)
REG_VALUE_ARG(SampleSubFunc_001_002, SHORT, input2)
DEFINE_VAL_FUNC_2(LONG, SampleSubFunc_001_002, SHORT, input1, SHORT, input2)
END_DEFINE_TD(SampleSubFunc_001_002)
