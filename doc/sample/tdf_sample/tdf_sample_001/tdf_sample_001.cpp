#include <iostream>
#include <Windows.h>
#include <tchar.h>

LONG	SampleSubFunc_001_001(SHORT input1, SHORT input2);
LONG	SampleSubFunc_001_002(SHORT input1, SHORT input2);

LONG SampleFunc_001(SHORT input1, SHORT input2)
{
	LONG	return1 = SampleSubFunc_001_001(input1, input1);
	LONG	return2 = SampleSubFunc_001_002(input2, input2);
	LONG	retVal = (return1 + return2);

	return retVal;
}
