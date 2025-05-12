#include "fichier.h"
#include "couleurs.h"


int main()
{
    Animal animal[50];
    int esp, retour, compte;
    float croquette;
    int nbanim = compter_animaux(animal, MAX_animaux);
    
    for(int i=0; i<MAX_animaux; i++){
        animal[i].identifiant = 0;
        strncpy(animal[i].nom, "vide", MAX_nom);
        animal[i].nom[MAX_nom - 1] = '\0';
        animal[i].espece = 0;
        animal[i].annee = 0;
        animal[i].poids = 0;
    }

	/*for(int i=0; i<10; i++){
		 if(animal[i].poids == 0){
					    constructeur_animal(animal+i, &esp, i);
					    FILE* fichier = creer_fichier_animal(&animal[i], i);
					    fclose(fichier);
	}

	}*/

	for(int i=0; i<21; i++){
		lire_animaux(animal+i , i);
	}
    
	int choix;

    do{
		clrscr();
        	choix = afficher_menu();
		clrscr();
	    	switch (choix){
		   		case 1 :  //ajouter
			    	for(int i=0; i<MAX_animaux; i++){
				    	if(animal[i].poids == 0){
					    	constructeur_animal(animal+i, &esp, i);
					    	FILE* fichier = creer_fichier_animal(&animal[i], i);
					    	fclose(fichier);
					    	printf("L'animal a bien été enregistré, merci de nous l'avoir confié! \n");
							retour = retour_menu();
					     
				    	}
			    	}
						if(retour){
			    				break;
			   				 }
					    	clrscr();
					    	break;
		    	case 2 : //rechercher
			    	rechercher_animal(animal, MAX_animaux);
			    	retour = retour_menu();
				    if(retour){
				    	break;
					}
			    	clrscr();
		    		break;
	    		case 3 : //afficher
		    		for(int i=0; i<MAX_animaux; i++){
			    		esp = animal[i].espece;
			    		if(animal[i].poids > 0){  
                    		afficher_animal(animal+i, animal[i].espece);
                    	}
		    		}
		       		retour = retour_menu();
					if(retour){
				    	break;
					}
					clrscr();
		    		break;
	       		case 4 :  //adopter
		        	adopter_animal(animal, &nbanim);
		        	retour = retour_menu();
			   		if(retour){
			   	    	break;
					}
					clrscr();
		    		break;
		    	case 5 :  //inventaire
		       		compter_espece(animal, MAX_animaux, &compte, 6);
	            	INV_NB_DESC(animal, &compte, 6);
	            	INV_AGE_ASC(animal, MAX_animaux);
		    		retour = retour_menu();
			   		if(retour){
			   	    	break;
					}
			    	clrscr();
		    		break;
				case 6 :  //gestion du quotidien
			    	croquette = DAY_FOOD(animal, MAX_animaux);
			    	printf("La quantité de croquette quotidienne à prévoir est %f kg \n", croquette);
			    	DAY_CLEAN(animal, MAX_animaux);
			    	retour = retour_menu();
					if(retour){
				    	break;
					}
					clrscr();
		    		break;
    		}
    }while(choix!=7); 
	//quitter

    return 0;
}
