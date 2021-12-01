#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0; i<numsSize; i++)
    {
        int num = target - nums[i];
        int *res = malloc(sizeof(int)*2);
        for(int j=0; j<numsSize; j++)
        {
            if(i==j){
                continue;
            }
            if(num==nums[j]){
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int* twoSum(int* nums, int numsSize, int target) {
	int i, min = nums[0], max = nums[0];
	//找出最大值和最小值
	for (i = 0; i < numsSize; i++) {
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}
	//因为map的下标为距离，因此map的大小设为最大距离+1即可。
	int *map = (int*)calloc((max - min + 1), sizeof(int));
	int *twosum = (int*)malloc(sizeof(int) * 2);
	// 每扫描一个nums元素，将该元素的下标和距离记录在map中
	for (i = 0; i < numsSize; map[nums[i] - min] = ++i) {
		int lookfornum = target - nums[i];
		if (lookfornum<min || lookfornum>max)
			continue;
		int dis = lookfornum - min;
		// 判断目标距离上是否已经存有数值
		if (map[dis] != 0) {
			twosum[0] = i;
			twosum[1] = map[dis] - 1;
			break;
		}
	}
	return twosum;
}

int main()
{
    int nums[8] = {4,5,3,7,8,1,4,0};
    int target = 10;
    int returnSize= 2;
    int *r = &returnSize;
    int *res = twoSum(nums,8,target,r);
    for(int k=0; k<2; k++)
    {
        printf("%d\n",*(res+k));
    }
    return 0;
}