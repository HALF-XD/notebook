#include <stdio.h>
#define LEN 5

int main(int argc, char** argv)
{
    char *fruits[LEN] = {
        "apple",
        "cherry",
        "grape",
        "peach",
        "watermelon"
    };

    char **ptr = fruits;
    for (int i = 0; i < LEN; ++ptr, ++i)
    {
        printf("%s\n", *ptr);
    }

    return 0;
}