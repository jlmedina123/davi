#include <stdio.h>

int encuentraletra(char *p, char l) {
    while(*p != '\0') {
        if(*p == l) {
            return 1;
        }
        p++;
    }
    return 0;
}

int issubstring(char *a, char *sub) {
    char *subp = sub;

    while (*a != '\0') {
        if (*a == *subp) {
            a++;
            subp++;
        } else if (*subp == '\0') {
            return 1;
        } else {
            subp = sub;
            a++;
        }
    }
    if (*subp == '\0')
        return 1;

    return 0;
}

int maximo(int *p, int size) {
    int i;
    int max = *p;
    for(i = 0; i < size; i++) {
        if(*p > max) {
            max = *p;
        }
        p++;
    }
    return max;
}


int main()
{
    char palabra[] = "holao";
    int a;
    a = encuentraletra(palabra, 'z');
    printf("%d\n", a);

    a = issubstring(palabra, "lao");
    printf("%d\n", a);
    
    int numeros[] = {-10, -4, -2, -8, -5, -99};
    a = maximo(numeros, 6);
    
    printf("%d\n", a);
    
    return 0;
}

