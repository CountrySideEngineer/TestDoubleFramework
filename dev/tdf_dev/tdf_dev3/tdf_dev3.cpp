#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "td3.h"

void*	subFuncC(SAMPLE_STRUCT* input1, SAMPLE_STRUCT** input2);

int main()
{
	subFuncC_init();

	SAMPLE_STRUCT input1;
	input1.member1 = 10;
	input1.member2 = 11;
	input1.member3 = 12;
	SAMPLE_STRUCT*	input2 = NULL;

	subFuncC_input1_value_size[0] = 1;
	subFuncC_input2_return_value[0][0].member1 = 31;
	subFuncC_input2_return_value[0][0].member2 = 37;
	subFuncC_input2_return_value[0][0].member3 = 41;
	subFuncC_input2_return_value_size[0] = 1;

	void*	_ret_val = subFuncC(&input1, &input2);

	BYTE* data = (BYTE*)(&input1);
	for (LONG index = 0; index < sizeof(SAMPLE_STRUCT); index++) {
		_tprintf(_T("0x%02X"), *(data + index));
		if ((0 != index) && (0 == ((index + 1) % 16))) {
			_tprintf(_T("\r\n"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\r\n"));

	data = (BYTE*)(&subFuncC_input1_value[0][0]);
	for (LONG index = 0; index < sizeof(SAMPLE_STRUCT); index++) {
		_tprintf(_T("0x%02X"), *(data + index));
		if ((0 != index) && (0 == ((index + 1) % 16))) {
			_tprintf(_T("\r\n"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\r\n"));

	data = (BYTE*)input2;
	for (LONG index = 0; index < sizeof(SAMPLE_STRUCT); index++) {
		_tprintf(_T("0x%02X"), *(data + index));
		if ((0 != index) && (0 == ((index + 1) % 16))) {
			_tprintf(_T("\r\n"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
}
