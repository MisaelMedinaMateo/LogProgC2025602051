#include <stdio.h>

int main()
{
    int x = 3;
    float z;

    z = ((1 / (float)2) * x +
     ((x + 3) / (float)2) * (2 * (x * x))) 
     / ((2 + 3) * x);

    printf("z es igual a %.2f", z); 
    return 0;
}