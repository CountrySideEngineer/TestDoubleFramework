#include <iostream>
#include <tchar.h>
#include "td.h"

int main()
{
	subFuncA_init();
	
	int		input1 = 123;
	char	_input2[100] = { 0 };
	char*	input2 = _input2;
	char	_input3[100] = { 0 };
	char*	input3 = _input3;
	char	_input4[100] = { 0 };
	char*	input4 = _input4;

	subFuncA_return_value[0] = 97;

	subFuncA_subInput2_value_size[0] = 11;
	for (int index = 0; index < 43; index++) {
		_input2[index] = (index + 1);
	}
	subFuncA_subInput3_return_value_size[0] = 23;
	for (int index = 0; index < 28; index++) {
		subFuncA_subInput3_return_value[0][index] = (index + 1);
	}
	subFuncA_subInput4_value_size[0] = 17;
	for (int index = 0; index < 43; index++) {
		_input4[index] = (index + 1);
	}
	subFuncA_subInput4_return_value_size[0] = 23;
	for (int index = 0; index < 38; index++) {
		subFuncA_subInput4_return_value[0][index] = (index * 10 + 1);
	}

	int _ret_val = subFuncA(input1, input2, input3, input4);

	_tprintf(_T("%32s = %d(0x%08x)\n"), _T("_ret_val"), _ret_val, _ret_val);
	_tprintf(_T("%32s = %d(0x%08x)\n"), _T("subFuncA_called_count"), subFuncA_called_count, subFuncA_called_count);
	_tprintf(_T("%32s = %d(0x%08x)\n"), _T("subFuncA_subInput1"), (int)subFuncA_subInput1, (int)subFuncA_subInput1);
	_tprintf(_T("%32s = %d(0x%08x)\n"), _T("subFuncA_subInput1[0]"), subFuncA_subInput1[0], subFuncA_subInput1[0]);
	_tprintf(_T("%32s :\n\t\t\t"), _T("subFuncA_subInput2_value[0]"));
	for (int index = 0; index < 100; index++) {
		_tprintf(_T("0x%02x"), subFuncA_subInput2_value[0][index]);
		if ((0 != index) && (0 == (index + 1) % 16)) {
			_tprintf(_T("\n\t\t\t"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\n"));
	_tprintf(_T("%32s :\n\t\t\t"), _T("_input3"));
	for (int index = 0; index < 100; index++) {
		_tprintf(_T("0x%02x"), _input3[index]);
		if ((0 != index) && (0 == (index + 1) % 16)) {
			_tprintf(_T("\n\t\t\t"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\n"));
	_tprintf(_T("%32s :\n\t\t\t"), _T("subFuncA_subInput4_value[0]"));
	for (int index = 0; index < 100; index++) {
		_tprintf(_T("0x%02x"), subFuncA_subInput4_value[0][index]);
		if ((0 != index) && (0 == (index + 1) % 16)) {
			_tprintf(_T("\n\t\t\t"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
	_tprintf(_T("\n"));
	_tprintf(_T("%32s :\n\t\t\t"), _T("_input3"));
	for (int index = 0; index < 100; index++) {
		_tprintf(_T("0x%02x"), (unsigned char)_input4[index]);
		if ((0 != index) && (0 == (index + 1) % 16)) {
			_tprintf(_T("\n\t\t\t"));
		}
		else {
			_tprintf(_T(" "));
		}
	}
}
