#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Declare two int and two float numbers
    int a, b;
    float c, d;
        
    // Read our first line
    scanf("%d %d", &a, &b);
    
    // Read the second one
    scanf("%f %f", &c, &d);

    // Make our operations
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", c+d, c-d);
    
    return 0;
}