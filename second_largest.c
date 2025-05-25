#include <stdio.h>
#include <limits.h> // Pour INT_MIN

int main() {
    int n, i;
    int max = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    if (n < 2) {
        return 1;
    }

    int tableau[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);

        // Mise à jour des max
        if (tableau[i] > max) {
            second = max;
            max = tableau[i];
        } else if (tableau[i] > second && tableau[i] != max) {
            second = tableau[i];
        }
    }

    if (second == INT_MIN) {
    } else {
        printf("Le deuxième plus grand nombre est : %d\n", second);
    }

    return 0;
}
