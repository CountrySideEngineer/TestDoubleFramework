#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEFINE_TD(SampleSubFunc_004_001)
REG_PTR_ARG_P2_OUT(SampleSubFunc_004_001, BYTE, input1);
DEFINE_VOID_FUNC_1(SampleSubFunc_004_001, BYTE**, input1);
END_DEFINE_TD(SampleSubFunc_004_001)
