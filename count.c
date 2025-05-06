#include <fichier.h>

int compter_animaux(Animal* a, int taille){
    int count = 0;
    for(int i=0; i<taille; i++){
        if(a[i].identifiant > 0){
            count++;
        }
    }
    return count;
}
