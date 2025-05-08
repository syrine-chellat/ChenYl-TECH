#ifndef FICHIER_H
#define FICHIER_H

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

void vide_buffer();
int afficher_menu();
int retour_menu();
void afficher_animal(Animal* a, int esp);
void constructeur_animal(Animal* a, int* esp, int n);
void rechercher_animal(Animal* animaux, int nombre_animaux);
void adopter_animal(Animal* animaux, int* nombre_animaux);
int compter_animaux(Animal* a, int taille);
void compter_espece(Animal* a, int taille_animaux, int* compte, int nb_especes);
void INV_NB_DESC(Animal* animal, int* compte, int nb_especes);
void INV_AGE_ASC(Animal* animaux, int nombre_animaux);

#endif
