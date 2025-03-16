#pragma once

#define GET_NAME(name)	\
	_T(# name)

#define CHECK_VALUE(name, actual, expect)		\
	_tprintf(_T("%56s = %8d\t"), name, actual);	\
	if (expect == actual) {						\
		_tprintf(_T("\x1b[32mOK!\x1b[39m\n"));	\
	}											\
	else {										\
		_tprintf(_T("\x1b[31mNG!\x1b[39m\n"));	\
	}											\
