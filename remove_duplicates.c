#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    int unique[n];
    int taille_unique = 0;

    for (i = 0; i < n; i++) {
        int est_unique = 1;
        for (j = 0; j < taille_unique; j++) {
            if (tableau[i] == unique[j]) {
                est_unique = 0;
                break;
            }
        }
        if (est_unique) {
            unique[taille_unique] = tableau[i];
            taille_unique++;
        }
    }

    printf("Après suppression des doublons : ");
    for (i = 0; i < taille_unique; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}

