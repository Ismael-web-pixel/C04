#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int n, i;              // Déclaration des variables pour la taille du tableau et l'index de boucle
    int somme = 0;         // Initialisation de la variable qui contiendra la somme des éléments
    float moyenne;         // Déclaration de la variable pour stocker la moyenne

    // Lire la taille du tableau (nombre d'éléments que l'utilisateur veut entrer)
    scanf("%d", &n);

    int tableau[n];        // Déclaration d'un tableau de taille n (taille variable)

    // Lire les entiers dans le tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);   // Lecture d'un entier et stockage dans le tableau
        somme += tableau[i];       // Ajout de la valeur lue à la somme totale
    }

    // Calcul de la moyenne (conversion en float pour éviter la division entière)
    moyenne = (float)somme / n;

    // Affichage de la moyenne avec une décimale
    printf("La moyenne est : %.1f\n", moyenne);

    return 0; // Fin du programme
}
