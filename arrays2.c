#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char strings[n][1001];  
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    int q;
    scanf("%d", &q);
    
    char query[1001];
    for (int i = 0; i < q; i++) {
        scanf("%s", query);
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (strcmp(query, strings[j]) == 0) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
