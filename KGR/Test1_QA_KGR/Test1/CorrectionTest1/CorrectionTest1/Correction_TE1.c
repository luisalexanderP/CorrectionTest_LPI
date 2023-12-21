/*
*------------------------------------------------------------------------
* Nom du projet					: CorrectionTest1
* Date de cr�ation du projet	: 29.11.2023
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Kirian Gruber
* Date de cr�ation du fichier	: 29.11.2023
*------------------------------------------------------------------------
* Nom du dernier �diteur		: 
* Version						: x.x
* Date de derni�re modification	: 
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdint.h>
#include "testQ4.h"

/*-- librairie priv� --*/


/*-- d�claration variable --*/


/*-- d�claration fonction --*/


/*-- fontion princpale --*/
void main()
{
	/*-- d�claration variable --*/
	unsigned short valBrutCptDS1820, infoValeurEntier;
	signed short infoSigne;
	float infoValeurDemi;
	signed short valeurTemp;
	UN_SUR_DEUX;
	VAL_DEBUT;

	valBrutCptDS1820 = VAL_DEBUT;


	infoSigne = valBrutCptDS1820 >> 8; //J'ai de la peine � comprendre ce que vous entendez par faire une d�finition pour le d�calage par 8

	if (infoSigne == 0xFF)
	{
		infoSigne = -1;
	}
	else
	{
		infoSigne = 1;
	}
	
	infoValeurDemi = (valBrutCptDS1820 & 0x0001) * UN_SUR_DEUX;

	infoValeurEntier = (valBrutCptDS1820 & 0x00FF) >> 1;

	valeurTemp = (float)infoSigne * (infoValeurDemi + infoValeurEntier);

}

/*-- documentation --*/

