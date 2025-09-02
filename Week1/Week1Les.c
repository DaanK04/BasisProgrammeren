//waarom scanf_s en geen scanf

/*
ook commentaar
*/
#include <stdio.h>

int b;
float a, c;

int main()
{
	scanf_s("%f", &a);
	b = 3;
	c = a + b;
	printf_s("%f + %d = %f", a, b, c);
}
