#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n, i, j; // n = taille du tableau, i et j = indices pour les boucles imbriquées
    
    scanf("%d", &n); // Lecture du nombre d'éléments à entrer

    int tableau[n]; // Déclaration du tableau principal de taille n

    // Lecture des éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    int unique[n];        // Tableau pour stocker les éléments sans doublons
    int taille_unique = 0; // Compteur pour savoir combien d’éléments uniques on a trouvés

    // Parcours du tableau initial
    for (i = 0; i < n; i++) {
        int est_unique = 1; // Variable pour vérifier si tableau[i] est déjà présent dans le tableau 'unique'

        // Vérifie si l'élément actuel est déjà dans 'unique'
        for (j = 0; j < taille_unique; j++) {
            if (tableau[i] == unique[j]) {
                est_unique = 0; // Ce n'est pas un élément unique (déjà rencontré)
                break;          // On peut sortir de la boucle, inutile de continuer
            }
        }

        // Si l'élément est unique, on l'ajoute au tableau 'unique'
        if (est_unique) {
            unique[taille_unique] = tableau[i];
            taille_unique++; // On incrémente la taille des éléments uniques
        }
    }

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for (i = 0; i < taille_unique; i++) {
        printf("%d ", unique[i]); // Affiche chaque élément unique
    }
    printf("\n"); // Retour à la ligne après l'affichage

    return 0; // Fin du programme
}
