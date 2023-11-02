/* Test PROG n1$
Vitor Coelho
02.11.2023
SLO1*/

#include <stdio.h>

void main()
{
	while (true)
	{
		int valbrutcptDS1820;
		int infosigne;
		int infovaleurentier;
		int infovaleurdemi;
		int valeurtemp;

		valbrutcptDS1820 = 0xFF33;
		infosigne = valbrutcptDS1820 >> 8;
		if (infosigne == 0xff)
		{
			infosigne = -1;
		}
		else
		{
			infosigne = 1;
		}
		infovaleurentier = valbrutcptDS1820 & 0x00FF >> 1;

		valeurtemp = infosigne * infovaleurdemi + infovaleurentier;
	}



}
