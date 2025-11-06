#include <stdio.h>

int main() {
    int n, d;
    scanf("%d %d", &n, &d);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    d = d % n; 

    for (int i = 0; i < n; i++) {
        int newIndex = (i + d) % n;
        printf("%d ", arr[newIndex]);
    }

    return 0;
}
