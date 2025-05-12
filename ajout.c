#include "fichier.h"

void vide_buffer(){
  while(getchar()!='\n'){
  }
}

void constructeur_animal(Animal* a, int* esp, int n){
    strncpy(a->commentaire, "vide", MAX_com);
    a->commentaire[MAX_com - 1] = '\0';   //met '\0' à la fin si la chaîne est trop longue
    
    int verif;
    printf("Nom animal : ");
    scanf("%s", a->nom);

    do{
      printf("Saisir le numéro de l'espèce : \n 0-Chien \n 1-Chat \n 2-Hamster \n 3-Autruche \n 4-Lapin \n 5-Lama \n");
      verif = scanf("%d", esp);
      vide_buffer();
    } while(*esp<0 || *esp>5 || verif!=1);
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
   
    } while((com!=1 && com!=0)||(verif!=1));


    if(com){
      printf("Commentaire : ");
      if (fgets(a->commentaire, MAX_com, stdin) == NULL) {
        printf("erreur lecture commentaire");
        exit(2);
      }
      else{
        int len = strlen(a->commentaire);
          if (len > 0 && a->commentaire[len - 1] == '\n') {   //vérifier s’il y a un \n à la fin de la chaîne
            a->commentaire[len - 1] = '\0';    //le remplacer par \0
          }
      }
    }
    
    else{
      strncpy(a->commentaire, "vide", MAX_com);
      a->commentaire[MAX_com - 1] = '\0'; //mettre le commentaire à "vide" si l'utilisateur ne veut pas en mettre
    }

    a->identifiant = n; 
}


void lire_animaux(Animal* a, int n) {
    int tmp;
    char nom[50];
    snprintf(nom, sizeof(nom), "animal_%d.txt", n); 

    FILE* fic =NULL;
    fic = fopen(nom, "r");
    if (fic == NULL) {
        printf("Erreur lors de l'ouverture du fichier");
        printf("code d'erreur = %d \n", errno );
        printf("Message d'erreur = %s \n", strerror(errno) );
        exit(4);
    }

    //récupérer les informations des animaux à partir du fichier
    fscanf(fic, "%d", &a->identifiant);
    fscanf(fic, "%49s", a->nom);
    fscanf(fic, "%d", &tmp);
     a->espece = (Espece)tmp;
    fscanf(fic, "%d", &a->annee);
    fscanf(fic, "%f", &a->poids);
    fgets(a->commentaire, MAX_com, fic);
    a->commentaire[strcspn(a->commentaire, "\n")] = 0; //remplace /n par /0 à la fin 
  
    fclose(fic);
}

FILE* creer_fichier_animal(Animal* a, int n){
  char nom[50];
  snprintf(nom, sizeof(nom), "animal_%d.txt", n);

  FILE* fic = NULL;
  fic = fopen(nom, "w");
  if(fic==NULL){
    printf("Echec d'ouverture du fichier.");
    printf("code d'erreur = %d \n", errno );
    printf("Message d'erreur = %s \n", strerror(errno) );
    exit(5);
  }
  else{   //écrire les informations dans le fichier
    fprintf(fic,"%d \n %s \n %d \n %d \n %f \n %s",a->identifiant, a->nom, a->espece, a->annee, a->poids, a->commentaire);
    printf("Le fichier animal a bien été rempli!");
    }
    return fic;
}
