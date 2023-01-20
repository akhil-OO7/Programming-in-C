#include <stdio.h>
main() {
    register int  a; //register variable a
    int *ptr = &a ; /*we cannot get memory location from 
                    register hence it produces error*/
}
