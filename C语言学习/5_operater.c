#include<stdio.h>
#include<stdbool.h>

//声明函数
void digital_operater();
void relation_operater();

static int a = 21;
static int b = 22;


void digital_operater()
{
	int c;
	c = a + b;
	printf("a + b = %d\n", c);
	c = a - b;
	printf("a - b = %d\n", c);
	c = a * b;
	printf("a * b = %d\n", c);
	c = a / b;
	printf("a / b = %d\n", c);
	c = a % b;
	printf("a % b = %d\n", c);
	c = ++a;
	printf("c(++a) = %d\n", c);
	c = --a;
	printf("c(--a) = %d\n", c);
}

void relation_operater()
{
	bool x = true;
	bool y = false;
	int z;
	
	z = x||y;
	printf("x||y = %d\n", z);
	z = x&&y;
	printf("x&&y = %d\n", z);
	z = !x;
	printf("!x = %d\n", z);
}

//拓展，编写同或与异或函数
bool extend_function(bool x, bool y, int num)
{
	if (num == 0)
	{
		return (x&&y)||(!x&&!y);
	}
	else
	{
		return (!x&&y)||(x&&!y);
	}
}

int main()
{
	digital_operater();
	relation_operater();
	printf("NOR result is: %d\n", extend_function(true,false,1));
	printf("XNOR result is: %d\n", extend_function(true,false,0));
	return 0;
}