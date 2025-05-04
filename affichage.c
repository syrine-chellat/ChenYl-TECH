#include <fichier.h>

void afficher_animal(Animal a ) {
  printf ("\n-- Fiche Animal --\n");
  printf ("ID: %d\n" , a.id);
  printf ("Nom: %s\n" , a.nom);
  printf ("Espéce: %s\n" , a.espece);
  printf ("Age: %d ans\n" , 2025 - a.annee_naissance); 

printf("Poids: %.2 kg\n" , a.poids);

if (a.commentaire[0] != \0) { 
  printf("Coommentaire: %s\n", a.commentaire);
} else { 
    printf("Commentaire: Aucun \n" );
}


void afficher_animal(Animal* a, int esp) {
    printf ("\n-- Fiche Animal --\n");
    printf ("ID: %d\n" , a->identifiant);
    printf ("Nom: %s\n" , a->nom);
    printf ("Espèce: %s\n" , nomsEspeces[esp]);
    printf ("Age: %d ans\n" , 2025 - a->annee); 

    printf("Poids: %.2f kg\n" , a->poids);

    if (a->commentaire[0] != '\0') { 
        printf("Coommentaire: %s\n", a->commentaire);
    } else { 
        printf("Commentaire: Aucun \n" );
    }
}
