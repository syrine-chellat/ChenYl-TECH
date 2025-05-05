#include <fichier.h>


void vide_buffer(){
  while(getchar()!='\n'){
  }
}


void constructeur_animal(Animal* a, int* esp, int n){
    strncpy(a->commentaire, "vide", MAX_com);
    a->commentaire[MAX_com - 1] = '\0';
    
  int verif;
  printf("Nom animal : ");
  scanf("%s", a->nom);

  do{
    printf("Saisir le numéro de l'espèce : \n 0-Chien \n 1-Chat \n 2-Hamster \n 3-Autruche \n");
    verif = scanf("%d", esp);
    vide_buffer();
  } while(*esp<0 || *esp>3 || verif!=1);
  a->espece = (Espece)*esp;

  do{
    printf("année de naissance : ");
    verif = scanf("%d", &a->annee);
    vide_buffer();
  } while(a->annee<1900 || a->annee>2025 || verif!=1);
  
 
  do{  
    printf("Poids : ");
    verif = scanf("%f", &a->poids);
    vide_buffer();
  } while(a->poids<0 || a->poids>400 || verif!=1);

  int com;
  do{
    printf("Voulez-vous saisir un commentaire ? Si oui, taper 1, sinon taper 0 \n");
    verif = scanf("%d", &com);
    vide_buffer();
} while(com!=1 && com!=0 || verif!=1);


  if(com){
    printf("Commentaire : ");
    if (fgets(a->commentaire, MAX_com, stdin) == NULL) {
        printf("erreur lecture commentaire");
        exit(2);
    }
    else{
        size_t len = strlen(a->commentaire);
        if (len > 0 && a->commentaire[len - 1] == '\n') {
            a->commentaire[len - 1] = '\0';
        }
    }
  }
  else{
    strncpy(a->commentaire, "vide", MAX_com);
    a->commentaire[MAX_com - 1] = '\0';
  }

  a->identifiant = n;
}



FILE* creer_fichier_animal(Animal* a, int esp, int n){
  char nom[50];
  snprintf(nom, sizeof(nom), "animal_%d.txt", n);

  FILE* fic = NULL;
  fic = fopen(nom, "w");
  if(fic==NULL){
    printf("Echec d'ouverture du fichier.");
    exit(1);
  }
  else{
    fprintf(fic,"%d \n %s \n %s \n %d \n %f \n %s",a->identifiant, a->nom, nomsEspeces[esp], a->annee, a->poids, a->commentaire);
    printf("Le fichier animal a bien été rempli!");
    }
    return fic;
}
