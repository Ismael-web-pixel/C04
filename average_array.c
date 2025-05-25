#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;
    float moyenne;

    // Lire la taille du tableau
    scanf("%d", &n);

    int tableau[n];

    // Lire les entiers dans le tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
        somme += tableau[i]; // Agrégation dans la boucle
    }

    // Calcul de la moyenne
    moyenne = (float)somme / n;

    // Affichage de la moyenne
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
