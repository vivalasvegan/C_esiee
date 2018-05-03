/*                            tabDyn.h                                */

#ifndef  __TAB_DYN__      // afin d'eviter les doubles declarations
#define  __TAB_DYN__
#include "mytype.h"

typedef unsigned int Uint;
typedef  int  myType ;

typedef struct{
    Uint Size, top;
    myType **T;
}tabDyn;

/* --- L'init. Il faut créé dynamiquement un tableau de SIZE entiers --- */
myType *  construct() ;

/* --- Detruire le tableau --- */
void   destructeur( myType ** ) ;

/* --- Affichage du tableau --- */
void   Affiche( myType * ) ;

/* --- Ajout une valeur. Le tableau peut etre agrandit, donc pt modifie --- */
void   ajout( myType ** , myType ) ;

/* --- Rend la position ou on a ajoute une valeur --- */
int    getFinAdd( myType * ) ;

/* --- rend la taille du tableau --- */
int    getSize( ) ;

/* --- rend la valeur à la position du tableau --- */
myType getVal( myType *, int ) ;

/* --- rend vrai si on est a la fin du tableau --- */
int    isEnd( ) ;

/* --- rend vrai si on est au debut du tableau --- */
int    isBeg( ) ;

// ###########################################################################

#endif



