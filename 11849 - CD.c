#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b, n, m, i, j, counter;

    while(scanf("%d%d", &n, &m) == 2) {
        if(!n && !m) break;

        counter = 0;
        a = (int *) malloc(n * sizeof(int));
        b = (int *) malloc(m * sizeof(int));

        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }

        for(i = 0, j = 0; i < n && j < m;) {
            if(a[i] == b[j]) {
                counter++;
                i++;
                j++;
            }
            else if(a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        printf("%d\n", counter);

        free(a);
        free(b);
    }
    return 0;
}
