#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "tdf.h"

/*
	void FuncA(void);
 */
BEGIN_DEFINE_TD(funcA)
DEFINE_ARG_BUFF(funcA, int, input1)
DEFINE_PTR_ARG_VAL_BUFF(funcA, int, input2)
DEFINE_PTR_ARG_VAL_SIZE_BUFF(funcA, int, input2)
DEFINE_PTR_ARG_RETURN_VAL_BUFF(funcA, int, input2)
DEFINE_PTR_ARG_RETURN_VAL_SIZE_BUFF(funcA, int, input2)
END_DEFINE_TD(funcA)

BEGIN_DEFINE_TD(funcB)
//REG_PTR_ARG_P1_IN(funcB, char, input1)
REG_PTR_ARG_P1_IN(funcB, char, input1)
DEFINE_VOID_FUNC_1(funcB, char*, input1)
END_DEFINE_TD(funcB)

BEGIN_DEFINE_TD(funcC)
REG_VALUE_ARG(funcC, int, input1)
REG_PTR_ARG_P1_IN(funcC, char, input2)
REG_PTR_ARG_P1_OUT(funcC, short, input3)
DEFINE_VOID_FUNC_3(funcC, int, input1, char*, input2, char*, input3)
END_DEFINE_TD(funcC)

BEGIN_DEFINE_TD(funcD)
DEFINE_VAL_FUNC_0(int, funcD)
END_DEFINE_TD(funcD)




