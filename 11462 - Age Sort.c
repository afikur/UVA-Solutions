#include <stdio.h>
#include <stdlib.h>

void Merge(int *A, int *L, int leftCount, int *R, int rightCount) {
    int i,j,k;
    i = 0; j = 0; k = 0;

    while(i<leftCount && j<rightCount) {
        if(L[i] < R[j]) A[k++] = L[i++];
        else A[k++] = R[j++];
    }
    while(i<leftCount) {
        A[k++] = L[i++];
    }
    while(j<rightCount) {
        A[k++] = R[j++];
    }
}

void MergeSort(int *A, int n) {
    int i, mid, *L, *R;
    if(n < 2) return;
    mid = n / 2;
    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n-mid)*sizeof(int));

    for(i=0; i<mid; i++) {
        L[i] = A[i];
    }
    for(i=mid; i<n; i++){
        R[i-mid] = A[i];
    }

    MergeSort(L, mid);
    MergeSort(R, n-mid);
    Merge(A, L, mid, R, n-mid);
}

int main() {
    int n, *a, i;

    while(scanf("%d", &n) == 1) {
        if(n == 0) break;

        a = (int*)malloc(n * sizeof(int));

        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        MergeSort(a, n);

        for(i = 0; i < n; i++) {
            printf("%d", a[i]);
            if(i != n-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
