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

// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     for (int i = 0; i < numsSize; ++i) 
//     {
//         for (int j = i + 1; j < numsSize; ++j) 
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 int* ret = malloc(sizeof(int) * 2);
//                 ret[0] = i, ret[1] = j;
//                 *returnSize = 2;
//                 return ret;
//             }
//         }
//     }
//     *returnSize = 0;
//     return NULL;
// }

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