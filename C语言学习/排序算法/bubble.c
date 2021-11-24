#include<stdio.h>


void bubblesort(int arr[], int length)
{
	for(int i=0; i<length-1; i++)
	{
		for(int j=0; j<length-i-1; j++)
		{
			int tmp;
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[8] = {9,11,14,7,8,1,2,0};
	int length = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr,length);
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}