/*
    Time: 0.000
    Complexity: Linear O(n)
*/

#include <stdio.h>
#include <stdlib.h>

/*
    Check whether the given array ordered or not.
    Bubble sort logic applied. If any single swap is happened then the array is not sorted.
    It can be reversely ordered. That's what second for loop detects.
*/
int ordered(int *a, int n) {
    int i, flag = 0;
    for(i = 0; i < n - 1; i++) {
        if(a[i] > a[i+1]) {
            flag = 1;
            break;
        }
    }
    // if no swap is needed then flag will be 0.
    // that means array is sorted already.
    if(flag == 0) {
        return 1;
    }

    // if the array is not found as sorted. we check for reversely sorted array.
    flag = 0;
    for(i = 0; i < n - 1; i++) {
        if(a[i] < a[i+1]) {
            flag = 1;
            break;
        }
    }
    // if no swap is needed then flag will be 0.
    // that means array is sorted in reversely.
    if(flag == 0) {
        return 1;
    }
    // return 0 if array is not sorted either in ascending or descending order.
    return 0;
}

int main() {
    int n, i, *a, array_size = 10;
    a = (int *)malloc(array_size * sizeof(int));

    scanf("%d", &n);
    printf("Lumberjacks:\n");
    while(n--) {
        for(i = 0; i < array_size; i++) {
            scanf("%d", &a[i]);
        }
        if(ordered(a, array_size)) {
            printf("Ordered\n");
        }
        else {
            printf("Unordered\n");
        }
    }

    return 0;
}
