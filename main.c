#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); // Note change of %d to %f
    // Complete the y = line below
    y = 9*x+32;
    printf("y: %f\n", y);
    return 0;
}
