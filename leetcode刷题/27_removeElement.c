#include<stdio.h>

int removeElement(int* nums, int numsSize, int val){
    if(numsSize==0 || numsSize==1){
        return numsSize==0 ? 0 : nums[0]==val? 0 : 1;
    }
    int left = 0;
    int right = numsSize-1;
    while(left<=right){
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
    return left;
}

int removeElement2(int* nums, int numsSize, int val){
    int size = 0;
    for (int i = 0; i <= numsSize - 1; i++)
    {
        if (nums[i] != val)
        {
            nums[size++] = nums[i];
        }
    }
    return size;
}

int main(){
    int nums[11] = {4,4,4,4,4,5,6,7,8,9,10};
    int numsSize = 11;
    int val = 4;
    int res = removeElement2(nums,numsSize,val);
    for(int i=0; i<numsSize; i++){
        printf("%d ",nums[i]);
    }
    return 0;
}