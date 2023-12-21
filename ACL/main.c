#include "testQ4.h"
#include <stdint.h>

void main(void)
{
	//VarLoc
	uint16_t ValBrutCptDS1820 = 0;
	int16_t InfoSigne = 0;
	float InfoValeurDemi = 0;
	float ValeurTemp = 0;
	uint8_t InfoValeurEntier = 0;

	//Body

	ValBrutCptDS1820 = VALDS;
	InfoSigne = ValBrutCptDS1820 >> EIGHT;
	if (InfoSigne == SIGNE)
	{
		InfoSigne = -1;
	}
	else
	{
		InfoSigne = 1;
	}
	InfoValeurDemi = ((ValBrutCptDS1820&DEM)*HALF);
	InfoValeurEntier = (ValBrutCptDS1820 & ENT) >> 1;
	ValeurTemp = (InfoSigne * (InfoValeurDemi + InfoValeurEntier));

}
