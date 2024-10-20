#include <stdio.h>
#include <stdint.h>

long	subFuncB_called_count;
int		subFuncB_return_value[100][100];

short** subFuncB_input1[100];
short	subFuncB_input1_return_value[100][100];
long	subFuncB_input1_return_value_size[100];
void	subFuncB_input1_init()
{
	for (long index = 0; index < 100; index++) {
		subFuncB_input1[index] = 0;
	}
	for (long index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncB_input1_return_value[index1][index2] = 0;
		}
		subFuncB_input1_return_value_size[index1] = 0;
	}
}
void	subFuncB_input1_handle(short** input1)
{
	subFuncB_input1[subFuncB_called_count] = input1;
	for (long index = 0; 
		index < subFuncB_input1_return_value_size[subFuncB_called_count]; 
		index++) 
	{
		*(input1 + index) = (short*)(&subFuncB_input1_return_value[subFuncB_called_count][index]);
	}
}

void	subFuncB_init()
{
	subFuncB_input1_init();
	subFuncB_called_count = 0;
	for (long index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			subFuncB_return_value[index1][index2] = 0;
		}
	}
}

int*	subFuncB(short** input1)
{
	subFuncB_input1_handle(input1);

	int*	returnLatch = (int*)(&subFuncB_return_value[subFuncB_called_count][0]);
	subFuncB_called_count++;

	return returnLatch;
}
