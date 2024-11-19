#include <iostream>
#include <Windows.h>
#include <tchar.h>

VOID	SampleSubFunc_003_001(BYTE* input1, ULONG input2);

VOID	SampleFunc_003(BYTE* input1, SHORT input2)
{
	SampleSubFunc_003_001(input1, (ULONG)input2);
}
