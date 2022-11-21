/* relational operators
'>', '>=', '<', '<=', '==', '!='
*/  

#include <stdio.h>

int main(){
    int a = 11, b = 22;
    printf("a = %d, b = %d\n", a, b);

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a < b: %d\n", a < b);
    printf("a <= b: %d\n", a <= b);
    printf("a > b: %d\n", a > b);
    printf("a >= b: %d\n", a >= b);
    printf("------------------\n");
    int m = 10, n = 10;
    printf("m = %d, n = %d\n", m, n);
    printf("m == n: %d\n", m == n);
    printf("m != n: %d\n", m != n);
    printf("m < n: %d\n", m < n);
    printf("m <= n: %d\n", m <= n);
    printf("m > n: %d\n", m > n);
    printf("m >= n: %d\n", m >= n);

    return 0;
}