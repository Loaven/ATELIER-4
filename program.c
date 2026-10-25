#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int i, j, k;

    // 1. Recherche du maximum pour l'échelle (Étape 2)
    int maximum = valeurs[0];
    for (i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    // 2. Affichage de la graduation supérieure (Étape 4)
    printf("Echelle (0 a %d):\n", MAX_LONGUEUR);
    printf("  ");
    for (i = 0; i <= MAX_LONGUEUR; i += 5)
    {
        printf("+");
        // Espace entre les repères (+ tous les 5 caractères)
        for (j = 0; j < 4 && (i + j) < MAX_LONGUEUR; j++)
        {
            printf("-");
        }
    }
    printf("\n");

    // 3. Affichage des barres horizontales avec lignes de suivi et valeurs
    for (i = 0; i < NB_VALEURS; i++)
    {
        // Calcul de la longueur proportionnelle de la barre par rapport à l'échelle
        int nb_croix = (valeurs[i] * MAX_LONGUEUR) / maximum;

        printf("  "); // Petit décalage pour l'alignement

        // Affichage des X (la barre)
        for (k = 0; k < nb_croix; k++)
        {
            printf("X");
        }

        // Affichage des points de suivi (.) jusqu'à MAX_LONGUEUR (Étape 4)
        for (k = nb_croix; k < MAX_LONGUEUR; k++)
        {
            printf(".");
        }

        // Affichage de la valeur exacte à la fin
        printf(" %d\n", valeurs[i]);
    }

    return 0;
}