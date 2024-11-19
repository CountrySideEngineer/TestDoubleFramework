#include <iostream>
#include <Windows.h>

VOID	SampleSubFunc_004_001(BYTE** input1);

VOID	SampleFunc_004(BYTE* input1, ULONG input2)
{
	BYTE*	buff = NULL;

	SampleSubFunc_004_001(&buff);
	for (ULONG index = 0; index < input2; index++) {
		*(input1 + index) = buff[index];
	}
}
