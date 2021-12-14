#include<stdio.h>
#include<float.h>
#include<stdlib.h>

typedef struct{
	unsigned int nMant:23;
	unsigned int nExp:8;
	unsigned int nSign:1;
} FP_SINGLE;

void type_size()
{
	printf("int sizeof: %lu\n", sizeof(int));
	printf("float sizeof: %lu\n", sizeof(float));
	printf("float min value: %e\n", FLT_MIN);
	printf("float max value: %e\n", FLT_MAX);
}

void test1(){
	int a = 0x10000000;
	int b = 0xffffffff;
	printf("a = %d\nb = %d\n",a,b);
}

void float_strucr(){
	char strBin[33] = {0};
	float f = 128.101;
	printf("%f\n",f);
	FP_SINGLE *p = (FP_SINGLE*)&f;

	itoa(p->nSign,strBin,2);
	printf("sign: %s\n", strBin);
	itoa(p->nExp,strBin,2);
	printf("exp: %s\n", strBin);
	itoa(p->nMant,strBin,2);
	printf("mant: %s\n", strBin);
}

int main()
{
	// type_size();
	// test1();
	float_strucr();
	return 0;
}