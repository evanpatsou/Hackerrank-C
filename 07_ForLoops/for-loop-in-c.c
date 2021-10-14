#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    // Check our constrains
    if(a >= 1 && a<=b && (b <= 10^6) ) {
        // Write the loop
        for (int n = a; n <= b ; n++) {
            // check the range of n
            if (n > 9) {
                // Check if it is odd or even. 
                if( n % 2 == 0) {
                    printf("even");
                } else {
                    printf("odd");
                }
            } else {
                // convert the int into word 
                if(n == 1) {
                    printf("one");
                } else if ( n == 2 ) {
                    printf("two");
                } else if ( n == 3 ) {
                    printf ( "three" );
                } else if ( n == 4) {
                    printf ( "four" );
                } else if ( n == 5) {
                    printf ( "five" );
                } else if ( n == 6) {
                    printf ( "six" );
                } else if ( n == 7) {
                    printf ( "seven" );
                } else if ( n == 8) {
                    printf ( "eight" );
                } else if ( n == 9) {
                    printf ( "nine" );
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}

