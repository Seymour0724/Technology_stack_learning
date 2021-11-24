#include<stdio.h>

int A = 10;
int B = 15;

void def_judge(int num)
{
	(num%2==0) ? printf("even number!\n") : printf("odd number!\n");
}

void sum_price()
{   
	int nums, total;
	char commodity;
	printf("which good dou you want:");
	//这里要明白scanf的工作原理，从键盘上读取按键到缓冲区，如果上一条scanf按下了回车，则scanf会直接判定你输入了回车键
	scanf(" %c",&commodity);
	printf("How many do you want:");
	scanf("%d",&nums);
	total = (commodity == 'A') ? printf("total price is: %d\n", A*nums) : printf("total price is: %d\n", B*nums);
}

void week(int day)
{
	switch(day)
	{
		case 1: printf("Monday\n");
		break;
		case 2: printf("Tuesday\n");
		break;
		case 3: printf("Wednesday");
		break;
		case 4: printf("Thursda\n");
		break;
		case 5: printf("Friday\n");
		break;
		case 6: printf("Saturday\n");
		break;
		case 7: printf("Sunday\n");
		break;
		default: printf("error\n");
	}
}

int main()
{
	int num;
	
	// 1.验证奇数偶数函数
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("The 'num: ");
	def_judge(num);
	
	// 2.判断输出A、B商品总价格
	sum_price();
	
	//3.Switch语句判断星期几
	week(3);
	
	return 0;
}