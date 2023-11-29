/*Programme Q4 test1
Lieu:	ETML-ES
Auteur:	Etienne De OLiveira
Date:	02.11.2023
*/

//include//
#include "testQ4.h"
#include <stdint.h> //type normalise
#include<stdio.h> //entre sortie

//Programme principale//
void main()
{
	int valbrutcptDS1820;
	int infosigne, infovaleurentier, infovaleurdemi, valeurtemp;
	
	while (1)
	{
		valbrutcptDS1820 = 0xFF33;
		infosigne = valbrutcptDS1820 >> 8;
		if (infosigne == 0xFF)
		{
			infosigne = -1;
		}
		else
		{
			infosigne = 1;
		}
		infovaleurdemi = (valbrutcptDS1820 && 0x0001) * 0.5;
		infovaleurentier = (valbrutcptDS1820 && 0x00FF) >> 1;
		valeurtemp = infosigne * infovaleurdemi + infovaleurentier;
	}
}
