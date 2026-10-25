#include <stdio.h>

#define NB_VALEURS 3

#define MAX_LONGUEUR 50
#define MAX_LIGNES 15


//ajout de la fonction afficher_ligne_histov
void afficher_ligne_histov(int valeurs[], int taille, double y) 
{
    
    printf("|");
    for (int j= 0; j < taille; j++) 
    {
       if (valeurs [j] >= y) 
       {
            printf("xxx");
    }
    else
    {
        printf("   ");
    }
    }
    printf("\n");
}
int main(void) 
{

    int valeurs[NB_VALEURS] = { 8, 4, 12};
    
    //Recherche du maximum du tableau/changement du i par k pour éviter la confusion avec l'autre boucle
    int max = valeurs[0];
    for (int k = 1; k < NB_VALEURS; k++)
    {
        if (valeurs[k] > max)
        {
            max = valeurs[k];
        }
}

printf("max trouvé : %d\n", max);
 return 0; 
 
}   