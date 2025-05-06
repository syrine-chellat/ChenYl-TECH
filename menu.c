#include <fichier.h>


int afficher_menu() {
  int choix;
printf("\n=== Menu ChenYI-Tech ===\n");
printf("1. Ajouter un animal \n" );
printf("2. Rechercher un animal \n");
printf("3. Afficher tous les animaux \n");
printf("4. Adopter un animal \n");
// printf("5.Fonctionnalités des variantes\n");
printf("5. Quitter \n"); // printf("6.Quitter\n");
printf("Choix: ");
 scanf("%d" , &choix); 
 while (choix < 1 || choix > 5 ) { // while (choix < 1 || choix > 6 ) {
          printf("Erreur: Choix invalide.");
          scanf("%d" , &choix);
   }
return choix;
}
