#include <fichier.h>
#include <adopt.h>
int main (){
Animal* tableau=malloc(NB_ANIMAUX_MAX * sizeof(Animal));
  if(tableau==NULL){
        printf("Erreur d'allocation mémoire.\n");
        return 1;
  }
  rechercher_animal( tableau, NB_ANIMAUX_MAX);
  free(tableau);
return 0;
}
