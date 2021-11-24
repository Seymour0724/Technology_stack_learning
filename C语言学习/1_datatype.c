#include<stdio.h>
#include<float.h>

void type_size()
{
	printf("int sizeof: %lu\n", sizeof(int));
	printf("float sizeof: %lu\n", sizeof(float));
	printf("float min value: %e\n", FLT_MIN);
	printf("float max value: %e\n", FLT_MAX);
}

int main()
{
	type_size();
	return 0;
}