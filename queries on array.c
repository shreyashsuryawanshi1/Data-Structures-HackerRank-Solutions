#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int k = 0; k < q; k++) {
        int type, i, j;
        scanf("%d %d %d", &type, &i, &j);
        i--; // convert to 0-based index
        j--;

        int len = j - i + 1;
        int *temp = (int*)malloc(len * sizeof(int));

        memcpy(temp, a + i, len * sizeof(int));

        if (type == 1) {
            memmove(a + len, a, i * sizeof(int));
            memcpy(a, temp, len * sizeof(int));
        } else {
            memmove(a + i, a + j + 1, (n - j - 1) * sizeof(int));
            memcpy(a + n - len, temp, len * sizeof(int));
        }

        free(temp);
    }

    printf("%d\n", abs(a[0] - a[n - 1]));
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
