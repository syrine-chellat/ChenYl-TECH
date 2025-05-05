#include <fichier.h>
#define NB_ANIMAUX_MAX

void rechercher_animal(Animal* animaux, int nombre_animaux){
  char nom[50]= "";
  int espece=-1;
  int age=-1;
  int choix;

// RECHERCHER AVEC LE NOM
  do{
    printf("Voulez vous chercher par nom ? \n1=oui \n2=non \n");
    scanf("%d",&choix);
    if(choix!=1&&choix!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
    }
  }while(choix!=1&&choix!=2);
  if(choix==1){
    printf("Entrez le nom :\n");
    scanf("%s",nom[50]);
  }

// RECHERCHER AVEC L'ESPECE
  do{
    printf("Voulez vous chercher par espèce ? \n1=oui \n2=non \n");
    scanf("%d",&choix);
     if(choix!=1&&choix!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
     }
  }while(choix!=1&&choix!=2);
  if(choix==1){
    do{
      printf("Choisissez l'espèce : \n1-Chien \n2-Chat \n3-Hamster \n4-Autruche \n5-Lapin \n6-Lama \n");
      scanf("%d",&espece);
       if(choix!=1&&choix!=2){
        printf("Veuillez entrer 1, 2, 3, 4, 5 ou 6 uniquement.\n");
       }
    }while(choix!=1&&choix!=2&&choix!=3&&choix!=4&&choix!=5&&choix!=6);
  }

// RECHERCHER AVEC LA TRANCHE D'AGE
  do{
    printf("Voulez vous cherchez par sa tranche d'âge ? \n1=oui \n2=non ) :\n");
    scanf("%d",&choix);
    if(choix!=1&&choix!=2){
      printf("Veuillez entrer 1 ou 2 uniquement.\n");
     }
  }while(choix!=1&&choix!=2);
  if(choix==1){
    do{
      printf("Choisissez la tranche d'âge : \n1-jeune(<2ans) \n2-senior(>10ans) :\n");
      scanf ("%d", &age);
    }while(age==1&&choix==2);
  }

  printf("\n------------RESULTAT(S)----------------\n");

  int anim_trouvés=0;

  for (int i=0; i<nombre_animaux; i++){
    int correspondance=1;

    if(strcmp(animaux->nom, nom) !=0){
      correspondance=0;
    }

    if (animaux->espece != espece){
      correspondance=0;
    }

    int age_anim=2025 - animaux->annee;
    if(age==1 && age_anim>=2){
      correspondance=0;
    }
    if(age == 2 && age_anim<=10){
      correspondance=0;
    }

    if(correspondance==1){
      anim_trouvés++;
      printf("Identifiant : %d \n Nom : %s \n Espèce : %d \n Année : %d \n Poids : %2f kg \n Commentaires : %s\n", animaux->identifiant, animaux->nom, animaux->espece,animaux->annee, animaux->poids, animaux->commentaire);
    }
  
  printf( "Nombre d'animaux trouvés : %d \n",anim_trouvés);

  if (anim_trouvés==0){
    printf("Aucun animal n'a été trouvé.\n");
  }
}

do{
printf("Voulez vous revenir à l'acceuil ? \n1-Oui \n2- Non\n");
scanf("%d",&b);
}while(b==1 && b==2);
if (b==1){
  // revenir à l'acceuil
}
if(b==2){
  // terminer ou rechrcher 
}
}





