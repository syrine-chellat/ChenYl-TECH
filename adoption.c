#include "fichier.h"

void adopter_animal(Animal* animaux, int* nombre_animaux) {
  int identifiant;
  int trouve_id=0;
  printf("Entrez le numéro d'identifiant de l'animal à adopter :");
  scanf("%d",&identifiant);

  
  for (int i=0; i<*nombre_animaux;i++){      // boucle qui permet de comparer l'identifiant saisi à l'identifiant de chaque animal présent dans le refuge
    
    if(animaux[i].identifiant==identifiant){
        trouve_id = 1;
        printf("Animal trouvé : %s (%d) -- en cours de supression\n", animaux[i].nom, animaux[i].identifiant);
        (*nombre_animaux)--;
        printf("L'animal a été adopté. Prenez bien soin de lui.\n");
        animaux[i].identifiant = 0;
        strncpy(animaux[i].nom, "vide", MAX_nom);
        animaux[i].nom[MAX_nom - 1] = '\0';
        animaux[i].annee = 0;
        animaux[i].poids = 0;
    }
}

    if(trouve_id==0){
        printf("Aucun animal avec cette identifiant %d n'a été trouvé. \n", identifiant);
    }
  
}
