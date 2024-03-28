#include <stdio.h>

int encuentra(char *s, char c) {
    while(*s != '\0') {
        if(*s == c) {
            return 1;
        }
        s++;
    }
    return 0;
}

int mayusculas(char *s) {
    int contador = 0;
    while(*s != '\0') {
        if (*s >= 'A' && *s <= 'Z') {
            contador++;
        }
        *s++;
    }
    return contador;
}

void cambiamayuscula(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - 32;
        }
        s++;
    }
}

void cambian(int *p) {
    *p = 123123;
}

int main()
{
    char s[] = "abcdefLLhlop";
    int n;
    n = encuentra(s, 'x');
    printf("%d\n", n);
    
    n = mayusculas(s);
    printf("%d\n", n);
    
    cambiamayuscula(s);
    printf("%s\n", s);

    cambian(&n);
    printf("%d", n);
    
    return 0;
}

