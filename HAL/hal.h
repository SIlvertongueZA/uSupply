/* 
* hal.h
*
* Created: 2016/07/20 10:41:39 AM
* Author: Philip
*/


#ifndef __HAL_H__
#define __HAL_H__

class hal
{
//variables
public:
  static port portA;
  static port portB;
  static port portC;
  static port portD;
  static port portE;
  static port portF;
  static port portG;

  static pin climitLed;

  static ADC_CHANNEL_MUX VoltageChannel;
  static ADC_CHANNEL_MUX TemperatureChannel;
protected:
private:

//functions
public:
  static void board_init(void);
protected:
private:


}; //hal

#endif //__HAL_H__
