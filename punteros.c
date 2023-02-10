
#include <stdio.h>

int sumatodo(int a[], int size) {
    int i;
    int t;
    t = 0;
    for (i = 0; i < size; i++) {
        t = t + a[i];
    }
    return t;
}

int sumatodop(int *p, int size) {
    int i;
    int t;
    t = 0;
    for (i = 0; i<size; i++) {
        t = t + *p;
        p++;
    }
    return t;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    
    int suma = sumatodo(arr, 4);
    printf("suma = %d\n", suma);
    
    
    int *p = arr;
    int sumap = sumatodop(p, 4);
    printf("suma con puntero = %d\n", sumap);
    
    int i;
    for (i = 0; i < 4; i++) {
        // arr[i] = arr[i] + 1;
        arr[i]++;
    }
    
    for (i = 0; i < 4; i++) {
        // *p = *p + 1;
        *p++;
        p++;
    }
        
    return 0;
}
