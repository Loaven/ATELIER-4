#include <stdio.h>

#define NB_VALEURS 3
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
//Boucle pour afficher chaque ligne de l'histogramme vertical
    for (int i = 0; i < MAX_LIGNES; i++) 
    {
       
       //calcul de y pour la ligne i : y = maximum - (i * (maximum / MAX_LIGNES))
       double y = max - (i * ((double)max / MAX_LIGNES));

       //appel de la fonction pour dessiner y
       afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }
       
//ligne finale
printf("+------------------------------------+\n");

    return 0; 
 
}   