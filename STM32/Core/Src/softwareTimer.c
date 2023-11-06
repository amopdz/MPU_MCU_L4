/*
 * softwareTimer.c
 *
 *  Created on: Nov 5, 2023
 *      Author: hhaof
 */

#include "main.h"
#include "softwareTimer.h"

uint8_t timerFlag[N0_OF_TIMER];
uint16_t timerCounter[N0_OF_TIMER];

void initTimer(){
	for(uint8_t i=0;i<N0_OF_TIMER;i++){
		timerCounter[i]=0;
		timerFlag[i]=0;
	}
}

void setTimer(uint16_t duration, uint8_t index){
	if(index>=0&&index<N0_OF_TIMER){
		timerCounter[index]=duration/TIMER_INTERRUPT_PERIOD;
		//timerCounter[index]=duration;
		timerFlag[index]=0;
	}
}

void timerRun(){
	for(uint8_t i=0;i<N0_OF_TIMER;i++){
		if(timerCounter[i]>0){
			timerCounter[i]--;
			if(timerCounter[i]<=0)timerFlag[i]=1;
		}
	}
}
