
#include <stdio.h>

int cuentapalabras(char *ps) {
    int con = 0;
    
    while(*ps != '\0') {
        if(*ps == ' ' && *(ps+1) >= 'a' && *(ps+1) <= 'z') {
            con++;
        }
        ps++;
    }
    con++;
    return con;
}

int soniguales(char *s1, char *s2) {
    
    while (*s1 != '\0' && *s2 != '\0') {
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

int main()
{
    char mistr[] = "hola  soy papa.";
    int palabras = 0;
    palabras = cuentapalabras(mistr);
    printf("%d\n", palabras);
    
    char s1[] = "hola soy pap";
    char s2[] = "hola soy papa";
    int iguales = soniguales(s1, s2);
    printf("%d\n", iguales);
    return 0;
}

