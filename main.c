#include <fichier.h>
#include <adopt.h>
int main(){
	
	int choix = afficher_menu();
	
	Animal animal[MAX_animaux];
	int esp;
	
	switch (choix){
		case 1 :
			for(int i=0; i<MAX_animaux; i++){
				if(animal[i].identifiant == 0){
					constructeur_animal(&animal[i], &esp, i);
					FILE* fichier = creer_fichier_animal(&animal[i], esp, i);
					fclose(fichier);
				}
				break;
			}
		//case 2 : 
			//rechercher_animal();
			//afficher_animal();
			//break;
		case 3 : 
			for(int i=0; i<MAX_animaux; i++){
				esp = animal[i].espece;
				afficher_animal(&animal[i], esp);
			}
			break;
		case 4 : 
		default :
			break;

	}

	
	return 0;
}
