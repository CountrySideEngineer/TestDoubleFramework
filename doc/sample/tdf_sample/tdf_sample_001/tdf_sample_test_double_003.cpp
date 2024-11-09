#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEFINE_TD(SampleSubFunc_003_001)
REG_PTR_ARG_P1_OUT(SampleSubFunc_003_001, BYTE, input1)
REG_VALUE_ARG(SampleSubFunc_003_001, ULONG, input2)
DEFINE_VOID_FUNC_2(SampleSubFunc_003_001, BYTE*, input1, ULONG, input2)
END_DEFINE_TD(SampleSubFunc_003_001)
