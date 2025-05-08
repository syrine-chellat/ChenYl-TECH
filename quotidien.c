#include "fichier.h"

float DAY_FOOD(Animal* a, int taille){
    float croquette = 0;
    for(int i=0; i<taille; i++){
        if(a[i].poids > 0){
            if(a[i].espece == 0 || a[i].espece == 1 || a[i].espece == 4){
                if(2025 - a[i].annee < 2){
                    croquette += 0.5;
                }
                else{
                    croquette += 0.1 * a[i].poids;
                }
            }
            if(a[i].espece == 2){
                croquette += 0.02;
            }
            if(a[i].espece == 3 || a[i].espece == 5){
                croquette += 2.5;
            }
        }
    }
    return croquette;
}

void DAY_CLEAN(Animal* a, int taille){               
    int temps = 0;
    for (int i=0; i<taille; i++){
        if (a[i].espece == 2 || a[i].espece == 1 ){  // hamster et chat = 10 minutes/jour + 20 minutes/semaine
        temps += (10*7) + 20;
        }
        if (a[i].espece == 3 || a[i].espece == 5 ){  // autruche et lama = 20 minutes/jour + 45 minutes/semaine
        temps += (20*7) + 45;
        }
        if(a[i].espece == 0 || a[i].espece == 4){    // chien et lapin = 5 minutes/jour et 20 minutes/semaine
        temps += (5*7) + 20;
        }
        else{                                        // cage vide = 5 minutes/jour
        temps += 2*7
        }
    }
    int heures = temps/60;
    int minutes = temps%60;

    printf("Le temps total de nettoyage hebdomadaire du refuge est de : %d heures et %d minutes\n", heures, minutes); // pour convertir les minutes en heures
}


