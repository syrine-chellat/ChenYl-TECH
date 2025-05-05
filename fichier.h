#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_nom 50
#define MAX_com 100
#define MAX_animaux 50
#define NB_especes 4
#define NB_ANIMAUX_MAX 50

typedef enum {CHIEN, CHAT, HAMSTER, AUTRUCHE, LAPIN, LAMA} Espece;

const char* nomsEspeces[] = {"CHIEN","CHAT","HAMSTER","AUTRUCHE", "LAPIN", "LAMA"};

typedef struct{
int identifiant;
char nom[MAX_nom];
Espece espece;
int annee;
float poids;
char commentaire[MAX_com];
} Animal;
