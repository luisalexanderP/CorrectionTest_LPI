/*
*------------------------------------------------------------------------
* Nom du projet					: reponse_test_PROG_question_4
* Date de cr�ation du projet	: 02/11/2023
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Blitsheyn Jacob
* Date de cr�ation du fichier	: 02/11/2023
*------------------------------------------------------------------------
* Nom du dernier �diteur		: Blitshtey Jacob
* Version						: x.x
* Date de derni�re modification	: 02/11/2023
*------------------------------------------------------------------------
* But du fichiers				: repondre a la question 4 du premiers test de PROG
* commentaire					: N/A
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>				// entr� - sortie

/*-- librairie priv� --*/
#include "testQ4.h"				// fichiers .h pour les constentes numeriques

/*-- d�claration variable --*/
long valBrutCptDS1820;
int infoSigne, infoValeurEntier, infoValeurDemi, valeurTemp;

/*-- d�claration fonction --*/


/*-- fontion princpale --*/
void main() {
	valBrutCptDS1820 = 0xFF33;

	infoSigne = valBrutCptDS1820 >> 8;			// d�calage 8bits

	if (infoSigne == 0xff) {
		infoSigne = -1;

	}
	else {
		infoSigne = 1;
	}

	infoValeurDemi = valBrutCptDS1820 & 0x00FF * 0.5;

	infoValeurEntier = valBrutCptDS1820 & 0x00FF >> 1;

	valeurTemp = infoSigne * infoValeurDemi + infoValeurEntier;
	
}

/*-- documentation --*/

