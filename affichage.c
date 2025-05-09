#include "fichier.h"

void afficher_animal(Animal* a, int esp) {
    printf ("\n-- Fiche Animal --\n");
    printf ("ID: %d\n" , a->identifiant);
    printf ("Nom: %s\n" , a->nom);
  if (esp >= 0 && esp < NB_especes) {
    printf ("Espèce: %s\n" , nomsEspeces[esp]);
  } else { 
    printf (" Espèce: Inconnue\n");
  }
    printf ("Age: %d ans\n" , 2025 - a->annee); 
    printf("Poids: %.2f kg\n" , a->poids);

    if (a->commentaire[0] != '\0') { 
        printf("Coommentaire: %s\n", a->commentaire);
    } else { 
        printf("Commentaire: Aucun \n" );
    }
}
void afficher_animaux(Animal animaux[], int nb_animaux) {
   if (nb_animaux == 0 ) {
       printf ("\n Auncun animal dans le refuge. \n");
return;
   }
printf ("==== Animaux du refuge ====\n ");
for( int i = 0; i< nb_animaux; i++) {
 if (animaux[i].identifient != -1) {
      afficher_animal(&animaux[i], animaux[i].espece);
 }
}
}
