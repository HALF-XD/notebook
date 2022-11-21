#include <stdio.h>

void say_hello(const char *str)
{
	printf("Hello %s\n", str);
}

int main(void)
{
	void (*f)(const char *) = say_hello;
	f("Guys");
     (*f)("you");
    say_hello("me");
	return 0;
}