#include <stdio.h>
#include <stdlib.h>

int main() {
    long n, m;
    scanf("%ld %ld", &n, &m);

    long *arr = (long *)calloc(n + 2, sizeof(long)); // extra space for boundaries

    for (long i = 0; i < m; i++) {
        long a, b, k;
        scanf("%ld %ld %ld", &a, &b, &k);
        arr[a] += k;
        arr[b + 1] -= k;
    }

    long max = 0, sum = 0;
    for (long i = 1; i <= n; i++) {
        sum += arr[i];
        if (sum > max)
            max = sum;
    }

    printf("%ld\n", max);

    free(arr);
    return 0;
}
