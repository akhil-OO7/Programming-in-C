#include <stdio.h>
int main() {
    int x, *p = NULL;
    x = 5;
    p = &x;
    printf("%d", *p);
    return 0;
}
