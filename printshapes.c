
#include <stdio.h>

void printsquaredots(int s) {
    int i;
    int j;
    for(i = 0; i < s; i++) {
        
        for (j = 0; j < s; j++) {
            printf(".");
        }
        printf("\n");
    }
}

void printline(int s) {
    int i;
    for (i = 0; i < s; i++) {
        printf(".");
    }
}

void printsquaredots2(int c, int f) {
    int i;
    int j;
    for(i = 0; i < c; i++) {
        printline(f);
        printf("\n");
    }                 
   
}

void printtriangulo(int size) {
    int i;
    for (i = 0; i < size; i++) {
        printline(size-i);  
        printf("\n");
    }
}



int main()
{
   
    printtriangulo(100);
    printf("\n\n");

    return 0;
}
