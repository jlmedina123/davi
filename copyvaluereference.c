
#include <stdio.h>

void imprimea(int s) {
    printf("%d\n", s);
}

void cambiaa(int s) {
    s = 5;
}

void cambiap(int *p) {
    *p = 6;
}

int main()
{
    int a = 4;
    imprimea(a);

    cambiaa(a);
    imprimea(a);
    
    int *p = &a;
    cambiap(p);
    imprimea(a);
    
    
    return 0;
}

