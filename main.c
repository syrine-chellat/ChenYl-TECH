#include <fichier.h>
#include <adopt.h>
int main()
{
    Animal animal[50];
    int esp;
    for(int i=0; i<2; i++){
	    constructeur_animal(&animal[i], &esp, i);
	}
    int choix = afficher_menu();
    int cheap = 50;
	

do{
	switch (choix){
		case 1 :
			for(int i=0; i<50; i++){
				if(animal[i].poids == 0){
					constructeur_animal(&animal[i], &esp, i);
					FILE* fichier = creer_fichier_animal(&animal[i], esp, i);
					fclose(fichier);
				}
				break;
			}
		case 2 : 
			rechercher_animal(&animal[0], 50);
			break;
		case 3 : 
			for(int i=0; i<MAX_animaux; i++){
				esp = animal[i].espece;
				if(animal[i].poids > 0){  // ou autre critère d’existence
                  afficher_animal(&animal[i], animal[i].espece);
                }
			}
			break;
		case 4 : 
		    adopter_animal(&animal[0], &cheap);
		    break;
		default :
			break;

	}
}while(choix!=5);


    return 0;
}
