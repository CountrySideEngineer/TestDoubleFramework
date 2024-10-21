#include <stdio.h>
#include "td3.h"

long	subFuncC_called_count;
void*	subFuncC_return_value[100][100];

SAMPLE_STRUCT*	subFuncC_input1[100];
SAMPLE_STRUCT	subFuncC_input1_value[100][100];
long			subFuncC_input1_value_size[100];

void	subFuncC_input1_init()
{
	for (long index1 = 0; index1 < 100; index1++) {
		subFuncC_input1[index1] = 0;

		for (long index2 = 0; index2 < 100; index2++) {
			unsigned char* dst = (unsigned char*)(&subFuncC_input1_value[index1][index2]);
			for (long index3 = 0; index3 < sizeof(SAMPLE_STRUCT); index3++) {
				*(dst + index1) = 0;
			}
		}
		subFuncC_input1_value_size[index1] = 0;
	}
}

void	subFuncC_input1_handle(SAMPLE_STRUCT* input1)
{
	subFuncC_input1[subFuncC_called_count] = input1;
	for (long index1 = 0;
		index1 < subFuncC_input1_value_size[subFuncC_called_count];
		index1++) {

		unsigned char* dstTop = ((unsigned char*)(&subFuncC_input1_value[subFuncC_called_count][index1]));
		unsigned char* srcTop = (unsigned char*)input1;

		for (long index2 = 0;
			index2 < sizeof(SAMPLE_STRUCT);
			index2++)
		{
			*(dstTop + index2) = *(srcTop + index2);
		}
	}
}

SAMPLE_STRUCT**	subFuncC_input2[100];
SAMPLE_STRUCT	subFuncC_input2_return_value[100][100];
long			subFuncC_input2_return_value_size[100];

void	subFuncC_input2_init()
{
	for (long index1 = 0; index1 < 100; index1++) {
		subFuncC_input2[index1] = 0;

		for (long index2 = 0; index2 < 100; index2++) {
			unsigned char* dst = (unsigned char*)(&subFuncC_input2_return_value[index1][index2]);
			for (long index3 = 0; index3 < sizeof(SAMPLE_STRUCT); index3++) {
				*(dst + index3) = 0;
			}
		}
		subFuncC_input2_return_value_size[index1] = 0;
	}
}
void	subFuncC_input2_handle(SAMPLE_STRUCT** input2)
{
	subFuncC_input2[subFuncC_called_count] = input2;
	for (long index1 = 0; 
		index1 < subFuncC_input2_return_value_size[subFuncC_called_count]; 
		index1++)
	{
		*(input2 + index1) = (SAMPLE_STRUCT*)(&subFuncC_input2_return_value[subFuncC_called_count][index1]);
	}
}

void	subFuncC_init()
{
	subFuncC_input1_init();
	subFuncC_input2_init();

	subFuncC_called_count = 0;
	for (long index1 = 0; index1 < 100; index1++) {
		for (long index2 = 0; index2 < 100; index2++) {
			unsigned char* dst = (unsigned char*)(&subFuncC_return_value[index1][index2]);
			for (long index3 = 0; index3 < sizeof(SAMPLE_STRUCT); index3++) {
				*(dst + index3) = 0;
			}
		}
	}
}

void*	subFuncC(SAMPLE_STRUCT* input1, SAMPLE_STRUCT** input2)
{
	subFuncC_input1_handle(input1);
	subFuncC_input2_handle(input2);

	void*	returnLatch = (void*)(&subFuncC_return_value[subFuncC_called_count][0]);
	subFuncC_called_count++;

	return returnLatch;
}
