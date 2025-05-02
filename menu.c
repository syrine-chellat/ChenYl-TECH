#include <stdio.h>

int afficher_menu() {
  int choix;
printf("\n=== Menu ChenYI-Tech ===\n");
printf("1. Ajouter un animal \n" );
printf("2. Rechercher un animal \n");
printf("3. Afficher tous les animaux \n");
printf("4. Adopter un animal \n");
printf("5. Quitter \n");
printf("Choix: ");
 scanf("%d" , &choix); 
return choix;
}
   while (choix < 1 || choix > 5 ) {
          printf("Erreur: Choix invalide.");
          scanf("%d" , &choix);
   }
