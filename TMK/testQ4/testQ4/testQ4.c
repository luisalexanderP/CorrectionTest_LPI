//-- libraires strandrad --//

#include <stdio.h>	//entree - sortie
#include <testQ4.h>	//Constantes

//-- d�claration des variables --//
short infovaleurentier,valeurtemp;
char infosigne;
float infovaleurdemi;				

//-- programme principale --//
void main()
{
	infosigne = valbrutcptDS1820 >> 8;	//D�calage de 8bits

	if (infosigne == 0xFF)				//S�lection du signe de temp�rature
	{
		infosigne = -1;
	}
	else
	{
		infosigne = 1;
	}
	infovaleurdemi = valbrutcptDS1820 & 0x0001; //Traitement des donn�s de temp�rature selon le datasheet
	infovaleurdemi = infovaleurdemi / 2;

	infovaleurentier = valbrutcptDS1820 & 0x00FF >> 1;
	infovaleurentier = infovaleurentier >> 1;

	valeurtemp = infosigne * infovaleurdemi;
	valeurtemp = valeurtemp + infovaleurentier;
}