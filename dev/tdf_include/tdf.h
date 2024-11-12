#pragma once

#define TEST_DOUBLE_ATTRIBUTE

#ifndef TD_BUFF_SIZE_1
#define TD_BUFF_SIZE_1			(100)
#endif
#ifndef TD_BUFF_SIZE_2
#define TD_BUFF_SIZE_2			(100)
#endif

#define DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	ARG_TYPE	FUNC_NAME##_##ARG_NAME[TD_BUFF_SIZE_1];

#define DEFINE_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	ARG_TYPE	FUNC_NAME##_##ARG_NAME##_value[TD_BUFF_SIZE_1][TD_BUFF_SIZE_2];

#define DEFINE_PTR_ARG_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	long	FUNC_NAME##_##ARG_NAME##_value_size[TD_BUFF_SIZE_1];

#define DEFINE_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	ARG_TYPE	FUNC_NAME##_##ARG_NAME##_return_value[TD_BUFF_SIZE_1][TD_BUFF_SIZE_2];

#define DEFINE_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	long	FUNC_NAME##_##ARG_NAME##_return_value_size[TD_BUFF_SIZE_1];

#define DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)	\
	FUNC_TYPE	FUNC_NAME##_return_value[TD_BUFF_SIZE_1];

#define DEFINE_FUNC_RETURN_PTR_VAL_BUFF(FUNC_TYPE, FUNC_NAME)	\
	FUNC_TYPE	FUNC_NAME##_return_value[TD_BUFF_SIZE_1][TD_BUFF_SIZE_2];

#define DEFINE_FUNC_RETURN_PTR_VAL_SIZE_BUFF(FUNC_TYPE, FUNC_NAME)	\
	long	FUNC_NAME##_return_value_size[TD_BUFF_SIZE_1];

#define DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	extern ARG_TYPE	FUNC_NAME##_##ARG_NAME##[];

#define DEC_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	extern ARG_TYPE	FUNC_NAME##_##ARG_NAME##_value[][TD_BUFF_SIZE_2];

#define DEC_PTR_ARG_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	extern long	FUNC_NAME##_##ARG_NAME##_value_size[];

#define DEC_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	extern ARG_TYPE	FUNC_NAME##_##ARG_NAME##_return_value[][TD_BUFF_SIZE_2];

#define DEC_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	extern long	FUNC_NAME##_##ARG_NAME##_return_value_size[];

#define DEC_FUNC_CALLED_COUNT(FUNC_NAME)	\
	extern long FUNC_NAME##_called_count;

#define DEC_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)	\
	extern FUNC_TYPE	FUNC_NAME##_return_value[];

#define DEC_FUNC_RETURN_PTR_VAL_BUFF(FUNC_TYPE, FUNC_NAME)	\
	extern FUNC_TYPE	FUNC_NAME##_return_value[][TD_BUFF_SIZE_2];

#define DEC_FUNC_RETURN_PTR_VAL_SIZE_BUFF(FUNC_TYPE, FUNC_NAME)	\
	extern long	FUNC_NAME##_return_value_size[];

#define DEC_FUNC_INIT(FUNC_NAME)	\
	void FUNC_NAME##_init();

#define CALL_FUNC_INIT(FUNC_NAME)	\
	FUNC_NAME##_init();

#define CALLED_COUNT(FUNC_NAME)		\
	FUNC_NAME##_called_count

#define SET_CALLED_COUNT(FUNC_NAME, COUNT)	\
	CALLED_COUNT(FUNC_NAME) = COUNT;

#define ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX)	\
	FUNC_NAME##_##ARG_NAME##[CALL_INDEX]

#define SET_ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL)	\
	ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX) = VAL;

#define PTR_ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX)	\
	FUNC_NAME##_##ARG_NAME##_value[CALL_INDEX][VAL_INDEX]

#define SET_PTR_ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX, VAL)	\
	PTR_ARG_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX) = VAL;

#define PTR_ARG_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX)	\
	FUNC_NAME##_##ARG_NAME##_value_size[CALL_INDEX]

#define SET_PTR_ARG_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_SIZE)	\
	PTR_ARG_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX) = VAL_SIZE;

#define PTR_ARG_RET_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX)	\
	FUNC_NAME##_##ARG_NAME##_return_value[CALL_INDEX][VAL_INDEX]

#define SET_PTR_ARG_RET_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX, VAL)	\
	PTR_ARG_RET_VAL(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_INDEX) = VAL;

#define PTR_ARG_RET_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX)	\
	FUNC_NAME##_##ARG_NAME##_return_value_size[CALL_INDEX]

#define SET_PTR_ARG_RET_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX, VAL_SIZE)	\
	PTR_ARG_RET_VAL_SIZE(FUNC_NAME, ARG_NAME, CALL_INDEX) = VAL_SIZE;

#define FUNC_RET_VAL(FUNC_NAME, CALL_INDEX)	\
	FUNC_NAME##_return_value[CALL_INDEX]

#define SET_FUNC_RET_VAL(FUNC_NAME, CALL_INDEX, VAL)	\
	FUNC_RET_VAL(FUNC_NAME, CALL_INDEX) = VAL;

#define FUNC_PTR_RET_VAL(FUNC_NAME, CALL_INDEX, DATA_INDEX)	\
	FUNC_NAME##_return_value[CALL_INDEX][DATA_INDEX]

#define SET_FUNC_PTR_RET_VAL(FUNC_NAME, CALL_INDEX, DATA_INDEX, VAL)	\
	FUNC_PTR_RET_VAL(FUNC_NAME, CALL_INDEX, DATA_INDEX)	= VAL;

#define FUNC_PTR_RET_VAL_SIZE(FUNC_NAME, CALL_INDEX, VAL_SIZE)	\
	FUNC_NAME##_return_value_size[CALL_INDEX]

#define SET_FUNC_PTR_RET_VAL_SIZE(FUNC_NAME, CALL_INDEX, VAL_SIZE)	\
	FUNC_PTR_RET_VAL_SIZE(FUNC_NAME, CALL_INDEX, VAL_SIZE) = VAL_SIZE;

#define DEFINE_ARG_INIT_BY_VAL(FUNC_NAME, ARG_TYPE, ARG_NAME, INIT_VAL)	\
	void FUNC_NAME##_##ARG_NAME##_init() {							\
		for (int index = 0; index < TD_BUFF_SIZE_1; index++) {		\
			FUNC_NAME##_##ARG_NAME[index] = 0;						\
		}															\
	}																\


#define DEFINE_ARG_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	DEFINE_ARG_INIT_BY_VAL(FUNC_NAME, ARG_TYPE, ARG_NAME, 0)

#define DEFINE_PTR_ARG_P1_IN_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	void FUNC_NAME##_##ARG_NAME##_init() {									\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {		\
				FUNC_NAME##_##ARG_NAME##_value[index1][index2] = 0;			\
			}																\
			FUNC_NAME##_##ARG_NAME##_value_size[index1] = 0;				\
		}																	\
	}																		\

#define DEFINE_PTR_ARG_P1_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	void FUNC_NAME##_##ARG_NAME##_init() {									\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {		\
				FUNC_NAME##_##ARG_NAME##_return_value[index1][index2] = 0;	\
			}																\
			FUNC_NAME##_##ARG_NAME##_return_value_size[index1] = 0;			\
		}																	\
	}																		\

#define DEFINE_PTR_ARG_P1_IN_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	void FUNC_NAME##_##ARG_NAME##_init() {									\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {		\
				FUNC_NAME##_##ARG_NAME##_value[index1][index2] = 0;			\
			}																\
			FUNC_NAME##_##ARG_NAME##_value_size[index1] = 0;				\
		}																	\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {		\
				FUNC_NAME##_##ARG_NAME##_return_value[index1][index2] = 0;	\
			}																\
			FUNC_NAME##_##ARG_NAME##_return_value_size[index1] = 0;			\
		}																	\
	}																		\

#define DEFINE_PTR_ARG_P2_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	void FUNC_NAME##_##ARG_NAME##_init() {									\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {		\
				FUNC_NAME##_##ARG_NAME##_return_value[index1][index2] = 0;	\
			}																\
			FUNC_NAME##_##ARG_NAME##_return_value_size[index1] = 0;			\
		}																	\
	}																		\

#define DEFINE_FUNC_RET_VAL_INIT_BY_VAL(FUNC_TYPE, FUNC_NAME, INIT_VAL)		\
	void FUNC_NAME##_val_init() {											\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {			\
			FUNC_NAME##_return_value[index1] = 0;							\
		}																	\
	}																		\

#define DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)	\
	DEFINE_FUNC_RET_VAL_INIT_BY_VAL(FUNC_TYPE, FUNC_NAME, 0)

#define DEFINE_FUNC_RET_PTR_INIT_BY_VAL(FUNC_TYPE, FUNC_NAME, INIT_VAL)	\
	void FUNC_NAME##_val_init() {	\
		for (int index1 = 0; index1 < TD_BUFF_SIZE_1; index1++) {		\
			for (int index2 = 0; index2 < TD_BUFF_SIZE_2; index2++) {	\
				FUNC_NAME##_return_val[index1][index2] = INIT_VAL;		\
			}															\
			FUNC_NAME##_return_value_size[index1] = 0;					\
		}																\
	}																	\

#define DEFINE_FUNC_RET_PTR_INIT(FUNC_TYPE, FUNC_NAME, INIT_VAL)	\
	DEFINE_FUNC_RET_PTR_INIT_BY_VAL(FUNC_TYPE, FUNC_NAME, 0)

#define TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	typedef void (*_##FUNC_NAME##_##ARG_NAME##_handler)(ARG_TYPE ARG_NAME);

#define DEFINE_ARG_HANDLER_TYPE(FUNC_NAME, ARG_TYPE, ARG_NAME)					\
	_##FUNC_NAME##_##ARG_NAME##_handler	FUNC_NAME##_##ARG_NAME##_handler;

#define DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)					\
	_##FUNC_NAME##_##ARG_NAME##_handler FUNC_NAME##_##ARG_NAME##_handler = FUNC_NAME##_##ARG_NAME##_handle;

#define DEFINE_CUSTOM_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME, CUSTOM_HANDLER)	\
	_##FUNC_NAME##_##ARG_NAME##_handler = CUSTOM_HANDLER;

#define DEFINE_ARG_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	void FUNC_NAME##_##ARG_NAME##_handle(ARG_TYPE ARG_NAME) {			\
		FUNC_NAME##_##ARG_NAME[FUNC_NAME##_called_count] = ARG_NAME;	\
	}																	\

#define DEFINE_PTR_ARG_P1_IN_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)										\
	void FUNC_NAME##_##ARG_NAME##_handle(ARG_TYPE* ARG_NAME) {											\
		FUNC_NAME##_##ARG_NAME[FUNC_NAME##_called_count] = ARG_NAME;									\
		for (int index = 0;																				\
			index < FUNC_NAME##_##ARG_NAME##_value_size[FUNC_NAME##_called_count];						\
			index++) {																					\
			FUNC_NAME##_##ARG_NAME##_value[FUNC_NAME##_called_count][index] = *(ARG_NAME + index);		\
		}																								\
	}																									\

#define DEFINE_PTR_ARG_P1_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)											\
	void FUNC_NAME##_##ARG_NAME##_handle(ARG_TYPE* ARG_NAME) {												\
		FUNC_NAME##_##ARG_NAME[FUNC_NAME##_called_count] = ARG_NAME;										\
		for (int index = 0;																					\
			index < FUNC_NAME##_##ARG_NAME##_return_value_size[FUNC_NAME##_called_count];					\
			index++) {																						\
			*(ARG_NAME + index) = FUNC_NAME##_##ARG_NAME##_return_value[FUNC_NAME##_called_count][index];	\
		}																									\
	}																										\

#define DEFINE_PTR_ARG_P1_IN_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)										\
	void FUNC_NAME##_##ARG_NAME##_handle(ARG_TYPE* ARG_NAME)												\
	{																										\
		FUNC_NAME##_##ARG_NAME[FUNC_NAME##_called_count] = ARG_NAME;										\
		for (int index = 0;																					\
			index < FUNC_NAME##_##ARG_NAME##_value_size[FUNC_NAME##_called_count];							\
			index++) {																						\
				FUNC_NAME##_##ARG_NAME##_value[FUNC_NAME##_called_count][index] = *(ARG_NAME + index);		\
		}																									\
		for (int index = 0;																					\
			index < FUNC_NAME##_##ARG_NAME##_return_value_size[FUNC_NAME##_called_count];					\
			index++) {																						\
			*(ARG_NAME + index) = FUNC_NAME##_##ARG_NAME##_return_value[FUNC_NAME##_called_count][index];	\
		}																									\
	}																										\

#define DEFINE_PTR_ARG_P2_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	void FUNC_NAME##_##ARG_NAME##_handle(ARG_TYPE** ARG_NAME)												\
	{																										\
		FUNC_NAME##_##ARG_NAME[FUNC_NAME##_called_count] = ARG_NAME;										\
		for (int index = 0;																					\
			index < FUNC_NAME##_##ARG_NAME##_return_value_size[FUNC_NAME##_called_count];					\
			index++) {																						\
			*(ARG_NAME + index) = &FUNC_NAME##_##ARG_NAME##_return_value[FUNC_NAME##_called_count][index];	\
		}																									\
	}																										\

#define DEFINE_VOID_FUNC_INIT_0(FUNC_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
	}										\

#define DEFINE_VOID_FUNC_INIT_1(FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_2(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_3(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_4(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_5(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_6(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
		FUNC_NAME##_##ARG5_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_7(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
		FUNC_NAME##_##ARG5_NAME##_init();	\
		FUNC_NAME##_##ARG6_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_8(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
		FUNC_NAME##_##ARG5_NAME##_init();	\
		FUNC_NAME##_##ARG6_NAME##_init();	\
		FUNC_NAME##_##ARG7_NAME##_init();	\
	}										\


#define DEFINE_VOID_FUNC_INIT_9(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
		FUNC_NAME##_##ARG5_NAME##_init();	\
		FUNC_NAME##_##ARG6_NAME##_init();	\
		FUNC_NAME##_##ARG7_NAME##_init();	\
		FUNC_NAME##_##ARG8_NAME##_init();	\
	}										\

#define DEFINE_VOID_FUNC_INIT_10(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME, ARG9_TYPE, ARG9_NAME)	\
	void FUNC_NAME##_init() {				\
		FUNC_NAME##_called_count = 0;		\
		FUNC_NAME##_##ARG0_NAME##_init();	\
		FUNC_NAME##_##ARG1_NAME##_init();	\
		FUNC_NAME##_##ARG2_NAME##_init();	\
		FUNC_NAME##_##ARG3_NAME##_init();	\
		FUNC_NAME##_##ARG4_NAME##_init();	\
		FUNC_NAME##_##ARG5_NAME##_init();	\
		FUNC_NAME##_##ARG6_NAME##_init();	\
		FUNC_NAME##_##ARG7_NAME##_init();	\
		FUNC_NAME##_##ARG8_NAME##_init();	\
		FUNC_NAME##_##ARG9_NAME##_init();	\
	}										\

#define DEFINE_RET_VAL_FUNC_INIT_0(FUNC_TYPE, FUNC_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_1(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_2(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_3(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
		FUNC_NAME##_##ARG2_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_4(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
		FUNC_NAME##_##ARG2_NAME##_init();					\
		FUNC_NAME##_##ARG3_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_5(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
		FUNC_NAME##_##ARG2_NAME##_init();					\
		FUNC_NAME##_##ARG3_NAME##_init();					\
		FUNC_NAME##_##ARG4_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_6(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
		FUNC_NAME##_##ARG2_NAME##_init();					\
		FUNC_NAME##_##ARG3_NAME##_init();					\
		FUNC_NAME##_##ARG4_NAME##_init();					\
		FUNC_NAME##_##ARG5_NAME##_init();					\
	}														\

#define DEFINE_RET_VAL_FUNC_INIT_7(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	void FUNC_NAME##_init()									\
	{														\
		FUNC_NAME##_called_count = 0;						\
		FUNC_NAME##_val_init();								\
		FUNC_NAME##_##ARG0_NAME##_init();					\
		FUNC_NAME##_##ARG1_NAME##_init();					\
		FUNC_NAME##_##ARG2_NAME##_init();					\
		FUNC_NAME##_##ARG3_NAME##_init();					\
		FUNC_NAME##_##ARG4_NAME##_init();					\
		FUNC_NAME##_##ARG5_NAME##_init();					\
		FUNC_NAME##_##ARG6_NAME##_init();					\
	}														\

#define DEFINE_VOID_FUNC_BODY_0(FUNC_NAME)	\
	void FUNC_NAME() {						\
		FUNC_NAME##_called_count++;			\
	}										\

#define DEFINE_VOID_FUNC_BODY_1(FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME) {							\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_2(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_3(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_4(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_5(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_6(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_7(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME, ARG6_TYPE ARG6_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);				\
		FUNC_NAME##_##ARG6_NAME##_handler(ARG6_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_8(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME, ARG6_TYPE ARG6_NAME, ARG7_TYPE ARG7_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);				\
		FUNC_NAME##_##ARG6_NAME##_handler(ARG6_NAME);				\
		FUNC_NAME##_##ARG7_NAME##_handler(ARG7_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_9(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME, ARG6_TYPE ARG6_NAME, ARG7_TYPE ARG7_NAME, ARG8_TYPE ARG8_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);				\
		FUNC_NAME##_##ARG6_NAME##_handler(ARG6_NAME);				\
		FUNC_NAME##_##ARG7_NAME##_handler(ARG7_NAME);				\
		FUNC_NAME##_##ARG8_NAME##_handler(ARG8_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_VOID_FUNC_BODY_10(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME, ARG9_TYPE, ARG9_NAME)	\
	void FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME, ARG6_TYPE ARG6_NAME, ARG7_TYPE ARG7_NAME, ARG8_TYPE ARG8_NAME, ARG9_TYPE ARG9_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);				\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);				\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);				\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);				\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);				\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);				\
		FUNC_NAME##_##ARG6_NAME##_handler(ARG6_NAME);				\
		FUNC_NAME##_##ARG7_NAME##_handler(ARG7_NAME);				\
		FUNC_NAME##_##ARG8_NAME##_handler(ARG8_NAME);				\
		FUNC_NAME##_##ARG9_NAME##_handler(ARG9_NAME);				\
		FUNC_NAME##_called_count++;									\
	}																\

#define DEFINE_RET_VAL_FUNC_BODY_0(FUNC_TYPE, FUNC_NAME)	\
	FUNC_TYPE FUNC_NAME() {																\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_1(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME) {											\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_2(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME) {						\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_3(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_4(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);									\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_5(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);									\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);									\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_6(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);									\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);									\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);									\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define DEFINE_RET_VAL_FUNC_BODY_7(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	FUNC_TYPE FUNC_NAME(ARG0_TYPE ARG0_NAME, ARG1_TYPE ARG1_NAME, ARG2_TYPE ARG2_NAME, ARG3_TYPE ARG3_NAME, ARG4_TYPE ARG4_NAME, ARG5_TYPE ARG5_NAME, ARG6_TYPE ARG6_NAME) {	\
		FUNC_NAME##_##ARG0_NAME##_handler(ARG0_NAME);									\
		FUNC_NAME##_##ARG1_NAME##_handler(ARG1_NAME);									\
		FUNC_NAME##_##ARG2_NAME##_handler(ARG2_NAME);									\
		FUNC_NAME##_##ARG3_NAME##_handler(ARG3_NAME);									\
		FUNC_NAME##_##ARG4_NAME##_handler(ARG4_NAME);									\
		FUNC_NAME##_##ARG5_NAME##_handler(ARG5_NAME);									\
		FUNC_NAME##_##ARG6_NAME##_handler(ARG6_NAME);									\
		FUNC_TYPE _return_latch = FUNC_NAME##_return_value[FUNC_NAME##_called_count];	\
		FUNC_NAME##_called_count++;														\
		return _return_latch;															\
	}																					\

#define BEGIN_DEFINE_TD(FUNC_NAME)	\
	long	FUNC_NAME##_called_count = 0;

#define REG_VALUE_ARG(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_ARG_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_ARG_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)	\

#define REG_PTR_ARG_P1_IN(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NAME)				\
	DEFINE_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_PTR_ARG_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_PTR_ARG_P1_IN_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_PTR_ARG_P1_IN_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE##*, ARG_NAME)			\
	DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)			\

#define REG_PTR_ARG_P1_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)					\
	DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NAME)						\
	DEFINE_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_PTR_ARG_P1_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	DEFINE_PTR_ARG_P1_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE##*, ARG_NAME)					\
	DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)					\

#define REG_PTR_ARG_P1_IN_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NAME)						\
	DEFINE_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)					\
	DEFINE_PTR_ARG_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	DEFINE_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_PTR_ARG_P1_IN_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_PTR_ARG_P1_IN_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE##*, ARG_NAME)					\
	DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)					\

#define REG_PTR_ARG_P2_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)					\
	DEFINE_ARG_BUFF(FUNC_NAME, ARG_TYPE##**, ARG_NAME)						\
	DEFINE_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEFINE_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEFINE_PTR_ARG_P2_OUT_INIT(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	DEFINE_PTR_ARG_P2_OUT_HANDLE(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	TYPEDEF_ARG_HANDLER(FUNC_NAME, ARG_TYPE##**, ARG_NAME)					\
	DEFINE_ARG_HANDLER_SET(FUNC_NAME, ARG_TYPE, ARG_NAME)					\

#define DEFINE_VOID_FUNC_0(FUNC_NAME)	\
	DEFINE_VOID_FUNC_INIT_0(FUNC_NAME)	\
	DEFINE_VOID_FUNC_BODY_0(FUNC_NAME)	\

#define DEFINE_VOID_FUNC_1(FUNC_NAME, ARG0_TYPE, ARG0_NAME)		\
	DEFINE_VOID_FUNC_INIT_1(FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	DEFINE_VOID_FUNC_BODY_1(FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\

#define DEFINE_VOID_FUNC_2(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)		\
	DEFINE_VOID_FUNC_INIT_2(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)		\
	DEFINE_VOID_FUNC_BODY_2(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)		\

#define DEFINE_VOID_FUNC_3(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)			\
	DEFINE_VOID_FUNC_INIT_3(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)		\
	DEFINE_VOID_FUNC_BODY_3(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)		\

#define DEFINE_VOID_FUNC_4(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)		\
	DEFINE_VOID_FUNC_INIT_4(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)		\
	DEFINE_VOID_FUNC_BODY_4(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)		\

#define DEFINE_VOID_FUNC_5(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)		\
	DEFINE_VOID_FUNC_INIT_5(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	DEFINE_VOID_FUNC_BODY_5(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\

#define DEFINE_VOID_FUNC_6(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)		\
	DEFINE_VOID_FUNC_INIT_6(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)		\
	DEFINE_VOID_FUNC_BODY_6(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)		\

#define DEFINE_VOID_FUNC_7(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)			\
	DEFINE_VOID_FUNC_INIT_7(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)		\
	DEFINE_VOID_FUNC_BODY_7(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)		\

#define DEFINE_VOID_FUNC_8(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME)		\
	DEFINE_VOID_FUNC_INIT_8(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME)		\
	DEFINE_VOID_FUNC_BODY_8(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME)		\

#define DEFINE_VOID_FUNC_9(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME)			\
	DEFINE_VOID_FUNC_INIT_9(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME)		\
	DEFINE_VOID_FUNC_BODY_9(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME)		\

#define DEFINE_VOID_FUNC_10(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME, ARG9_TYPE, ARG9_NAME)		\
	DEFINE_VOID_FUNC_INIT_10(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME, ARG9_TYPE, ARG9_NAME)		\
	DEFINE_VOID_FUNC_BODY_10(FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME, ARG7_TYPE, ARG7_NAME, ARG8_TYPE, ARG8_NAME, ARG9_TYPE, ARG9_NAME)		\

#define DEFINE_VAL_FUNC_0(FUNC_TYPE, FUNC_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)	\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)		\
	DEFINE_RET_VAL_FUNC_INIT_0(FUNC_TYPE, FUNC_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_0(FUNC_TYPE, FUNC_NAME)	\

#define DEFINE_VAL_FUNC_1(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)						\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)							\
	DEFINE_RET_VAL_FUNC_INIT_1(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_1(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME)	\

#define DEFINE_VAL_FUNC_2(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)												\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)													\
	DEFINE_RET_VAL_FUNC_INIT_2(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_2(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME)	\

#define DEFINE_VAL_FUNC_3(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)																	\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)																		\
	DEFINE_RET_VAL_FUNC_INIT_3(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_3(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME)	\

#define DEFINE_VAL_FUNC_4(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)																							\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)																								\
	DEFINE_RET_VAL_FUNC_INIT_4(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_4(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME)	\

#define DEFINE_VAL_FUNC_5(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)																												\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)																													\
	DEFINE_RET_VAL_FUNC_INIT_5(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_5(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME)	\

#define DEFINE_VAL_FUNC_6(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)																																		\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)																																			\
	DEFINE_RET_VAL_FUNC_INIT_6(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_6(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME)	\

#define DEFINE_VAL_FUNC_7(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	DEFINE_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)																																							\
	DEFINE_FUNC_RET_VAL_INIT(FUNC_TYPE, FUNC_NAME)																																								\
	DEFINE_RET_VAL_FUNC_INIT_7(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\
	DEFINE_RET_VAL_FUNC_BODY_7(FUNC_TYPE, FUNC_NAME, ARG0_TYPE, ARG0_NAME, ARG1_TYPE, ARG1_NAME, ARG2_TYPE, ARG2_NAME, ARG3_TYPE, ARG3_NAME, ARG4_TYPE, ARG4_NAME, ARG5_TYPE, ARG5_NAME, ARG6_TYPE, ARG6_NAME)	\

#define END_DEFINE_TD(FUNC_NAME)

#define BEGIN_DECLARE_TD(FUNC_NAME)	\
	DEC_FUNC_CALLED_COUNT(FUNC_NAME)

#define DEC_VALUE_ARG(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)

#define DEC_PTR_ARG_P1_IN(FUNC_NAME, ARG_TYPE, ARG_NAME)	\
	DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NAME)			\
	DEC_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEC_PTR_ARG_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)

#define DEC_PTR_ARG_P1_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NMAE)					\
	DEC_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEC_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\

#define DEC_PTR_ARG_P1_IN_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE##*, ARG_NMAE)					\
	DEC_PTR_ARG_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)				\
	DEC_PTR_ARG_VAL_SIZE_BUFF(FUN_NAME, ARG_TYPE, ARG_NAME)			\
	DEC_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEC_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\

#define DEC_PTR_ARG_P2_OUT(FUNC_NAME, ARG_TYPE, ARG_NAME)			\
	DEC_ARG_BUFF(FUNC_NAME, ARG_TYPE##**, ARG_NMAE)					\
	DEC_PTR_ARG_RETURN_VAL_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)		\
	DEC_PTR_ARG_RETURN_VAL_SIZE_BUFF(FUNC_NAME, ARG_TYPE, ARG_NAME)	\

#define DEC_VOID_FUNC(FUNC_NAME)	\
	DEC_FUNC_INIT(FUNC_NAME)

#define DEC_VAL_FUNC(FUNC_TYPE, FUNC_NAME)	\
	DEC_FUNC_RETURN_VAL_BUFF(FUNC_TYPE, FUNC_NAME)				\
	DEC_FUNC_INIT(FUNC_NAME)									\

#define DEC_PTR_FUNC(FUNC_TYPE, FUNC_NAME)						\
	DEC_FUNC_RETURN_PTR_VAL_BUFF(FUNC_TYPE, FUNC_NAME)			\
	DEC_FUNC_RETURN_PTR_VAL_SIZE_BUFF(FUNC_TYPE, FUNC_NAME)		\
	DEC_FUNC_INIT(FUNC_NAME)									\

#define END_DECLARE_TD(FUNC_NAME)

#define	EXPAND(x)	x

#define PP_NARG_MINUS2(...)			EXPAND(PP_NARG_MINUS2_(__VA_ARGS__, PP_RSEQ_N_MINUS2()))

#define PP_NARG_MINUS2_(...)		EXPAND(PP_ARG_MINUS2_N(__VA_ARGS__))

#define PP_ARG_MINUS2_N(returnVal,  _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, N, ...)   N

#define PP_RSEQ_N_MINUS2()   10,10,9,9,8,8,7,7,6,6,5,5,4,4,3,2,2,1,1,0,0

#define PP_NARG_MINUS1(...)			EXPAND(PP_NARG_MINUS1_(__VA_ARGS__, PP_RSEQ_N_MINUS1()))

#define PP_NARG_MINUS1_(...)		EXPAND(PP_ARG_MINUS1_N(__VA_ARGS__))

#define PP_ARG_MINUS1_N( _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, N, ...)   N

#define PP_RSEQ_N_MINUS1()   10,10,9,9,8,8,7,7,6,6,5,5,4,4,3,2,2,1,1,0,0

#define DEF_VOID_FUNC(...)			EXPAND(DEF_VOID_FUNC_(PP_NARG_MINUS1(__VA_ARGS__), __VA_ARGS__))

#define DEF_VOID_FUNC_(N,...)		EXPAND(DEF_VOID_FUNC_N(N,__VA_ARGS__))

#define DEF_VOID_FUNC_N(N,...)		EXPAND(DEFINE_VOID_FUNC_ ## N(__VA_ARGS__))

#define DEF_VALUE_FUNC(...)			EXPAND(DEF_VALUE_FUNC_(PP_NARG_MINUS2(__VA_ARGS__), __VA_ARGS__))

#define DEF_VALUE_FUNC_(N,...)		EXPAND(DEF_VALUE_FUNC_N(N,__VA_ARGS__))

#define DEF_VALUE_FUNC_N(N,...)		EXPAND(DEFINE_VAL_FUNC_ ## N(__VA_ARGS__))
