#pragma once

extern long subFuncA_called_count;
extern int subFuncA_return_value[100];
void subFuncA_init();
int subFuncA(int subInput1, char* subInput2, char* subInput3, char* subInput4);

extern int subFuncA_subInput1[];
void subFuncA_subInput1_init();
void subFuncA_subInput1_handle(int subInput1);

extern char* subFuncA_subInput2[];
extern char subFuncA_subInput2_value[][100];
extern long subFuncA_subInput2_value_size[];
void subFuncA_subInput2_init();
void subFuncA_subInput2_handle(char* subInput2);

extern char* subFuncA_subInput3[];
extern char subFuncA_subInput3_return_value[][100];
extern long subFuncA_subInput3_return_value_size[];
void subFuncA_subInput3_init();
void subFuncA_subInput3_handle(char* subInput3);

extern char* subFuncA_subInput4[100];
extern char subFuncA_subInput4_value[100][100];
extern long subFuncA_subInput4_value_size[100];
extern char subFuncA_subInput4_return_value[100][100];
extern long subFuncA_subInput4_return_value_size[100];
void subFuncA_subInput4_init();
void subFuncA_subInput4_handle(char* subInput4);
