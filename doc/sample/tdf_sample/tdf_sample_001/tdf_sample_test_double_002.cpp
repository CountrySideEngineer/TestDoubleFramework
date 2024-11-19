#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEF_TD(SampleSubFunc_002_001)
REG_PTR_ARG_P1_IN(SampleSubFunc_002_001, BYTE, input1)
REG_VAL_ARG(SampleSubFunc_002_001, ULONG, input2)
DEF_VOID_FUNC(SampleSubFunc_002_001, BYTE*, input1, ULONG, input2)
END_DEF_TD(SampleSubFunc_002_001)
