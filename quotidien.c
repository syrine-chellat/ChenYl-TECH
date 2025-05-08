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
