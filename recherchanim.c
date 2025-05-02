#include <fichier.h>

void rechercher_animal(){
char nom[50]== "";
int espece=-1;
int age=-1;
int choix=0;

// RECHERCHER AVEC LE NOM
do{
  printf("Voulez vous chercher par nom ? 1=espece 2=non ) :\n");
  scanf("%d",&choix);
}while(choix==1||choix==2);
if(choix==1){
  printf("Entrez le nom :\n");
  scanf("%s",&nom);
}

// RECHERCHER AVEC L'ESPECE
do{
  printf("Voulez vous chercher par espèce ? \n1=espèce \n2=non :\n);
  scanf("%d",&choix);
}while(choix==1||choix==2);
if(choix==1){
  do{
  printf("Choisissez l'espèce : \n1-Chien \n2-Chat \n3-Hamster \n4-Autruche \n5-Lapin \n6-Lama \n");
  scanf("%d",&espece);
  }while(choix==1||choix==2||choix==3||choix==4||choix==5||choix==6);
}

// RECHERCHER AVEC LA TRANCHE D'AGE
do{
  printf("Voulez vous cherchez par sa tranche d'âge ? \n1=oui \n2=non ) :\n");
  scanf("%d",&choix);
}while(choix==1||choix==2);
if(choix==1){
  do{
  printf("Choisissez la tranche d'âge : \n1-jeune(<2ans) \n2-senior(>10ans) :\n");
  scanf ("%d", &age);
  }while(age==1||choix==2);
}

printf("\n------------RESULTAT(S)----------------\n");

int anim_trouvés=0;

for (int=0; i<animaux, i++){
  int correpondance==1;

  if(strlen(nom)>0 && strcmp(animaux[i]->nom, nom) !=0){
    correspondance==0;
  }

  if (espece!=-1 && animaux[i]->espece != espece){
    correspondance==0;
  }

  int age_anim=2025 - animaux[i]->annee;
  if(age == 1 && animaux_age>=2){
    correspondance==0;
  }
  if(age == 2 && animaux_age<=10){
    correspondance==0;
  }

  if(correpondance==1){
    anim_trouvés++;
    printf("Identifiant : %d \n Nom : %s \n Espèce : %s \n Année : %d \n Poids : %2f kg \n Commentaires : %s\n", animaux->identifiant, animaux->nom, animaux->espece, animaux->poids, animaux->commentaire);
  }
}
printf( "Nombre d'animaux trouvés : %d \n",anim_trouvés);
}

if (anim_trouvés==0){
  printf("Aucun animal n'a été trouvé.\n");
}
// revenir à l'acceuil ??



