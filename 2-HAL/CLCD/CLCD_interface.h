/***************************************************************************************/
/***************************************************************************************/
/***************************  YOUSSEF **************************************************/
/*************************** LAYER : HAL **********************************************/
/***************************  CLCD ***************************************************/
/*************************** VERSION : 1.00 ********************************************/


#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_



void CLCD_voidSendCommand(u8 Copy_u8Command);

void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_voidInit(void);

void CLCD_voidSendString( const char *Copy_pcString);

void CLCD_voidGotoXY(u8 Copy_u8XPos , u8 Copy_u8YPos);

void CLCD_VidDisplayClear(void);

void CLCD_voidWriteSpecialCharacter(u8 *Copy_pu8Pattern , u8 PatternNumber , u8 Copy_u8XPos , u8 Copy_u8YPos );

void CLCD_voidWriteNumber(s32 Copy_s32Number); 


#endif









