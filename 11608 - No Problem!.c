#include <stdio.h>

int main() {
    int s, i, j, p[12], r[12], count = 0;
    while(scanf("%d", &s) == 1) {
        if(s < 0) break;

        for(i = 0; i < 12; i++) {
            scanf("%d", &p[i]);
        }
        for(i = 0; i < 12; i++) {
            scanf("%d", &r[i]);
        }
        printf("Case %d:\n", ++count);
        for(i = 0, j = i - 1; i < 12; i++, j++) {
            if(i != 0)
                s = s + p[j];
            if(s >= r[i]) {
                printf("No problem! :D\n");
                s = s - r[i];
            }
            else {
                printf("No problem. :(\n");
            }
        }
    }
    return 0;
}
