#include "STD_type.h"
#include "BIT_math.h"
#include <util/delay.h>
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "KEYPAD_interface.h"

int main() {
	u8 PressedKey=0xff, i = 0, Operator=0;
	s32 num1 = 0, num2 = 0;
	PORT_voidInit(); 
	CLCD_voidInit();					/*Initialize The LCD*/

	while (1)
	{
		PressedKey = KEYPAD_u8GetPressKEY();
		if (PressedKey != 0xff)
		{
			/*---------------------this mean that the pressed key is number----------------*/

			if (PressedKey >= '0' && PressedKey <= '9')
				{
					CLCD_voidSendData(PressedKey);
					num1 = num1 * 10 + (PressedKey - '0');

				}

			/*----------------this mean that pressed key is Operator---------*/
			if ((PressedKey == '+') || (PressedKey == '-') ||  (PressedKey == '*') || (PressedKey == '/') )
				{
					num2 = num1;
					num1 = 0;
					CLCD_voidSendData(PressedKey);
					Operator = PressedKey;
				}
			/*------------if the pressed key is equal lets do the mathimatical operation ---------------*/
			if (PressedKey == '=')
			{

				CLCD_voidSendData(PressedKey);
				i++;
				switch (Operator)
				{
				case '+':										/*if operator is + then perform addition operation*/
					CLCD_voidWriteNumber((num1 + num2));
					break;
				case '-':

					CLCD_voidWriteNumber((num1 - num2));
					break;
				case '*':

					CLCD_voidWriteNumber((num1 * num2));
					break;
				case '/':

					CLCD_voidWriteNumber((num1 / num2));
					break;
				}
			}
			i++;
			/*-------------------- if the pressed key is c lets clear the LCD ---------------------*/
			if (PressedKey == 'c')
			{
				CLCD_VidDisplayClear();
				num1 = 0;
				num2 = 0;
				i = 0;

			}

		}

	}

}
