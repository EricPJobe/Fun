#include <stdio.h>

void a()
{
	printf("I am a!\n");
	//return 1;
}

void (*b(void(*x)()))()  
{
	//int f = x();
	
	//if (f == 1)
		printf("I am b!\n");

	return x;
}

void c(void(*x)())
{
	x();
	printf("I am c!\n");
}


int main(void)
{
	void (*x)();

	x = b(a);

	c(x);


	return 0;

}