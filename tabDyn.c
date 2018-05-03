#include <stdio.h>
#include <stdlib.h>
#include "tabDyn.h"

#define SIZE 10
#define AUGMENTE 10


int size, top ;

// ======================== privee ==============================

void  afficherType(myType x ) {
    printf( "%d \n" , x ) ;
    
}

myType ** augmente (myType** T)
{
    //size t=AUGMENTE;
    //malloc
    return T;
}

// ======================== public ==============================

/* --- L'init. Il faut créé dynamiquement un tableau de SIZE entiers --- */
myType *  construct() {
    myType * T;

    int i =0;
    
    T = (myType *) malloc(SIZE * sizeof(myType)); // On alloue de la mémoire pour le tableau ! multiplication
    if (T == NULL) // On vérifie si l'allocation a marché ou non
    {  printf( "apopo now\n" );
        exit(0); // On arrête tout
    }
    size = SIZE ;
    top = size-1 ;
    
    for (i=0; i<size ; i++)
        T[i]=0;
    return T ;
}

/* --- Detruire le tableau --- */
void   destructeur( myType ** T )
{
    //myType * tmp = NULL;
    
    // for(i=0 ; i<SIZE ; i++) {
    //  tmp = &T[i+1]; // sauvegarde l'adresse de l'element suivant
    //  free(&T[i]);
    //    T = tmp;  // retablir l'acces au tableau
    //}
    
    //FAIRE UNE BOUCLE CHAQUE CASE à l'envers
    free(*T);
    size=0;
    top=0;
}


/* --- Affichage du tableau --- */
void   Affiche( myType * T) {
    int i ;
    for ( i = 0 ; i <size ; i++ ) afficherType( T[i] ) ;
}


/* --- Ajout une valeur. Le tableau peut etre agrandit, donc pt modifie --- */
void   ajout( myType **T , myType v) {
    //(*T)[top++] = v ;
    
    //(*T)[top] = malloc(sizeof(myType));
    (*T) = realloc (*T, 1 * sizeof(myType) );
    top  += 1;
    size += 1;
    (*T)[top] = v;
}


/* --- Rend la position ou on a ajoute une valeur --- */
int    getFinAdd( )
{
    return size-1 ;
}

/* --- rend la taille du tableau --- */
int    getSize( )
{
    return size;
}

/* --- rend la valeur à la position du tableau --- */
myType getVal( myType * t, int i)
{
    return t[i] ;
}



/* --- rend vrai si on est a la fin du tableau --- */
int    isEnd( )
{
    if (top == size)
        return 1;
    return 0;
}


/* --- rend vrai si on est au debut du tableau --- */
int    isBeg() {
    
    if (top == 0)
        return 1;
    return 0;
}

