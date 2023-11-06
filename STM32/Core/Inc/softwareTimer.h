/*
 * softwareTimer.h
 *
 *  Created on: Nov 5, 2023
 *      Author: hhaof
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#ifndef N0_OF_TIMER
#define N0_OF_TIMER 4
#endif /* N0_OF_TIMER */

#ifndef TIMER_INTERRUPT_PERIOD
#define TIMER_INTERRUPT_PERIOD 10
#endif /* N0_OF_TIMER */

extern uint8_t timerFlag[];

void initTimer();
void setTimer(uint16_t, uint8_t);
void timerRun();

#endif /* INC_SOFTWARETIMER_H_ */
