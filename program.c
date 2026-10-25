#include <stdio.h>

int main(void) 
{
    double valeurs [2000]=(0.0);
    int nb_valeurs = 0;
    double montant;

    do
    {
       printf("montant de la valeur : "); 
       scanf("%f", & montant); //attend la saisie d'un nombre à virgule et le met dans montant
       valeurs[ nb_valeurs ] = montant;
       nb_valeurs ++; 
       
        /* code */
    } while (montant >= 0);
    nb_valeurs--;//on ignore la derniere saisie 

    //calcul du CA
    double ca = 0.0;
    
    for (int i = 0; i < nb_valeurs ; i ++)
    {
        ca += valeurs[i];
    }
    printf("Le CA est de : %f\n", ca);

    return 0; 
 
}   