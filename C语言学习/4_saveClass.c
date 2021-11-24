#include<stdio.h>

void def_auto(void);
void def_register(void);
void def_static(void);

static int count = 10;

void def_auto(void)
{
	//auto存储类，auto只能在函数内（只能修饰局部变量）
	int mount;
	auto int month;
}

void def_register(void)
{
	//register用于定义寄存器中，
	register int miles;
}

void def_static(void)
{
	/*
	static 修饰局部变量可以在函数调用之间保持局部变量的值
	static 修饰全局变量时，会使变量的作用域限制在声明它的文件内
	*/
	static int thingy = 5;
	thingy++;
	printf("thingy is %d, count is %d\n", thingy, count);
}

int main(void)
{
	while(count--)
	{
		def_static();
	}
	return 0;
}