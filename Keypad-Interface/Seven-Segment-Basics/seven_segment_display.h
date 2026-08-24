/*
 * final_project_j.h
 *
 *  Created on: Apr 2, 2026
 *      Author: jmtas
 */

#ifndef FINAL_PROJECT_J_H_
#define FINAL_PROJECT_J_H_
#define Seg_A 0x01
#define Seg_B 0x02
#define Seg_C 0x04
#define Seg_D 0x08
#define Seg_E 0x10
#define Seg_F 0x20
#define Seg_G 0x40
#define Seg_DP 0x80 //the decimal point on the seven segment display

uint8_t SevenSeg[10] = {
0b11000000, //0 (0b is the start of the binary line, then it goes DP,G,F,E,D,C,B,A
0b11111001, //1
0b10100100, //2
0b10110000, //3
0b10011001, //4
0b10010010, //5
0b10000010, //6
0b11111000, //7
0b11000000, //8
0b10010000, //9

};
void Display(uint8_t number)
{ if (number > 9) return;
uint8_t segments = SevenSeg[number];
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_7, (segments & Seg_A) ? GPIO_PIN_SET : GPIO_PIN_RESET); //Sees if segment A is on or off
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, (segments & Seg_B) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, (segments & Seg_C) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, (segments & Seg_D) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, (segments & Seg_E) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, (segments & Seg_F) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, (segments & Seg_G) ? GPIO_PIN_SET : GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, (segments & Seg_DP) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

#endif /* FINAL_PROJECT_J_H_ */
