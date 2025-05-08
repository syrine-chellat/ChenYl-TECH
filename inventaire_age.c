
void INV_AGE_ASC(Animal* animaux, int nombre_animaux){

  int tranches_age[4]={0};


  for (int i=0; i<nombre_animaux; i++){
    int age = 2025 - animaux[i].annee;

    if (age>=0 && age<=2){
      tranches_age[0]++;
    }
      
    else if (age<=5){
      tranches_age[1]++;
    }
      
    else if (age<=10){
      tranches_age[2]++;
    }
    else{
      tranches_age[3]++;
    }
  }

  printf("Il y a %d dans la tranche d'âge de 0 à 2 ans.\n",tranches_age[0]);
  printf("Il y a %d dans la tranche d'âge de 3 à 5 ans.\n",tranches_age[1]);
  printf("Il y a %d dans la tranche d'âge de 6 à 10 ans.\n",tranches_age[2]);
  printf("Il y a %d dans la tranche d'âge de plus de 11 ans.\n",tranches_age[3]);
  
  printf("Il y a au total %d animaux.\n",nombre_animaux);

}

void NV_NB_DESC(Animal* animal){
    int nb = compter_animaux(animal, MAX_animaux);
    printf("Nombre total d'animaux dans le refuge : %d \n", &nb);
  int tab[6];
}
