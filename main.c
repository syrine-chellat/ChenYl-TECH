#include <fichier.h>
#include <adopt.h>
int main()
{
    Animal animal[50];
    int esp;
    int nbanim = compter_animaux(animal, MAX_animaux);
    
    for(int i=0; i<MAX_animaux; i++){
        animal[i].identifiant = 0;
        strncpy(animal[i].nom, "vide", MAX_nom);
        animal[i].nom[MAX_nom - 1] = '\0';
        animal[i].espece = VIDE;
        animal[i].annee = 0;
        animal[i].poids = 0;
    }
    
    for(int i=0; i<2; i++){
	    constructeur_animal(animal+i, &esp, i);
	}

	int choix;

do{
    choix = afficher_menu();
	switch (choix){
		case 1 :
			for(int i=0; i<MAX_animaux; i++){
				if(animal[i].poids == 0){
					constructeur_animal(animal+i, &esp, i);
					//FILE* fichier = creer_fichier_animal(&animal[i], esp, i);
					//fclose(fichier);
				}
			}
			break;
		case 2 : 
			rechercher_animal(animal, MAX_animaux);
			break;
		case 3 : 
			for(int i=0; i<MAX_animaux; i++){
				esp = animal[i].espece;
				if(animal[i].poids > 0){  // ou autre critère d’existence
                  afficher_animal(animal+i, animal[i].espece);
                }
			}
			break;
		case 4 : 
		    adopter_animal(animal, &nbanim);
		    break;
		default :
			break;

	}
}while(choix!=5);


    return 0;
}
