#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n, i, j, temp; // Déclaration des variables : 
                       // n = taille du tableau, i et j = indices de boucle, temp = variable temporaire pour l'échange

    scanf("%d", &n); // Lecture de la taille du tableau

    int tableau[n]; // Déclaration d'un tableau de taille n

    // Lecture des éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]); // Stockage de chaque valeur dans le tableau
    }

    // Tri du tableau avec l'algorithme du tri à bulles (bubble sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            // Si deux éléments consécutifs ne sont pas dans l'ordre croissant, on les échange
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];               // Sauvegarde temporaire
                tableau[j] = tableau[j + 1];     // Échange
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]); // Affiche chaque élément suivi d'un espace
    }

    printf("\n"); // Retour à la ligne à la fin de l'affichage

    return 0; // Fin du programme
}
