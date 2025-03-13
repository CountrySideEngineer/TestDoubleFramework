#include <iostream>

//	Functions to check macros of TestDoubleFramework.
void CheckVoidFuncNoArg(void);
void CheckVoidFunc1ValArg(void);
void CheckVoidFunc2ValArg(void);
void CheckVoidFunc3ValArg(void);
void CheckVoidFunc4ValArg(void);
void CheckVoidFunc5ValArg(void);
void CheckVoidFunc6ValArg(void);
void CheckVoidFunc7ValArg(void);
void CheckVoidFunc8ValArg(void);
void CheckVoidFunc9ValArg(void);
void CheckVoidFunc10ValArg(void);

void CheckVoidFunc()
{
	CheckVoidFunc1ValArg();
	CheckVoidFunc2ValArg();
	CheckVoidFunc3ValArg();
	CheckVoidFunc4ValArg();
	CheckVoidFunc5ValArg();
	CheckVoidFunc6ValArg();
	CheckVoidFunc7ValArg();
	CheckVoidFunc8ValArg();
	CheckVoidFunc9ValArg();
	CheckVoidFunc10ValArg();
}

void CheckValFuncNoArg(void);

void CheckValFunc()
{
	CheckValFuncNoArg();
}

int main()
{
	CheckVoidFunc();
	CheckValFunc();

	return 0;
}