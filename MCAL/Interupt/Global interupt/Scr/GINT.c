/*
 * GINT.c
 *
 *  
 *      Author: Aya Hesham
 */



#include "GINT.h"

void GINT_Enable(void)
{
	SET_BIT(GINT_SREG,7);
}

void GINT_Disable(void)
{
	CLR_BIT(GINT_SREG,7);
}
