#include <fichier.h>

void adopter_animal(Animal* animaux[], int* nombre_animaux) {
  int identifiant;
  int trouvé_id=0;
  printf("Entrez le numéro d'identifiant de l'animal à adopter :");
  scanf("%d",&identifiant);

  
  for (int i=0; i<*nombre_animaux;i++){
    
    if(animaux[i]->identifiant==identifiant){
      printf("Animal trouvé : %s(%d) -- en cours de supression\n", animaux[i]->nom, animaux[i]->identifiant);
    }
    
    for(int j=i; j<*nombre_animaux-1; j++){
      animaux[j]=aniamux[j+1];
    }
    
    animaux[nombre_animaux-1]->identifiant=0;
    animaux[nombre_animaux-1]->nom[0]="\0";
    animaux[nombre_animaux-1]->espece="\0";
    animaux[nombre_animaux-1]->annee="\0";
    animaux[nombre_animaux-1]->poids="\0";
    animaux[nombre_animaux-1]->commentaire[0]="vide";
    (*nombre_animaux)--;
    
    printf("L'animal a été adopté. Prenez bien soin de lui.\n");
    trouvé_id=1;
    break;
  }
  
  if(trouvé_id!=1){
    printf("Aucun animal avec cette identifiant %d n'a été trouvé. \n), identifiant);
  }
  
}




