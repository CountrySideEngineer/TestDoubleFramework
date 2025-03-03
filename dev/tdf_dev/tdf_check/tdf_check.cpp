#include <iostream>

//	Functions to check macros of TestDoubleFramework.
void CheckVoidFuncNoArg(void);
void CheckVoidFunc1ValArg(void);
void CheckVoidFunc2ValArg(void);
void CheckVoidFunc3ValArg(void);

int main()
{
	CheckVoidFuncNoArg();
	CheckVoidFunc1ValArg();
	CheckVoidFunc2ValArg();
	CheckVoidFunc3ValArg();

	return 0;
}