/*
 * scheduler.c
 *
 *  Created on: Jun 30, 2025
 *      Author: Lenovo
 */

#include "scheduler.h"

#define RETURN_ERROR 	0
#define RETURN_NORMAL	1
#define tick 			10

sTask SCH_task_G[SCH_MAX_TASK];

void SCH_Init(void) {
	uint8_t index;

	for (index = 0; index < SCH_MAX_TASK; index++) {
		SCH_Delete_Task(index);
	}
}

void SCH_Updated(void) {
	uint8_t index;

	for (index = 0; index < SCH_MAX_TASK; index++) {
		if (SCH_task_G[index].pTask) {
			if (SCH_task_G[index].Delay == 0) {
				SCH_task_G[index].RunMe += 1;
				if (SCH_task_G[index].Period) {
					SCH_task_G[index].Delay = SCH_task_G[index].Period;
				}
			}
			else {
				SCH_task_G[index].Delay -= 1;
			}
		}
	}
}

void SCH_Dispatch_Task() {
	uint8_t index;

	for (index = 0; index < SCH_MAX_TASK; index++) {
		if (SCH_task_G[index].RunMe > 0) {
			(*SCH_task_G[index].pTask)();
			SCH_task_G[index].RunMe -= 1;
		}
		if (SCH_task_G[index].Period == 0) {
			SCH_Delete_Task(index);
		}
	}
}

uint32_t SCH_Add_Task(void(*pFunction)(), uint32_t DELAY, uint32_t PERIOD) {
	uint8_t index = 0;

	while((SCH_task_G[index].pTask != 0) && (index < SCH_MAX_TASK)) {
		index++;
	}
	if (index == SCH_MAX_TASK) {
		return SCH_MAX_TASK;
	}

	SCH_task_G[index].pTask = pFunction;
	SCH_task_G[index].Delay = DELAY/tick;
	SCH_task_G[index].RunMe = 0;
	SCH_task_G[index].Period = PERIOD/tick;

	return index;
}

uint8_t SCH_Delete_Task(uint32_t taskID) {
	uint8_t Return_code;

	if (SCH_task_G[taskID].pTask == 0) {
		Return_code = RETURN_ERROR;
	}
	else {
		Return_code = RETURN_NORMAL;
	}

	SCH_task_G[taskID].pTask = 0x0000;
	SCH_task_G[taskID].Delay = 0;
	SCH_task_G[taskID].RunMe = 0;
	SCH_task_G[taskID].Period = 0;

	return Return_code;
}



