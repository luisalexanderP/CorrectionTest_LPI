#include <stdio.h>
int main()
{
    char caractere_alphabet;
    int valeur_decimal;
 
    while (1) {
        printf(" Entrer une lettre de l'alphabet en Minuscule ou Majuscule : ");
        scanf_s(" %c", &caractere_alphabet);
 
        // V�rifier si le caract�re est valide
        if ((caractere_alphabet >= 'A' && caractere_alphabet <= 'Z') || (caractere_alphabet >= 'a' && caractere_alphabet <= 'z'))
        {
           valeur_decimal = caractere_alphabet;
           // Afficher la valeur d�cimale
           printf("'%c' en Decimal vaut : %d\n", caractere_alphabet, valeur_decimal);
           // Afficher la valeur en hexad�cimal
           printf("'%c'en Hexadecimal vaud : 0x%X\n", caractere_alphabet, valeur_decimal);
        }
        else
        {
           printf("Erreur !! Entrer un caractere valide \n");
        }
    }

	return (0);
}