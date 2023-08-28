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
    CLCD_voidInit();                    /* Initialize The LCD */

    while (1) {
        PressedKey = KEYPAD_u8GetPressKEY();
        if (PressedKey != 0xff) {
            /*--------------------- This means that the pressed key is a number ----------------*/

            if (PressedKey >= '0' && PressedKey <= '9') {
                CLCD_voidSendData(PressedKey);   /* Display the pressed number on the LCD */
                num1 = num1 * 10 + (PressedKey - '0');   /* Update num1 with the pressed digit */
            }

            /*---------------- This means that the pressed key is an Operator ----------------*/
            if ((PressedKey == '+') || (PressedKey == '-') ||  (PressedKey == '*') || (PressedKey == '/')) {
                num2 = num1;    /* Store the first number (num1) and reset num1 */
                num1 = 0;
                CLCD_voidSendData(PressedKey);   /* Display the operator on the LCD */
                Operator = PressedKey;   /* Store the operator for later calculation */
            }

            /*------------ If the pressed key is '=' let's perform the mathematical operation ---------------*/
            if (PressedKey == '=') {
                CLCD_voidSendData(PressedKey);   /* Display the equal sign on the LCD */
                i++;
                switch (Operator) {
                    case '+':   /* If operator is + then perform addition operation */
                        CLCD_voidWriteNumber((num1 + num2));   /* Display the result on the LCD */
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
            /*-------------------- If the pressed key is 'c' let's clear the LCD and reset values ---------------------*/
            if (PressedKey == 'c') {
                CLCD_VidDisplayClear();   /* Clear the LCD display */
                num1 = 0;   /* Reset values for the next calculation */
                num2 = 0;
                i = 0;
            }
        }
    }
}
