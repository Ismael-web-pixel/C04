#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n, i;     // n : taille du tableau, i : index pour les boucles
    int max;      // Variable pour stocker la valeur maximale trouvée

    scanf("%d", &n); // Lecture de la taille du tableau

    int tableau[n];  // Déclaration d'un tableau de taille variable (VLA)

    // Lecture des éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]); // Lecture de chaque entier et stockage dans le tableau
    }

    // Initialisation du max au premier élément du tableau
    max = tableau[0];

    // Recherche du plus grand élément dans le tableau
    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {  // Si un élément est plus grand que le max actuel
            max = tableau[i];    // On met à jour max
        }
    }

    // Affichage du résultat : la valeur maximale trouvée
    printf("Le maximum est : %d\n", max);

    return 0; // Fin du programme
}
