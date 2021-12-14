#include<stdio.h>

struct ast_exten {
    int nums[0];
};

int cal_01(int *nums,int numSize){
    //int numSize = sizeof(nums)/sizeof(nums[0]);
    int flag = 0, res = 0;
    for(int i=0; i<numSize; i++){
        if(nums[i]==1){
            flag++;
            if(flag>res){
                res = flag;
            }
        }
        else flag = 0;
    }
    return res;
}

int main(){
    int nums[9] = {1,1,1,0,1,1,1,1,1};
    int result = cal_01(nums,9);
    printf("%d\n",result);
    return 0;
}