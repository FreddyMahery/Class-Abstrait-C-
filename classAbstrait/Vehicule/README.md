### Hiérarchie de Classes en C++

#### Introduction
Ce projet en C++ illustre la création et l'utilisation d'une hiérarchie de classes pour modéliser différents types de véhicules. Il met en avant les concepts d'héritage, de polymorphisme, et d'abstraction, en définissant une classe de base abstraite `Vehicule` et deux classes dérivées `Auto` et `Moto`.

#### Classe de Base : `Vehicule`
- **Définition** : La classe `Vehicule` sert de classe de base abstraite pour différents types de véhicules.
- **Attributs** : 
  - `marque` : Une chaîne de caractères protégée représentant la marque du véhicule.
- **Méthodes** :
  - **Constructeur et Destructeur** : Définissent des comportements par défaut à la création et à la destruction des objets.
  - `setMarque` et `getMarque` : Méthodes pour définir et obtenir la marque du véhicule.
  - `afficheMarque` : Affiche la marque du véhicule.
  - `conduire` : Méthode virtuelle pure à implémenter par les classes dérivées pour définir le comportement de conduite spécifique à chaque type de véhicule.

#### Classe Dérivée : `Auto`
- **Définition** : La classe `Auto` hérite de `Vehicule` et représente une automobile.
- **Attributs** :
  - `type` : Une chaîne de caractères privée représentant le type d'automobile.
- **Méthodes** :
  - **Constructeur et Destructeur** : Initialisent et nettoient les objets `Auto`.
  - `setType` et `getType` : Méthodes pour définir et obtenir le type de l'automobile.
  - `afficheAuto` : Affiche les informations spécifiques à l'automobile, y compris la marque et le type.
  - `conduire` : Implémente la méthode virtuelle pure de la classe de base pour définir le comportement de conduite d'une automobile.

#### Classe Dérivée : `Moto`
- **Définition** : La classe `Moto` hérite de `Vehicule` et représente une moto.
- **Attributs** :
  - `mecanisme` : Une chaîne de caractères privée représentant le mécanisme de la moto.
- **Méthodes** :
  - **Constructeur et Destructeur** : Initialisent et nettoient les objets `Moto`.
  - `setMecanisme` et `getMecanisme` : Méthodes pour définir et obtenir le mécanisme de la moto.
  - `afficheMoto` : Affiche les informations spécifiques à la moto, y compris la marque et le mécanisme.
  - `conduire` : Implémente la méthode virtuelle pure de la classe de base pour définir le comportement de conduite d'une moto.

#### Fonction `main`
- **Objectif** : La fonction `main` démontre l'utilisation des classes `Auto` et `Moto`.
- **Processus** :
  - Crée une instance de `Auto`, définit sa marque et son type, affiche ces informations et appelle la méthode `conduire`.
  - Crée une instance de `Moto`, définit sa marque et son mécanisme, affiche ces informations et appelle la méthode `conduire`.
## **compilation: ouvrier cette dossier dans un termiminal et executer:**
```bash
    g++ *.cpp -o main ;./main
```

#### Relations et Buts
- **Relations** : Les classes `Auto` et `Moto` héritent de la classe de base `Vehicule`, partageant ainsi des attributs et des méthodes communs tout en implémentant leurs propres comportements spécifiques via la méthode virtuelle pure `conduire`.
- **Buts** : Le projet vise à démontrer :
  - **L'héritage** : Comment des classes dérivées peuvent étendre une classe de base.
  - **Le polymorphisme** : Comment les méthodes virtuelles permettent aux classes dérivées d'avoir des implémentations spécifiques tout en partageant une interface commune.
  - **L'abstraction** : Comment une classe de base abstraite peut définir un cadre pour les classes dérivées sans implémenter tous les détails.

En conclusion, ce projet fournit une structure flexible pour ajouter de nouveaux types de véhicules en créant de nouvelles classes dérivées de `Vehicule`, facilitant ainsi l'extension et la maintenance du code.