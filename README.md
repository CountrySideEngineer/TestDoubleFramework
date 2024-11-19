# Test Double Framework

The **Test Double Framework** is a lightweight framework for defining and declaring test doubles used in C language unit testing.

# Introduction

Although the code for test doubles used in C language unit testing appears simple and straightforward, implementing it often requires significant time and effort.  
To address this challenge, the Test Double Framework simplifies the definition and declaration of test doubles, enhancing productivity.  
The Test Double Framework enables efficient and easy implementation of test doubles.

# How to Use the Test Double Framework (Defining Test Doubles)

Here is an example of defining a test double for a function with the following interface:
VOID SampleSubFunction();

To define a test double for this function, implement the code as follows:
```
#include "tdf.h"

BEGIN_DEF_TD(SampleSubFunction)
DEF_VOID_FUNC(SampleSubFunction)
END_DEF_TD(SampleSubFunction)
```
To initialize this test double, use the following code:
```
// When using googletest
TEST_F(SampleSubFunction_called_test_suite, init_sub_func_sample)
{
	TD_INIT(SampleSubFunction);
}
```
All macros used in this code (excluding googletest) are defined in `tdf.h`.  
Therefore, no library installation is required to use the Test Double Framework. Simply download `tdf.h` and include it in your test code.

The above macros expand into the following code:
```
long SampleSubFunction_called_count = 0;
VOID SampleSubFunction_init()
{
	SampleSubFunction_called_count = 0;
}
VOID SampleSubFunction()
{
	SampleSubFunction_called_count++;
}
```
```
// When using googletest
TEST_F(SampleSubFunction_called_test_suite, init_sub_func_sample)
{
	SampleSubFunction_init();
}
```

## Functions with Arguments

For a function with arguments, such as:
```
VOID SampleSubFunc(SHORT input1)
```
You can define its test double as follows:
```
BEGIN_DEF_TD(SampleSubFunc)
REG_VAL_ARG(SampleSubFunc, SHORT, input1)
DEF_VOID_FUNC(SampleSubFunc, SHORT, input1)
END_DEF_TD(SampleSubFunc)
```

For functions with arguments, use the `REG_VAL_ARG` macro to **register the arguments** beforehand.

## Pointer Arguments

If the argument is a pointer, use a different macro.  
For example, to define a test double for the following function:
```
VOID SampleSubFunc(SHORT* input1)
```
The definition would be:
```
BEGIN_DEF_TD(SampleSubFunc)
REG_PTR_ARG_P1_IN(SampleSubFunc, SHORT, input1)
DEF_VOID_FUNC(SampleSubFunc, SHORT*, input1)
END_DEF_TD(SampleSubFunc)
```

When the argument is a pointer, use the `REG_PTR_ARG_xxx` macro.  
The "xxx" part varies depending on the pointer's purpose and content, as outlined below:

| No. | xxx      | Macro              | Description                                                   |
|-----|----------|--------------------|---------------------------------------------------------------|
| 1   | P1_IN    | REG_PTR_ARG_P1_IN  | The pointer is an input (the function accesses but does not modify it). |
| 2   | P1_OUT   | REG_PTR_ARG_P1_OUT | The pointer is an output (the function modifies but does not access it). |
| 3   | P1_IN_OUT| REG_PTR_ARG_P1_IN_OUT | The pointer is both input and output (the function accesses and modifies it). |

In the example, `REG_PTR_ARG_P1_IN` is used for an input-only pointer.  
The macro used to define the test double body is the same as for value arguments (`DEF_VOID_FUNC`), but the type of the argument changes, indicated by adding an asterisk (`*`) for pointers.

This macro expands into the following code:
```
long SampleSubFunc_called_count = 0;
SHORT* SampleSubFunc_input1[(100)];
SHORT SampleSubFunc_input1_value[(100)][(100)];
long SampleSubFunc_input1_value_size[(100)];
void SampleSubFunc_input1_init()
{
	for (int index1 = 0; index1 < (100); index1++)
	{
		for 
		(int index2 = 0; index2 < (100); index2++)
		{
			SampleSubFunc_input1_value[index1][index2] = 0;
		}
		SampleSubFunc_input1_value_size[index1] = 0;
	}
}
void SampleSubFunc_input1_handle(SHORT* input1)
{
	SampleSubFunc_input1[SampleSubFunc_called_count] = input1;
	for (int index = 0; index < SampleSubFunc_input1_value_size[SampleSubFunc_called_count]; index++)
	{
		SampleSubFunc_input1_value[SampleSubFunc_called_count][index] = (input1 + index);
	}
}
typedef void (*_SampleSubFunc_input1_handler)(SHORT* input1);
_SampleSubFunc_input1_handler SampleSubFunc_input1_handler = SampleSubFunc_input1_handle;
void SampleSubFunc_init()
{
	SampleSubFunc_called_count = 0;
	SampleSubFunc_input1_init();
}
void SampleSubFunc(SHORT* input1)
{
	SampleSubFunc_input1_handler(input1);
	SampleSubFunc_called_count++;
}
```

## Double Pointer Arguments

For double pointer arguments, use a different macro such as `REG_PTR_ARG_P2_OUT`.  
For example, the following function:
```
VOID SampleSubFunc(SHORT** input1)
```
Can be defined as:
```
BEGIN_DEF_TD(SampleSubFunc) 
REG_PTR_ARG_P2_OUT(SampleSubFunc, SHORT, input1)
DEF_VOID_FUNC(SampleSubFunc, SHORT**, input1)
END_DEF_TD(SampleSubFunc)
```

## Functions Returning a Value

For functions that return a value, such as:
```
int SampleSubFunc(void)
```

Define the test double as:
```
BEGIN_DEF_TD(SampleSubFunc) 
DEF_VAL_FUNC(LONG, SampleSubFunc)
END_DEF_TD(SampleSubFunc)
```
The `DEF_VAL_FUNC` macro expands into:
```
long SampleSubFunc_called_count = 0; 
LONG SampleSubFunc_return_value[(100)]; 
void SampleSubFunc_val_init() 
{ 
	for (int index1 = 0; index1 < (100); index1++) 
	{ 
		SampleSubFunc_return_value[index1] = 0; 
	}
}
void SampleSubFunc_init() 
{ 
	SampleSubFunc_called_count = 0; 
	SampleSubFunc_val_init(); 
} 
LONG SampleSubFunc() 
{ 
	LONG _return_latch = SampleSubFunc_return_value[SampleSubFunc_called_count]; 
	SampleSubFunc_called_count++; 
	return _return_latch; 
}
```

## Functions Returning a Pointer

For functions returning a pointer, such as:
```
LONG* SampleSubFunc(void)
```
Define the test double as:
```
BEGIN_DEF_TD(SampleSubFunc) 
DEF_PTR_FUNC(LONG, SampleSubFunc) 
END_DEF_TD(SampleSubFunc)
```
The `DEF_PTR_FUNC` macro expands into:
```
long SampleSubFunc_called_count = 0;
LONG SampleSubFunc_return_value[(100)][(100)]; 
long SampleSubFunc_return_value_size[(100)]; 
void SampleSubFunc_val_init()
{
	for (int index1 = 0; index1 < (100); index1++) 
	{ 
		for (int index2 = 0; index2 < (100); index2++) 
		{ 
			SampleSubFunc_return_value[index1][index2] = 0; 
		}
		SampleSubFunc_return_value_size[index1] = 0; 
	} 
} 
void SampleSubFunc_init() 
{ 
	SampleSubFunc_called_count = 0; 
	SampleSubFunc_val_init(); 
}
LONG* SampleSubFunc() 
{ 
	LONG* _return_latch = &SampleSubFunc_return_value[SampleSubFunc_called_count][0]; 
	SampleSubFunc_called_count++; 
	return _return_latch; 
}
```

For more detailed information about macros and how to use them, please refer to the wiki.
