#include <stdio.h>
#include "tabDyn.h"
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i;

    myType * T = NULL;
    T = construct();
    int max = getSize();
    for (i=0; i < max ; i++)
        ajout(&T,i);
    
    printf("la taille est %d\n", getSize());
    Affiche (T);
    
    destructeur(&T);
    
    printf("la taille est %d\n", getSize());
    Affiche (T);
    
    return 0;
    
    
}


