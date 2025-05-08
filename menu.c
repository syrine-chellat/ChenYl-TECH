#include "fichier.h"


int afficher_menu() {
  int choix;
printf("\n=== Menu ChenYI-Tech ===\n");
printf("1. Ajouter un animal \n" );
printf("2. Rechercher un animal \n");
printf("3. Afficher tous les animaux \n");
printf("4. Adopter un animal \n");
printf("5. Inventaire \n");
// printf("5.Fonctionnalités des variantes\n");
printf("6. Gestion du quotidien \n");
printf("7.Quitter\n");
printf("Choix: ");
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
