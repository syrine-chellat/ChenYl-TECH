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
		if( a[i].poids>0){  //critère d'existence 
			count ++;
		}
	}
	return count;
}

void INV_NB_DESC(Animal* animal, int* compte, int nb_especes) {
	int total = compter_animaux(animal, MAX_animaux);
    printf("Le nombre total d'animaux du refuge est : %d \n", total);
    
    StatEspece stats[nb_especes];
    for (int i = 0; i < nb_especes; i++) {
        stats[i].espece = i;
        stats[i].count = compte[i];  //comptage du nombre d'animaux par espèces
    }

    // Tri par sélection
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


void INV_AGE_ASC(Animal* animaux, int nombre_animaux){

	int tranches_age[4]={0};

	for (int i=0; i<nombre_animaux; i++){
		int age = 2025 - animaux[i].annee;

		if(animaux[i].poids >0){
        	if (age>=0 && age<=2){
            	tranches_age[0]++;
        	}
      
        	else if (age<=5){
            	tranches_age[1]++;
        	}
      
        	else if (age<=10){
            	tranches_age[2]++;
        	}
        	else{
            	tranches_age[3]++;
        	}
     	}
  	}

  	printf("Il y a %d dans la tranche d'âge de 0 à 2 ans.\n",tranches_age[0]);
  	printf("Il y a %d dans la tranche d'âge de 3 à 5 ans.\n",tranches_age[1]);
  	printf("Il y a %d dans la tranche d'âge de 6 à 10 ans.\n",tranches_age[2]);
  	printf("Il y a %d dans la tranche d'âge de plus de 11 ans.\n",tranches_age[3]);

}
