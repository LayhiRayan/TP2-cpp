# 🧪 TP 2 – Initiation à la Programmation Orientée Objet en C++

## 📌 Objectif
Ce TP vise à manipuler les concepts de base de la programmation orientée objet avec le langage **C++**, en utilisant des **structures** pour représenter des entités comme un étudiant ou un point géométrique.

---

## 📘 Exercice 1 – Structure `Etudiant`

### 🎯 Objectif :
Créer une structure `Etudiant` avec des attributs et des fonctions associées.

### 📐 Attributs de la structure :
- `nom` : `string`
- `prenom` : `string`
- `CNE` : `int`
- `notes[5]` : tableau de 5 `float`

### 🛠️ Fonctions membres :
- `creer()` : Crée un étudiant et initialise ses informations
- `getMaxNote()` : Retourne la **plus grande note**
- `getMinNote()` : Retourne la **plus petite note**
- `getMoyenneNote()` : Retourne la **moyenne** des notes
- `getQuota()` : Retourne le **pourcentage de notes >= 10**
- `affiche()` : Affiche les informations de l’étudiant (nom, prénom, CNE, notes, max, min, moyenne)

### 🧪 Tests à faire dans `main()` :
- Créer un étudiant et tester chaque méthode
- Créer un **tableau d'étudiants**
- Remplir ce tableau via la fonction `creer()` et l'afficher avec `affiche()`

---

## 📘 Exercice 2 – Structure `Point`

### 🎯 Objectif :
Créer une structure `Point` pour manipuler un point dans le plan 2D.

### 📐 Fonctions membres :
- `saisie(float a, float b)` : Initialise les coordonnées du point
- `deplacer(float a, float b)` : Effectue une translation
- `abscisse()` : Retourne l’abscisse du point
- `ordonnee()` : Retourne l’ordonnée du point
- `comparer(Point p)` : Vérifie si deux points sont identiques
- `calcule(Point p)` : Calcule la **distance** entre deux points

### 🧪 Programme de test :
- Créer trois points `p1`, `p2`, `p3`
- Afficher leurs coordonnées
- Calculer la distance de `p1` à l'origine
- Calculer la distance entre `p1` et `p2`
- Déplacer `p2` par `(20, 13)`
- Vérifier si deux points sont identiques
- Trouver les **deux points les plus proches**

---

## 🧠 Remarque
Ce TP constitue une excellente initiation à la structuration des données et à la POO avec C++. Il est recommandé d’améliorer progressivement les structures en les transformant plus tard en **classes** avec encapsulation.

