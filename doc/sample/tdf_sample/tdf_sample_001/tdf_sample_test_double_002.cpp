#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEFINE_TD(SampleSubFunc_002_001)
REG_PTR_ARG_P1_IN(SampleSubFunc_002_001, BYTE, input1)
REG_VALUE_ARG(SampleSubFunc_002_001, ULONG, input2)
DEFINE_VOID_FUNC_2(SampleSubFunc_002_001, BYTE*, input1, ULONG, input2)
END_DEFINE_TD(SampleSubFunc_002_001)
