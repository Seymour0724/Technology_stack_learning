#include<stdio.h>

#define LENGTH 3
#define WIDTH 5
#define ENTER '\n'

int getArea(int length, int width)
{
	int area;
	area = length * width;
	return area;
}

int useConstant()
{
	const int length = 3;
	const int width = 4;
	return length * width;
}

int main()
{
	//计算面积
	printf("The area is:%d.%c", getArea(LENGTH,WIDTH), ENTER);
	printf("Hello%cWorld", ENTER);
	//利用常量
	printf("The area is:%d.%c", useConstant(), ENTER);
	return 0;
}