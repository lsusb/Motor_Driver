#ifndef __SVPWM_H__
#define __SVPWM_H__
#include "main.h" 

#define MOTOR_POWER   24 
#define Ts            2250
#define Time1_Period  2250
#define MAX_Duty      2250

void DRV8305_Output(int Duty[6]);
void DRC8305_Driver_Control(float T);
void Svpwm_Module(void);
void Anti_Park_Calc(void);

extern int Section;
#endif
