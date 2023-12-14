/*
*------------------------------------------------------------------------
* Projet name					: test1
* Projet creation date			: 07.11.2023
*------------------------------------------------------------------------
* Auther's name-s				: Gruber Kirian
* Date de création du fichier	: 07.11.2023
*------------------------------------------------------------------------
* Last editer					: 07.11.2023
* Version						: 1.0
* Last mod date					: 
*------------------------------------------------------------------------
* purpose of this file			: Question 4 test 1 de PROG
* comments						: 
*------------------------------------------------------------------------
*/

/*-- public library --*/
#include <stdio.h>							// entree - sortie
#include "testQ4.h"
/*-- private library --*/


/*-- globale variable declaration --*/


/*-- function declaration --*/


/*-- main fontion --*/
void main()
{
	/*-- variable declaration --*/
	unsigned short int ValBrutCptDS1820, InfoValeurEntier;
	signed short int InfoSigne;
	float InfoValeurDemi;
	double ValeurTemp;
	UnSurDeux;
	ValDebut;

	ValBrutCptDS1820 = ValDebut;

	InfoSigne = ValBrutCptDS1820 >> 8; //décallage de 8 bits

	if (InfoSigne == 0xff)
	{
		InfoSigne = -1;
	}
	else
	{
		InfoSigne = 1;
	}

	InfoValeurDemi = ValBrutCptDS1820 && 0x0001 * UnSurDeux;

	InfoValeurEntier = ValBrutCptDS1820 && 0x00FF >> 1;

	ValeurTemp = InfoSigne * InfoValeurDemi + InfoValeurEntier
}

/*-- documentation --*/

