# Jeux Boxe et Foot 

## Jeux de Boxe en console

### Objectif 

Le but de ce projet est de créer un jeu de boxe simple en console où deux joueurs s'affrontent en lançant des dés pour effectuer des coups. Chaque joueur commence avec 20 points, et l'objectif est de réduire les points de l'adversaire à zéro. Le projet utilise les concepts de programmation orientée objet en C++.

### Structure du Projet

Le projet est structuré en deux fichiers principaux :

1. **Jeux.hpp** : Contient la déclaration de la classe abstraite `Jeux`.
2. **JeuDeBoxe.hpp et JeuDeBoxe.cpp** : Contiennent la déclaration et l'implémentation de la classe `JeuDeBoxe`, qui hérite de `Jeux`.

### Classe Abstraite `Jeux`

La classe `Jeux` est une classe abstraite qui déclare cinq méthodes virtuelles pures :
- `demarrer()` : Méthode pour démarrer le jeu.
- `quitter()` : Méthode pour quitter le jeu.
- `pause()` : Méthode pour mettre le jeu en pause.
- `jouer()` : Méthode pour jouer au jeu.
- `redemarrer()` : Méthode pour redémarrer le jeu.

Ces méthodes doivent être implémentées par toute classe dérivée de `Jeux`.

### Classe `JeuDeBoxe`

La classe `JeuDeBoxe` hérite de la classe abstraite `Jeux` et implémente les méthodes déclarées dans `Jeux`. Voici une description détaillée des méthodes et des variables membres de la classe `JeuDeBoxe` :

### Variables Membres

- `pointsJoueurA` et `pointsJoueurB` : Représentent les points des joueurs A et B, respectivement. Chaque joueur commence avec 20 points.
- `jeuEnCours` : Booléen indiquant si le jeu est en cours.
- `enPause` : Booléen indiquant si le jeu est en pause.
- `joueurA` et `joueurB` : Chaînes de caractères représentant les noms des joueurs A et B.

### Constructeur

Le constructeur initialise les points des deux joueurs à 20, et définit `jeuEnCours` et `enPause` à `false`. Il initialise également les noms des joueurs par défaut à "Joueur A" et "Joueur B" et initialise le générateur de nombres aléatoires avec l'heure actuelle pour obtenir des valeurs différentes à chaque exécution.

### Méthodes

#### `demarrer()`

Cette méthode démarre le jeu en mettant à jour `jeuEnCours` à `true` et affiche le menu principal en appelant la méthode `afficherMenu()`.

#### `quitter()`

Cette méthode permet de quitter le jeu. Elle met à jour `jeuEnCours` à `false` et utilise `exit(0)` pour quitter l'application.

#### `pause()`

Cette méthode met le jeu en pause en mettant à jour `enPause` à `true` et affiche le menu principal en appelant la méthode `afficherMenu()`.

#### `jouer()`

Cette méthode exécute la boucle principale du jeu. Elle vérifie que le jeu a bien été démarré. Chaque joueur lance un dé pour décider qui commence. Ensuite, le jeu alterne les tours entre les deux joueurs. Chaque tour, un joueur lance un dé pour effectuer un coup. Les points de l'adversaire sont décrémentés en fonction du coup. Le jeu continue jusqu'à ce que les points d'un joueur atteignent zéro. À la fin, le gagnant est affiché et le jeu est remis en attente en mettant `jeuEnCours` à `false` et en affichant le menu principal.

#### `redemarrer()`

Cette méthode réinitialise les points des deux joueurs à 20 et met `jeuEnCours` à `true` et `enPause` à `false`. Elle affiche un message indiquant que le jeu a redémarré et appelle la méthode `jouer()` pour recommencer le jeu.

#### `lancerDe()`

Cette méthode génère un nombre aléatoire entre 0 et 5, simulant un lancer de dé.

#### `tour()`

Cette méthode gère un tour de jeu pour un joueur. Elle utilise `lancerDe()` pour obtenir un coup et décrémente les points de l'adversaire en fonction du coup. Elle affiche le coup effectué par l'attaquant.

#### `afficherMenu()`

Cette méthode affiche le menu principal du jeu, offrant les options de jouer, mettre en pause, redémarrer ou quitter. Elle lit l'entrée de l'utilisateur pour choisir l'option désirée et appelle les méthodes appropriées en fonction du choix.

#### `choisirJoueurs()`

Cette méthode permet aux utilisateurs de saisir les noms des joueurs. Elle demande à l'utilisateur d'entrer les noms des joueurs A et B.

#### Pour compiler la jeux Boxe tapéz le code sh suivante:
    - Mettre en commentaire d'abord la partie de code qui démotre la jeux de Foot dans le ficher main.cpp
```bash
    g++ JeuDeBoxe.cpp main.cpp -o main ;./main
```
---
## Jeu de Football en Console

Ce projet consiste à créer un jeu de football en console, où un joueur alterne entre les rôles de tireur et de gardien de but contre un adversaire contrôlé par l'ordinateur. Voici une description détaillée de chaque composant du projet et des méthodes utilisées.

### Classe `Foot`

La classe `Foot` hérite de la classe `Jeux` et implémente toutes les méthodes définies par la classe abstraite. Elle ajoute également des fonctionnalités spécifiques au jeu de football.

### Méthodes de la Classe `Foot`

1. **`demarrer`**
   - Affiche un message de démarrage lorsque le jeu commence.

2. **`quitter`**
   - Affiche un message de fin lorsque le joueur décide de quitter le jeu.

3. **`pause`**
   - Affiche un message indiquant que le jeu est en pause.

4. **`redemarrer`**
   - Affiche un message de redémarrage et réinitialise le jeu pour une nouvelle partie.

5. **`jouer`**
   - Contient la logique principale du jeu où le joueur alterne les rôles de tireur et de gardien de but.
   - Le joueur choisit une direction pour tirer ou arrêter le ballon (gauche, milieu ou droite).
   - L'ordinateur choisit également une direction de manière aléatoire.
   - Le résultat de chaque tour est déterminé en comparant les choix du joueur et de l'ordinateur.

### Méthodes Privées de la Classe `Foot`

1. **`lireChoix`**
   - Lit le choix du joueur (tireur ou gardien) pour une direction spécifique.
   - Les directions possibles sont gauche, milieu et droite.

2. **`choixOrdinateur`**
   - Génère aléatoirement une direction pour l'ordinateur (gauche, milieu ou droite).

3. **`resultat`**
   - Compare les choix du joueur et de l'ordinateur pour déterminer le résultat.
   - Si les choix sont identiques, cela signifie que le tir est arrêté (gardien) ou que le gardien a deviné la bonne direction (tireur).

### Pour compiler la jeux Foot tapéz le code sh suivante:
    - Mettre en commentaire d'abord la partie de code qui démotre la jeux de Boxe dans le ficher main.cpp
```bash
    g++ Foot.cpp main.cpp -o main ; ./main
```

