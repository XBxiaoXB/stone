/***********************************************************************/
/*                                                                     */
/*  FILE        :moyashi.c                                             */
/*  DATE        :Fri, Jan 07, 2022                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :H8/3694F                                              */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.16).    */
/*                                                                     */
/***********************************************************************/
#include "led.h"
void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

void main(void)
{
	InitLED();  // qqq

	LED1_ON();
	LED2_ON();

	while (1) {

	}
}
#ifdef __cplusplus
void abort(void)
{

}
#endif
