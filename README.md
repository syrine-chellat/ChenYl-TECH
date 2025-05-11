# Mon Projet

ChenYl-TECH
Gestion d'un refuge animalier en langage C ( Préing1 2024-2025 ) 

Ce projet gère les adorables pensionnaire du chenil ChenYl-Tech, s’occupe de différents types d’animaux et les propose à l’adoption.
Il permet de gérer le chenil de manière efficace en stockant les informations dans des fichiers.
Ce programme offre une interface textuelle permettant d’ajouter, rechercher, modifier et supprimer des fiches animales ainsi que de gérer d’autres aspects du chenil.

## 📁 Structure du projet

- `main.c` : Point d'entrée du programme (où le programme commence)
- `affichage.c` : Code pour afficher les animaux
- `menu.c` : Code pour afficher le menu
- `ajout.c` : Code pour que l'utilisateur confie un animal
- `adoption.c` : Code pour adopter un animal
- `recherche.c` : Code pour rechercher un animal
- `inventaire.c` : Code pour compter les animaux
- `quotidien.c` : Code pour gérer les tâches du quotidiens
- `couleur.h` : Déclarations des fonctions pour affichage en couleurs
- `fichier.h` : Déclarations des fonctions et structures
- `animaux/` : Dossier contenant les fichiers `.txt` utilisés pour stocker les données des animaux

## ▶️ Compilation 

```bash
make
```


## Execution
```bash
./monprogramme
```


## Nettoyage
```bash
make clean
```

## Fonctionnalités

Fonctionnalités principales : 
- rechercher un animal avec comme paramètre(s) : le nom et/ou l'espèce et/ou le type d'âge 
- ajouter un animal avec une génération automatique de son identifiant
- adopter un animal en saisissant son identifiant

Fonctionnalités secondaires ( variantes ) : 
- inventaire du refuge :
  affichage du nombre total d'animaux et du nombre d'animaux par espèce
  affichage  des animaux du refuge par tranche d'âge quartile 
- gestion du quotidien :
  affichage de la quantité de croquettes nécessaires pour tout les animaux du refuge
  affichage de la charge de travail hebdomadaire pour nettoyer les abris du refuge
  

## Auteurs
- Syrine Chellat
  
- Nisrine Lakhmiri
  
- Sankavi Kumanan


