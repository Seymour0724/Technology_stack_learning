//下一个排列
#include<stdio.h>
#include<math.h>

void nextPermutation(int* nums, int numsSize){
    if(numsSize==1){
        return;
    }
    int flag=0;
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]<nums[i+1]){
            flag=1;
            break;
        }
    }
    if(!flag){
        int left=0, right=numsSize-1;
        while(left<right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    else{
        //这里要去设置保留一个最小值
        int j=numsSize-2,end=numsSize-1,stop=0;
        while(!stop){
            if(nums[j]>=nums[end]){
                j--;
            }
            else{
                    int temp = nums[j];
                    nums[j] = nums[end];
                    nums[end] = temp;
                    j++;
                    while(nums[j]>nums[end]&&j<end){
                        int temp = nums[j];
                        nums[j] = nums[end];
                        nums[end] = temp;
                        j++;
                    }
                    stop=1;
                }
            }
        }
    }

void swap(int *a, int *b) {
    int t = *a;
    *a = *b, *b = t;
}
void reverse(int *nums, int left, int right) {
    while (left < right) {
        swap(nums + left, nums + right);
        left++, right--;
    }
}

void nextPermutation(int *nums, int numsSize) {
    int i = numsSize - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = numsSize - 1;
        while (j >= 0 && nums[i] >= nums[j]) {
            j--;
        }
        swap(nums + i, nums + j);
    }
    reverse(nums, i + 1, numsSize - 1);
}


int main(){
    int nums[3] = {1,3,2};
    int numsSize = 3;
    nextPermutation(nums,numsSize);
    for(int i=0; i<numsSize; i++){
        printf("%d ",nums[i]);
    }
}
