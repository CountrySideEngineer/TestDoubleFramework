#include <iostream>
#include <Windows.h>
#include "tdf.h"

BEGIN_DEF_TD(SampleSubFunc_004_001)
REG_PTR_ARG_P2_OUT(SampleSubFunc_004_001, BYTE, input1)
DEF_VOID_FUNC(SampleSubFunc_004_001, BYTE**, input1)
END_DEF_TD(SampleSubFunc_004_001)
