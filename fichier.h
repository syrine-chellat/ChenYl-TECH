#include <stdio.h>
#include <stdlib.h>
#define MAX_nom 50
#define MAX_com 100

typedef enum {CHIEN, CHAT, HAMSTER, AUTRUCHE} Espece;

typedef Struct{
int identifiant;
char nom[MAX_nom];
Espece espece;
int annee;
float poids;
char commentaire[MAX_com];
} Animal;

