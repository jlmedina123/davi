
#include <stdio.h>

int soniguales(char * s1, char * s2) {
    while (*s1 != 0 && *s2 != '\0') {
        if (*s1 != *s2) {
            return 0;
        }
        s1++;
        s2++;
    }
    if (*s1 != '\0' || *s2 != '\0') {
        return 0;
    }
    return 1;
}

void imprimeletras(char *p) {
    while (*p) {
        printf("%c", *p);
        p++;
    }
    printf("\n");
}

void imprimereves(char *p) {
    char *prin;
    prin = p;
    while (*p) {
        p++;
    }
    p--;
    
    while (p != prin) {
        printf("%c", *p);
        p--;
    }
    printf("%c", *p);
}

int main()
{
    char s1[] = "hola";
    char s2[] = "holaa0";
    int a;
    a = soniguales(s1, s2);
    printf("%d\n", a);
    
    imprimeletras(s1);
    imprimereves(s1);
    
    return 0;
}

