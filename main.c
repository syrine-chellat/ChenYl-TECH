#include <fichier.h>
#include <adopt.h>

int main()
{
    Animal animal[50];
    int esp, retour, compte;
    int nbanim = compter_animaux(animal, MAX_animaux);
    
    for(int i=0; i<MAX_animaux; i++){
        animal[i].identifiant = 0;
        strncpy(animal[i].nom, "vide", MAX_nom);
        animal[i].nom[MAX_nom - 1] = '\0';
        animal[i].espece = 0;
        animal[i].annee = 0;
        animal[i].poids = 0;
    }
    
    for(int i=0; i<2; i++){
	    constructeur_animal(animal+i, &esp, i);
	}
	
	//compter_espece(animal, MAX_animaux, &compte, 6);
	//INV_NB_DESC(animal, &compte, 6);

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
					    printf("L'animal a bien été enregistré, merci de nous l'avoir confié! \n");
					    break;
				    }
			    }
			    retour = retour_menu();
			    if(retour){
			    	break;
			    }
		    case 2 : 
			    rechercher_animal(animal, MAX_animaux);
			    retour = retour_menu();
				    if(retour){
				        break;
					}
	    	case 3 : 
		    	for(int i=0; i<MAX_animaux; i++){
			    	esp = animal[i].espece;
			    	if(animal[i].poids > 0){  // ou autre critère d’existence
                    afficher_animal(animal+i, animal[i].espece);
                    }
		    	}
		        retour = retour_menu();
				if(retour){
				    break;
				}
	       	case 4 : 
		         adopter_animal(animal, &nbanim);
		         retour = retour_menu();
			   	if(retour){
			   	    break;
				}
		    case 5 :
		        compter_espece(animal, MAX_animaux, &compte, 6);
	            INV_NB_DESC(animal, &compte, 6);
		    	retour = retour_menu();
			   	if(retour){
			   	    break;
				}
            default :
            break;
    	}
    }while(choix!=6);


    return 0;
}
