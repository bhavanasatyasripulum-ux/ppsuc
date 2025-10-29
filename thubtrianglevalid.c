#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input: three sides of a triangle
    scanf("%d %d %d", &a, &b, &c);
    
    // Check triangle validity using triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid triangle");
    } else {
        printf("Invalid triangle");
    }

    return 0;
}
