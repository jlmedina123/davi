
#include <stdio.h>
#include <stdint.h>

struct mstruct {
    int value;
    struct mstruct * p;
};


int main()
{
    struct mstruct a;
    struct mstruct b;
    
    struct mstruct *pa = &a;
    struct mstruct *pb = &b;
    
    pa->value = 10;
    pb->value = 4;
    
    pa->p = &b;
    
    return 0;
}
