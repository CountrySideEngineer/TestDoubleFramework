#pragma once

typedef struct _SAMPLE_STRUCT_T {
	char	member1;
	short	member2;
	long	member3;
} SAMPLE_STRUCT;

extern	long			subFuncC_called_count;
extern	void*			subFuncC_return_value[][100];
extern	SAMPLE_STRUCT*	subFuncC_input1[];
extern	SAMPLE_STRUCT	subFuncC_input1_value[][100];
extern	long			subFuncC_input1_value_size[];
extern	SAMPLE_STRUCT**	subFuncC_input2[];
extern	SAMPLE_STRUCT	subFuncC_input2_return_value[][100];
extern	long			subFuncC_input2_return_value_size[];

void	subFuncC_init();
