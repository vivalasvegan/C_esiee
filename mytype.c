//
//  mytype.c
//  C_projet
//
//  Created by Christiane RAKOTOARISOA on 03/05/2018.
//  Copyright © 2018 Christiane RAKOTOARISOA. All rights reserved.
//

#include "mytype.h"

Tabdyn.h
#include "mytype.h"
typedef Unsigned int Unit;

typedef struct{
    Uint Size, top;
    mytype **T;
}tabDyn;

Struct X{a};
X x;
x.a = alpha (mais je ne sais pas comment le noter avec l'ordi)
             X.y
             y ->a = alpha (mais je ne sais pas comment le noter avec l'ordi)
                            
tabDyn * CONSTRUCTtabDyn () {
tabdyn of X = malloc (sizeof (Tabdyn));
X -> T = malloc(sizeof (mytype)*
    X ->Sie = Size;
    top = (zéro barré) ;
    return X;
}
                                                
tabDyn * constructTabDyn();
void
destruct TabDyn (tabDyn *);
                                                
                
____________________________________________________________
mytype.h
typedef Struct {
    char * nom;
    }mytype
                                                
                                                
 mytype * constructMytype (char*);
 void     destructMytype(mytype*);
 void     affiche mytype(mytype*);
 
 mytype* constructMytype(char * S)S
 mytype * K = malloc(Sizeof (mytype));
 K->nom=malloc(Struct(S)+1)*Sizeof(char));
 Strcpy(K->nom, S);
 return K;
 }
----------------------------------------------------------------------------
                            
char * TROOTS[]= {"coucou", "salut", "hello"};
int main () {
tabDyn * TD =constructTabDyn ();
for ( i = 0; i<Sizeof (char *); i++)
        ajout (TD, constructMytype(TMots[i]);
               affich TabDyn(TD);
               free(TD);
               return 0;
               }
