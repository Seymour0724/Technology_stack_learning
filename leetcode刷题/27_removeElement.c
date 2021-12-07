#include<stdio.h>

int removeElement(int* nums, int numsSize, int val){
    if(numsSize==0 || numsSize==1){
        return numsSize==0 ? 0 : nums[0]==val? 0 : 1;
    }
    int left = 0;
    int right = numsSize-1;
    while(left<right){
        if(nums[left]==val){
            if(nums[right]==val){
                right--;
                continue;
            }
            else{
                int tmp = nums[left];
                nums[left] = nums[right];
                nums[right] = tmp;
                left++;
                right--;
            }
        }
        else{
            left++;
        }
    }
    return right;
}

int main(){
    int nums[5] = {4,2,3,6,4};
    int numsSize = 5;
    int val = 4;
    int res = removeElement(nums,numsSize,val);
    printf("%d%d%d\n", res,nums[3],nums[4]);
    return 0;
}