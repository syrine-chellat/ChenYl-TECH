#include "fichier.h"


void rechercher_animal(Animal* animaux, int nombre_animaux){
  char nom[50]= "";
  int espece=-1;
  int age=-1;
  int choix1, choix2, choix3;

// RECHERCHER AVEC LE NOM
  do{
    printf("Voulez vous chercher par nom ? \n1=oui \n2=non \n");
    scanf("%d",&choix1);
    if(choix1!=1 && choix1!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
    }
  }while(choix1!=1&&choix1!=2);
  
  if(choix1==1){
    printf("Entrez le nom :\n");
    scanf("%s",nom);
  }
// trouver solution pour saisi de chiffre à la place de lettre et inversement 

// RECHERCHER AVEC L'ESPECE
  do{
    printf("Voulez vous chercher par espèce ? \n1=oui \n2=non \n");
    scanf("%d",&choix2);
     if(choix2!=1&&choix2!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
     }
  }while(choix2!=1&&choix2!=2);
  
  if(choix2==1){
    do{
      printf("Choisissez l'espèce : \n0-Chien \n1-Chat \n2-Hamster \n3-Autruche \n4-Lapin \n5-Lama \n");
      scanf("%d",&espece);
       if(espece<0 || espece>5){
        printf("Veuillez entrer 0, 1, 2, 3, 4 ou 5 uniquement.\n");
       }
    }while(espece<0 || espece>5);
  }


// RECHERCHER AVEC LA TRANCHE D'AGE
  do{
    printf("Voulez vous cherchez par sa tranche d'âge ? \n1=oui \n2=non\n");
    scanf("%d",&choix3);
    if(choix3!=1&&choix3!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
     }
  }while(choix3!=1&&choix3!=2);
  
  if(choix3==1){
    do{
      printf("Choisissez la tranche d'âge : \n1-jeune(<2ans) \n2-senior(>10ans) :\n");
      scanf ("%d", &age);
      if(age!=1&&age!=2){
        printf("Veuillez entrer 1 ou 2 uniquement.\n");
     }
    }while(age!=1&&age!=2);
  }
  
  if(choix1 == 2 && choix2 == 2 && choix3==2){
    for(int i=0; i<MAX_animaux; i++){
	   	if(animaux[i].poids > 0){  
        afficher_animal(animaux+i, animaux[i].espece);
        }
    }
  }

  printf("\n------------RESULTAT(S)----------------\n");

  int anim_trouvés=0;

  for (int i=0; i<nombre_animaux; i++){
    int correspondance=1;
    
    if(animaux[i].annee==0){
        correspondance=0;
    }

    if(nom[0] != '\0' && strcmp(animaux[i].nom, nom) !=0){
      correspondance=0;
    }

    if (espece !=-1 && animaux[i].espece != espece){
      correspondance=0;
    }
    

    int age_anim=2025 - animaux[i].annee;
    if(age==1 && age_anim>=2){
      correspondance=0;
    }
    else if(age == 2 && age_anim<=10){
        correspondance=0;
    }


    if(correspondance){
      anim_trouvés++;
      printf(" Identifiant : %d \n Nom : %s \n Espèce : %s \n Année : %d \n Poids : %2f kg \n Commentaires : %s\n", animaux[i].identifiant, animaux[i].nom, nomsEspeces[animaux[i].espece], animaux[i].annee, animaux[i].poids, animaux[i].commentaire);
    }

  }
  printf( "Nombre d'animaux trouvés : %d \n",anim_trouvés);

  if (anim_trouvés==0){
    printf("Aucun animal n'a été trouvé.\n");
  }

}
