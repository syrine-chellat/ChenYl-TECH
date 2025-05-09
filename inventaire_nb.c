#include "fichier.h"

void compter_espece(Animal* a, int taille_animaux, int* compte, int nb_especes) {
    // Remise à zéro du tableau de comptage
    for (int i = 0; i < nb_especes; i++) {
        compte[i] = 0;
    }

    // Comptage des animaux valides
    for (int i = 0; i < taille_animaux; i++) {
        if (a[i].poids > 0 && (int)a[i].espece >= 0 && (int)a[i].espece < nb_especes) {
            compte[a[i].espece]++;
        }
    }
}
int compter_animaux(Animal* a, int taille){
	int count=0;
	for (int i=0; i<taille; i++){
	if( a[i].poids>0){
	count ++;
	}
	}
	return count;
}
//void NV_NB_DESC(Animal* animal){
   // int nb = compter_animaux(animal, MAX_animaux);
   // printf("Nombre total d'animaux dans le refuge : %d \n", &nb);
 // int tab[6];
//}


void INV_NB_DESC(Animal* animal, int* compte, int nb_especes) {
    int total = compter_animaux(animal, MAX_animaux);
    printf("Le nombre total d'animaux du refuge est : %d \n", total);
    
    
    StatEspece stats[nb_especes];
    for (int i = 0; i < nb_especes; i++) {
        stats[i].espece = i;
        stats[i].count = compte[i];
    }

    // Tri
    //trier_stats_croissant(stats, nb_especes);
    for (int i = 0; i < nb_especes - 1; i++) {
        for (int j = i + 1; j < nb_especes; j++) {
            if (stats[i].count < stats[j].count) {
                // Échange des éléments
                StatEspece temp = stats[i];
                stats[i] = stats[j];
                stats[j] = temp;
            }
        }
    }

    // Affichage
    printf("Nombre d'animaux par espèce par ordre croissant :\n");
    for (int i = 0; i < nb_especes; i++) {
        printf("%s : %d\n", nomsEspeces[stats[i].espece], stats[i].count);
    }
}
