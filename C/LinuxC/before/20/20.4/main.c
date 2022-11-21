#include <stdio.h>
#include "stack.h"

int main(void)
{
    push('a');
    printf("%d \n", is_empty());
    return 0;
}