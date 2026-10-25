#include <stdio.h>

#define NB_VALEURS 3

int main(void) 
{
   
    int valeurs[NB_VALEURS] = { 8, 4, 12}; 
    int i = 0; 
    
    while (i < NB_VALEURS)
    {
        printf("valeurs[%d] = %d\n", i, valeurs[i]);
        i++;
    }
   
//5) ligne finale
printf ("+-------------------+\n");

    return 0; 
 
}   