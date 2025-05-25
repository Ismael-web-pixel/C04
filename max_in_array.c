#include <stdio.h>

int main() {
    int n, i;
    int max;


    scanf("%d", &n);

    int tableau[n];

    // Lecture des éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation du max au premier élément
    max = tableau[0];

    // Recherche du plus grand élément
    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le plus grand élément est : %d\n", max);

    return 0;
}
