#include <iostream>

//	Functions to check macros of TestDoubleFramework.
void CheckVoidFuncNoArg(void);
void CheckVoidFunc1ValArg(void);
void CheckVoidFunc2ValArg(void);

int main()
{
	CheckVoidFuncNoArg();
	CheckVoidFunc1ValArg();
	CheckVoidFunc2ValArg();

	return 0;
}