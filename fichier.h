#include <stdio.h>
#include <stdlib.h>
#define MAX_nom 50

typedef enum {CHIEN, CHAT, HAMSTER, AUTRUCHE} Espece;

typedef Struct{
int identifiant;
char nom[MAX_nom];
Espece espece;
int annee;
char commentaire[MAX_com];
} Animal;

