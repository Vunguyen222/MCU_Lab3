/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "input_reading.h"
#include "Ouput.h"

#define Internalclock 8000000
#define Onesecond 1000

extern int prescaler;
extern int period;
extern int time_cycle;
extern int id;

enum State { INIT, MODE1_NORMAL, MODE2_MANRED, MODE3_MANYELLOW,
	MODE4_MANGREEN
};

enum TrafficLight { GREEN, YELLOW, RED };

extern int status;

extern int TL1;
extern int TL2;

extern int redlight;
extern int yellowlight;
extern int greenlight;

extern int Red1;
extern int Green1;
extern int Yellow1;

extern int Red2;
extern int Green2;
extern int Yellow2;

#endif /* INC_GLOBAL_H_ */
