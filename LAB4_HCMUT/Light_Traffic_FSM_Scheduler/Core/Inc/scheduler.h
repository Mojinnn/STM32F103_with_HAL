/*
 * sheduler.h
 *
 *  Created on: Jun 30, 2025
 *      Author: Lenovo
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct {
	void (*pTask) (void);

	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;

} sTask;

#define SCH_MAX_TASK		40
#define NO_TASK_ID			0

//sTask SCH_task_G[SCH_MAX_TASK];

void SCH_Init(void);
void SCH_Updated(void);
void SCH_Dispatch_Task(void);
uint32_t SCH_Add_Task(void(*pFunction)(void), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t taskID);



#endif /* INC_SCHEDULER_H_ */
