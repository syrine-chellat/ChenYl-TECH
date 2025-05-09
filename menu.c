#include "fichier.h"

void centrer(){
	printf("                                                         ");
}

int afficher_menu() {
  int choix;
 
	for(int i=0; i<14; i++){
		printf("\n");
	}
	centrer();
	//couleur("30;45");
    printf("===== Menu ChenYI-Tech =====\n"); 
    //couleur("0");
    centrer();
    //couleur("30;45");        
	printf("1. Ajouter un animal        \n" );
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("2. Rechercher un animal     \n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("3. Afficher tous les animaux\n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("4. Adopter un animal        \n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("5. Inventaire               \n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("6. Gestion du quotidien     \n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("7.Quitter                   \n");
	//couleur("0");
	centrer();
	//couleur("30;45");
	printf("Choix: ");
	//couleur("0");
 scanf("%d" , &choix); 
 while (choix < 1 || choix > 7 ) { 
          printf("Erreur: Choix invalide.");
          scanf("%d" , &choix);
   }
return choix;
}

int retour_menu(){
    int retour, verif;
    do{
        printf("Taper 1 pour retourner au menu : ");
        verif = scanf("%d", &retour);
        vide_buffer();
    } while(retour != 1 && verif != 1);
    return retour;
}
