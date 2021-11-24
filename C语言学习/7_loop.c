#include<stdio.h>

void def_for()
{
	for(int i=1; i<=10; i++)
	{
		printf("i = %d\n", i);
	}
}

void def_while()
{
	int i = 10;
	while(i >= 1)
	{
		printf("i = %d\n", i);
		i--;
	}
}

void def_dowhile()
{
	int i = 1;
	do{
		printf("i = %d\n", i);
		i++;
	}while(i <= 10);
}

int main()
{
	def_for();
	def_while();
	def_dowhile();
	return 0;
}