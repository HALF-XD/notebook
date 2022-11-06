#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 10 , b = 6;
    printf("a = %d, b = %d\n", a, b);
    printf("a += b = %d\n", a+=b);
    printf("a -= b = %d\n", a-=b);
    printf("a *= b = %d\n", a*=b);
    printf("a /= b = %d\n", a/=b);
    printf("a %%= b = %d\n", a%=b);
    printf("a <<= b = %d\n", a<<=b);
    printf("a >>= b = %d\n", a>>=b);
    printf("a &= b = %d\n", a&=b);
    printf("a ^= b = %d\n", a^=b);
    printf("a |= b = %d\n", a|=b);

    return 0;
}