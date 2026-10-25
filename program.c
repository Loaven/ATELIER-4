#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15

// Fonction pour afficher une ligne de l'histogramme vertical
void afficher_ligne_histov(int valeurs[], int taille, double y)
{
    printf("|");
    for (int j = 0; j < taille; j++)
    {
        if (valeurs[j] >= y)
        {
            printf("xxx");
        }
        else
        {
            printf("   "); // 3 espaces pour garder l'alignement
        }
    }
    printf("\n");
}

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    // Recherche du maximum dans le tableau
    int max = valeurs[0];
    for (int k = 1; k < NB_VALEURS; k++)
    {
        if (valeurs[k] > max)
        {
            max = valeurs[k];
        }
    }

    // Boucle pour afficher chaque ligne de l'histogramme vertical
    for (int i = 0; i < MAX_LIGNES; i++)
    {
        // Calcul exact de y pour la ligne i (avec MAX_LIGNES - 1 intervalles)
        double y = max - (i * ((double)max / (MAX_LIGNES - 1)));

        // Appel de la fonction pour dessiner la ligne y
        afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }

    // Ligne finale de socle
    printf("+--------------------------------+\n");

    return 0;
}