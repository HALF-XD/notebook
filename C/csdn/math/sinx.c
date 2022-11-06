#include <stdio.h>
#include <math.h>
double sin(double);
double nResult(double, double);

int main(){
    double x = 0;
    scanf("%lf", &x);
    printf("sin(%lf)=%lf\n", x, sin(x));
    return 0;
}
double sin(double x){
    int i = 0;
    double result = 0, n = 0;
    while(fabs(n = nResult(x, 2 * ++i - 1)) > 0e-7){
        result += (i % 2 == 1) ? n : -n;
    }
    return result;
}
double nResult(double x, double n){
    return n == 1 ? x : nResult(x, n - 1) * x / n;
}