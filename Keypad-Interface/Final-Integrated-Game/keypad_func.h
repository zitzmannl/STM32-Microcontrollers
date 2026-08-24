/*
 * keypad_func.h
 *
 *  Created on: Apr 9, 2026
 *      Author: lzitz
 */

#ifndef INC_KEYPAD_FUNC_H_
#define INC_KEYPAD_FUNC_H_

// which row goes into which pin on the board
//outputs
#define Row1_Pin			GPIO_PIN_11
#define Row1_GPIO_Port		GPIOD

#define Row2_Pin			GPIO_PIN_10
#define Row2_GPIO_Port		GPIOD

#define Row3_Pin			GPIO_PIN_9
#define Row3_GPIO_Port		GPIOD

#define Row4_Pin			GPIO_PIN_8
#define Row4_GPIO_Port		GPIOD

//inputs (pull up)
#define Column1_Pin			GPIO_PIN_15
#define Column1_GPIO_Port	GPIOB

#define Column2_Pin			GPIO_PIN_14
#define Column2_GPIO_Port	GPIOB

#define Column3_Pin			GPIO_PIN_13
#define Column3_GPIO_Port	GPIOB

#endif /* INC_KEYPAD_FUNC_H_ */

// Reads the keypad and returns the key pressed
char Keypad_Read(void){
	// Row 1
	HAL_GPIO_WritePin(Row1_GPIO_Port, Row1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Row2_GPIO_Port, Row2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row3_GPIO_Port, Row3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row4_GPIO_Port, Row4_Pin, GPIO_PIN_SET);

	if (HAL_GPIO_ReadPin(Column1_GPIO_Port, Column1_Pin) == GPIO_PIN_RESET) return 1;
	if (HAL_GPIO_ReadPin(Column2_GPIO_Port, Column2_Pin) == GPIO_PIN_RESET) return 2;
	if (HAL_GPIO_ReadPin(Column3_GPIO_Port, Column3_Pin) == GPIO_PIN_RESET) return 3;

	// Row 2
	HAL_GPIO_WritePin(Row1_GPIO_Port, Row1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row2_GPIO_Port, Row2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Row3_GPIO_Port, Row3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row4_GPIO_Port, Row4_Pin, GPIO_PIN_SET);

	if (HAL_GPIO_ReadPin(Column1_GPIO_Port, Column1_Pin) == GPIO_PIN_RESET) return 4;
	if (HAL_GPIO_ReadPin(Column2_GPIO_Port, Column2_Pin) == GPIO_PIN_RESET) return 5;
	if (HAL_GPIO_ReadPin(Column3_GPIO_Port, Column3_Pin) == GPIO_PIN_RESET) return 6;

	// Row 3
	HAL_GPIO_WritePin(Row1_GPIO_Port, Row1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row2_GPIO_Port, Row2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row3_GPIO_Port, Row3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Row4_GPIO_Port, Row4_Pin, GPIO_PIN_SET);

	if (HAL_GPIO_ReadPin(Column1_GPIO_Port, Column1_Pin) == GPIO_PIN_RESET) return 7;
	if (HAL_GPIO_ReadPin(Column2_GPIO_Port, Column2_Pin) == GPIO_PIN_RESET) return 8;
	if (HAL_GPIO_ReadPin(Column3_GPIO_Port, Column3_Pin) == GPIO_PIN_RESET) return 9;

	// Row 4
	HAL_GPIO_WritePin(Row1_GPIO_Port, Row1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row2_GPIO_Port, Row2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row3_GPIO_Port, Row3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Row4_GPIO_Port, Row4_Pin, GPIO_PIN_RESET);

	if (HAL_GPIO_ReadPin(Column1_GPIO_Port, Column1_Pin) == GPIO_PIN_RESET) return '*';
	if (HAL_GPIO_ReadPin(Column2_GPIO_Port, Column2_Pin) == GPIO_PIN_RESET) return '0';
	if (HAL_GPIO_ReadPin(Column3_GPIO_Port, Column3_Pin) == GPIO_PIN_RESET) return '#';

	return 0;
}
