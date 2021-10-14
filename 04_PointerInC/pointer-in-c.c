#include <stdio.h>

void update(int *a,int *b) {    
    // Make the add operation
    int sum = *a + *b; 
    // Make the diff
    int diff = *a - *b;
    
    // Absolute
    if( diff < 0 ) {
        diff = diff * -1;
    }
     
    // Update the real variables a & b
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    // pa = address, *pa = valueof(a) 
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}