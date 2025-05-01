#include <fichier.h>

void rechercher_animal(){
char nom[50]== NULL;




printf("Voulez vous chercher par nom ? 1=espece 2=non ) :");
scanf("%d",&choix);
if(choix==1){
  printf("Entrez le nom :");
  scanf("%s",&nom);
}

printf("Voulez vous chercher par espèce ? 1=espèce 2=non :);
  scanf("%d",&choix);
if(choix==1){
  printf("Choisissez l'espèce : 1-Chien 2-Chat 3-Hamster 4-Autruche 5-Lapin ");
  scanf("%d",&espece);
}

printf("Voulez vous cherchez par sa tranche d'âge ? 1=oui 2=non ) :");
scanf("%d",&choix);
if(choix==1){
  printf("Choisissez la tranche d'âge : 1-jeune(<2ans) 2-senior(>10ans) :");
  scanf ("%d", &age);
}

printf("\n------------RESULTAT(S)----------------\n");

int anim_trouvés=0;

for (int=0; i<animaux[i], i++){
  int correpondance==1;

  if(strcmp(animaux[i]->nom, nom) !=0){
    correspondance==0;
}

  if ((animaux[i]->espece, espece
  if
  }

  if(correpondance==1){
  }
  if (anim_trouvés==0){
  printf("Aucun animal trouvés");
  }
}
// revenir à l'acceuil ??



