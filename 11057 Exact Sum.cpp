#include <stdio.h>

int abs(int n) {
    if(n < 0)
        return (-1)*n;

    return n;
}

int main() {
    int n, *book, money, diff, prevDiff, book1, book2;

    while(1 == scanf("%d", &n)) {
        book = new int[n];
        for(int i=0; i<n; i++) {
            scanf("%d", &book[i]);
        }
        scanf("%d", &money);

        prevDiff = money;

        for(int i = 0; i < n-1; i++) {
            if(book[i] < money) {
                for(int j=i+1; j<n; j++) {
                    if(book[i] + book[j] == money) {
                        diff = abs(book[i] - book[j]);

                        if(diff < prevDiff) {
                            book1 = book[i];
                            book2 = book[j];
                            prevDiff = abs(book1 - book2);
                        }
                    }
                }
            }
        }

        //swap to values if book1 is greater than book2
        if(book1 > book2) {
            book1 = book1 ^ book2;
            book2 = book1 ^ book2;
            book1 = book1 ^ book2;
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
    }
    return 0;
}
