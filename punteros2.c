#include <stdio.h>

void print1(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d " , arr[i]);
    }
    printf("\n");
}

void print2(int *p, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}

void aumenta1(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) { 
       // a[i] = a[i] + 1; 
       arr[i]++;
    }
}

void aumenta2(int *p, int size) {
    int i;
    for (i = 0; i < size; i++) { 
       // *p = *p + 1;
       (*p)++;
       p++;
    }
}

int main()
{
    int arr[] = {7, 8, 9, 10};
    print1(arr, 4);
    print2(arr, 4);
    aumenta1(arr, 4);
    aumenta2(arr, 4);
    print1(arr, 4);

    return 0;
}

