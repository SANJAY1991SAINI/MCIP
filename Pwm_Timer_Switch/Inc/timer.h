
#ifndef TIMER_H_
#define TIMER_H_

#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define TCLK	16000000
#define TIM_PSC	16

void TimerInit(void);
void controlPWM(int cnt);

#endif /* TIMER_H_ */
