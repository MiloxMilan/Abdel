#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int factoriel(int nb)
{
    int resultat = 1;

    for(int i = 1; i <= nb; i++)
    {
        resultat = resultat * i;
    }

    return resultat;
}