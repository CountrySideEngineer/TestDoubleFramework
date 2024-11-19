#include <iostream>
#include <tchar.h>
#include "td2.h"

int*	subFuncB(short** input1);

int main()
{
	subFuncB_init();

	for (long index = 0; index < 12; index++) {
		subFuncB_return_value[0][index] = (index + 1);
	}

	for (long index = 0; index < 23; index++) {
		subFuncB_input1_return_value[0][index] = (short)(index * 3);
	}
	subFuncB_input1_return_value_size[0] = 1;

	short*	input = NULL;

	int*	_ret_val = subFuncB(&input);

	for (long index = 0; index < 12; index++) {
		_tprintf(_T("0x%08X"), *(_ret_val + index));
		if ((0 != index) && (0 == ((index + 1) % 16))) {
			_tprintf(_T("\r\n"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\r\n"));

	for (long index = 0; index < 23; index++) {
		_tprintf(_T("0x%04X"), *(input + index));
		if ((0 != index) && (0 == ((index + 1) % 16))) {
			_tprintf(_T("\r\n"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
}
