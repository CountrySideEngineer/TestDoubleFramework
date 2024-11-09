#include <iostream>
#include <Windows.h>
#include <tchar.h>

VOID	SampleSubFunc_002_001(BYTE* input1, ULONG input2);

VOID	SampleFunc_002(BYTE* input1, SHORT input2)
{
	SampleSubFunc_002_001(input1, (ULONG)input2);
}

VOID	SampleFunc_002_2(BYTE* input1, SHORT input2, BYTE* input3, SHORT input4)
{
	SampleSubFunc_002_001(input1, (ULONG)input2);
	SampleSubFunc_002_001(input3, (ULONG)input4);
}
