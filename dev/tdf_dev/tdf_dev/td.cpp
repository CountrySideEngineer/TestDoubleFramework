#include <stdio.h>
#include <string.h>
//No user header files specified to include.

long subFuncA_called_count;
int subFuncA_return_value[100];

int subFuncA_subInput1[100];
void subFuncA_subInput1_init()
{
	for (long index = 0; index < 100; index++) {
		subFuncA_subInput1[index] = 0;
	}
}
void subFuncA_subInput1_handle(int subInput1)
{
	subFuncA_subInput1[subFuncA_called_count] = subInput1;
}

// 入力としてのポインタ
char* subFuncA_subInput2[100];
char subFuncA_subInput2_value[100][100];
long subFuncA_subInput2_value_size[100];
void subFuncA_subInput2_init()
{
	for (int index = 0; index < 100; index++) {
		subFuncA_subInput2[index] = 0;
	}
	for (int index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncA_subInput2_value[index1][index2] = 0;
		}
		subFuncA_subInput2_value_size[index1] = 0;
	}
}
void subFuncA_subInput2_handle(char* subInput2)
{
	subFuncA_subInput2[subFuncA_called_count] = subInput2;

	for (long index = 0; 
		index < subFuncA_subInput2_value_size[subFuncA_called_count];
		index++)
	{
		subFuncA_subInput2_value[subFuncA_called_count][index] = subInput2[index];
	}
}

// 出力としてのポインタ
char* subFuncA_subInput3[100];
char subFuncA_subInput3_return_value[100][100];
long subFuncA_subInput3_return_value_size[100];
void subFuncA_subInput3_init()
{
	for (int index = 0; index < 100; index++) {
		subFuncA_subInput3[index] = 0;
	}
	for (int index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncA_subInput3_return_value[index1][index2] = 0;
		}
		subFuncA_subInput3_return_value_size[index1] = 0;
	}
}
void subFuncA_subInput3_handle(char* subInput3)
{
	subFuncA_subInput3[subFuncA_called_count] = subInput3;

	for (long index = 0;
		index < subFuncA_subInput3_return_value_size[subFuncA_called_count];
		index++)
	{
		subInput3[index] = subFuncA_subInput3_return_value[subFuncA_called_count][index];
	}
}

//入力かつ出力としてのポインタ
char* subFuncA_subInput4[100];
char subFuncA_subInput4_value[100][100];
long subFuncA_subInput4_value_size[100];
char subFuncA_subInput4_return_value[100][100];
long subFuncA_subInput4_return_value_size[100];
void subFuncA_subInput4_init()
{
	for (int index = 0; index < 100; index++) {
		subFuncA_subInput4[index] = 0;
	}
	for (int index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncA_subInput4_value[index1][index2] = 0;
		}
		subFuncA_subInput4_value_size[index1] = 0;
	}
	for (int index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncA_subInput4_return_value[index1][index2] = 0;
		}
		subFuncA_subInput4_return_value_size[index1] = 0;
	}
}
void subFuncA_subInput4_handle(char* subInput4)
{
	subFuncA_subInput4[subFuncA_called_count] = subInput4;

	for (long index = 0;
		index < subFuncA_subInput4_value_size[subFuncA_called_count];
		index++)
	{
		subFuncA_subInput4_value[subFuncA_called_count][index] = subInput4[index];
	}
	for (long index = 0;
		index < subFuncA_subInput4_return_value_size[subFuncA_called_count];
		index++)
	{
		subInput4[index] = subFuncA_subInput4_return_value[subFuncA_called_count][index];
	}
}

void subFuncA_init()
{
	subFuncA_subInput1_init();
	subFuncA_subInput2_init();
	subFuncA_subInput3_init();
	subFuncA_subInput4_init();

	subFuncA_called_count = 0;
}

int subFuncA(int subInput1, char* subInput2, char* subInput3, char* subInput4)
{
	subFuncA_subInput1_handle(subInput1);
	subFuncA_subInput2_handle(subInput2);
	subFuncA_subInput3_handle(subInput3);
	subFuncA_subInput4_handle(subInput4);

	int latchReturn = subFuncA_return_value[subFuncA_called_count];
	subFuncA_called_count++;
	return latchReturn;
}
