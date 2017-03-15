#include <stdio.h>

int a()
{
	printf("I am a!\n");
	return 1;
}

int (*b(int(*x)()))()  
{
	int f = x();
	
	if (f == 1)
		printf("I am b!\n");

	return x;
}

void c(int(*x)())
{
	x();
	printf("I am c!\n");
}


int main(void)
{
	int (*x)();

	x = b(a);

	c(x);


	return 0;

}