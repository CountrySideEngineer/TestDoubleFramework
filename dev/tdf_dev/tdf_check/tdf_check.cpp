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
void CheckValFunc1ValArg(void);
void CheckValFunc2ValArg(void);
void CheckValFunc3ValArg(void);
void CheckValFunc4ValArg(void);
void CheckValFunc5ValArg(void);
void CheckValFunc6ValArg(void);
void CheckValFunc7ValArg(void);
void CheckValFunc8ValArg(void);
void CheckValFunc9ValArg(void);
void CheckValFunc10ValArg(void);

void CheckValFunc()
{
	CheckValFuncNoArg();
	CheckValFunc1ValArg();
	CheckValFunc2ValArg();
	CheckValFunc3ValArg();
	CheckValFunc4ValArg();
	CheckValFunc5ValArg();
	CheckValFunc6ValArg();
	CheckValFunc7ValArg();
	CheckValFunc8ValArg();
	CheckValFunc9ValArg();
	CheckValFunc10ValArg();
}

void CheckVoidFuncInPtrArg(void);
void CheckVoidFuncOutPtrArg(void);


void CheckPtrArg()
{
	CheckVoidFuncInPtrArg();
	CheckVoidFuncOutPtrArg();
}

int main()
{
	CheckVoidFunc();
	CheckValFunc();
	CheckPtrArg();

	return 0;
}