#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include "LCD/LCD.h"
#include "Stack/stack.h"
#include "keypad/keypad.h"




//Functions prototype
uint8_t* read_exp(void);
uint16_t string_to_number(uint8_t*);
uint8_t* number_to_string(uint16_t);
uint16_t infix_exp_eval(uint8_t*);
uint16_t clac(uint8_t,uint8_t);
void print_result(uint16_t);


#endif