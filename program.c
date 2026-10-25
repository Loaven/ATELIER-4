#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main(void)
{
    // 1) Initialisation du tableau avec les valeurs de l'étape 1
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    // 1)Bis Recherche du maximum du tableau
    int max = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > max)
        {
            max = valeurs[i];
        }
    }

    // 2) Calcul de l'échelle avec maximum et MAX_LONGUEUR
    double echelle = (double)MAX_LONGUEUR / max;

    // 3) Affichage avec l'échelle proportionnelle
    for (int i = 0; i < NB_VALEURS; i++)
    {
        // Calcul du nombre de X à afficher en utilisant la variable echelle
        int nb_X = (int)(valeurs[i] * echelle);

        // Affichage des X en fonction de cette proportion
        for (int j = 0; j < nb_X; j++)
        {
            printf("X");
        }

        // Affichage de la valeur numérique à la fin de la ligne
        printf(" %d\n", valeurs[i]);
    }

    // 4) Ligne finale
    printf("+----------------------------------------------------+\n");

    return 0;
}