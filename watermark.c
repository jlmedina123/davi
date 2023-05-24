#include <stdio.h>

int masgrande(int a[], int size) {
    int wm;
    wm = -80;
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] > wm) {
            wm = a[i];
        }
    }
    return wm;
}

void printarraypos(int a[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        if (a[i] >= 0) {
            printf("a[%d] = %d\n", i, a[i]);
        }    
    }
}

void printarray(int a[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("a[%d] = %d\n", i, a[i]);    
    }
}

int main()
{
    int a[4] = {1, -5, -2, 8};
    int n = 4;
    printarray(a, n);
    printarraypos(a, n);
    int max;
    max = masgrande(a, n);
    printf("el mas grande es %d\n", max);
    return 0;
}

