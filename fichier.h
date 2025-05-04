#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_nom 50
#define MAX_com 100
#define MAX_animaux 50
#define NB_ESPECE 4

typedef enum {CHIEN, CHAT, HAMSTER, AUTRUCHE} Espece;

const char* nomsEspeces[] = {"CHIEN","CHAT","HAMSTER","AUTRUCHE"};

typedef Struct{
int identifiant;
char nom[MAX_nom];
Espece espece;
int annee;
float poids;
char commentaire[MAX_com];
} Animal;

