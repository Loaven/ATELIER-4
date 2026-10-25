#include <stdio.h>

#define NB_VALEURS 3

int main(void) 
{
    //1)initialisation du tableau avec valeurs etape 1

    int valeurs[NB_VALEURS] = { 8, 4, 12}; 
    
    //2) boucle externe ( parcourt chaque valeur du tableau comme dans exemple)
for ( int i = 0; i < NB_VALEURS; i++)
{
  //3) boucle interne : affiche un X autant de fois que la valeur stockée 
  for (int j= 0; j< valeurs[i]; j++)
  {
    printf("X");
  }
  
  //4) Affiche la valeur numérique à la fin de la ligne (cf logigramme)
    printf(" %d\n", valeurs[i]);
}
//5) ligne finale
printf ("+-------------------+\n");

    return 0; 
 
}   