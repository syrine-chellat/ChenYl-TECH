#include <fichier.h>
#include <adopt.h>
int main (){

  
// RECHERCHER UN ANIMAL
Animal tableau[50];
rechercher_animal(tableau, 50);

// ADOPTER UN ANIMAL
int* nombre_animaux;
adopter_animal(tableau,nombre_animaux);


return 0;
}
