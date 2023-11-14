/*
 * input_reading.h
 *
 *  Created on: Nov 13, 2023
 *      Author: DELL
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_
#include "main.h"

void button_reading(unsigned char index);
unsigned char is_button_pressed(uint8_t index);
unsigned char is_button_pressed_1s(unsigned char index);

#endif /* INC_INPUT_READING_H_ */
