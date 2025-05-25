#include <stdio.h>
#include <limits.h> // Pour utiliser INT_MIN (plus petite valeur entière possible)

int main() {
    int n, i;
    int max = INT_MIN;     // Initialisation du maximum à la plus petite valeur possible
    int second = INT_MIN;  // Même chose pour le second plus grand

    scanf("%d", &n); // Lecture de la taille du tableau

    // Si le tableau contient moins de 2 éléments, on ne peut pas trouver de deuxième maximum
    if (n < 2) {
        return 1; // On quitte le programme (retour non nul pour indiquer une erreur)
    }

    int tableau[n]; // Déclaration du tableau de taille n

    // Lecture des éléments et mise à jour des deux plus grands
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]); // Lecture d'un élément du tableau

        // Si l'élément actuel est plus grand que le max actuel
        if (tableau[i] > max) {
            second = max;         // L'ancien max devient le second plus grand
            max = tableau[i];     // Le nouveau max est mis à jour
        }
        // Sinon, s'il est plus grand que le second mais différent du max
        else if (tableau[i] > second && tableau[i] != max) {
            second = tableau[i];  // Mise à jour du second plus grand
        }
    }

    // Si second est resté à INT_MIN, cela signifie qu'il n'y a pas de deuxième plus grand
    if (second == INT_MIN) {
        // Rien n'est affiché ici, mais on pourrait afficher un message d'erreur si besoin
    } else {
        // Affichage du deuxième plus grand élément
        printf("Le deuxième plus grand nombre est : %d\n", second);
    }

    return 0; // Fin du programme
}
