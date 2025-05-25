#include <stdio.h>

int main() {
    int n, i, j, temp;


    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {

                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }


    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
 
    printf("\n");

    return 0;
}
