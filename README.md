# Implémentation d'une Liste Doublement Chaînée

## Introduction
Ce projet présente une implémentation en langage C d'une **Liste Doublement Chaînée** (Doubly Linked List). C'est une structure de données où chaque nœud possède une référence vers le nœud suivant et le nœud précédent.

## Structure d'un Nœud
Chaque élément $N$ de la liste est défini par :
$$N = \{ data, pointer_{prev}, pointer_{next} \}$$

## Analyse de la Complexité
Voici l'analyse algorithmique demandée (Big O Notation) :

| Opération | Complexité | Explication |
| :--- | :---: | :--- |
| **Insertion (Début)** | $O(1)$ | Immédiat, pas de parcours nécessaire. |
| **Insertion (Fin)** | $O(n)$ | Il faut parcourir toute la liste pour trouver la fin (sauf si on garde un pointeur `tail`). |
| **Recherche** | $O(n)$ | Dans le pire des cas, l'élément est à la fin. |
| **Suppression** | $O(1)$ | Si on a déjà l'adresse du nœud à supprimer. |

## Comment exécuter le code
1. Compiler : `gcc main.c -o programme`
2. Lancer : `./programme`
