#pragma once

extern	long	subFuncB_called_count;
extern	int		subFuncB_return_value[][100];

extern	short** subFuncB_input1[];
extern	short	subFuncB_input1_return_value[][100];
extern	long	subFuncB_input1_return_value_size[];

void	subFuncB_input1_init();
void	subFuncB_input1_handle(short** input1);

void	subFuncB_init();
