#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    // declare variables
    int d1, d2, d3, d4, d5;
    
    // Constraint
    if (n >= 10000 && n <= 99999) {
        // Get the last digit
        d5 = n % 10;
        
        // digit before last
        // 12345 % 100 = 45
        d4 = ((n % 100) - d5)/10;
        
        // digit 3
        d3 = ((n % 1000 ) - (n % 100))/100;
        
        // digit 2
        d2 = ((n % 10000 ) - (n % 1000))/1000;
        
        // digit 1
        d1 = ((n % 100000 ) - (n % 10000))/10000;
    }
    
    
    printf("%d", d1 + d2 + d3 + d4 + d5 );
    
    return 0;
}
