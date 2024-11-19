#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEF_TD(SampleSubFunc_001_001)
REG_VAL_ARG(SampleSubFunc_001_001, SHORT, input1)
REG_VAL_ARG(SampleSubFunc_001_001, SHORT, input2)
DEF_VAL_FUNC(LONG, SampleSubFunc_001_001, SHORT, input1, SHORT, input2)
END_DEF_TD(SampleSubFunc_001_001)

BEGIN_DEF_TD(SampleSubFunc_001_002)
REG_VAL_ARG(SampleSubFunc_001_002, SHORT, input1)
REG_VAL_ARG(SampleSubFunc_001_002, SHORT, input2)
DEF_VAL_FUNC(LONG, SampleSubFunc_001_002, SHORT, input1, SHORT, input2)
END_DEF_TD(SampleSubFunc_001_002)
