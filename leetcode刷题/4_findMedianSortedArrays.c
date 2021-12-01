#include<stdio.h>
#include<math.h>
#include<malloc.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double res;
    int numSize = nums1Size+nums2Size;
    if(nums1Size==0 && nums2Size==0){
        return res;
    }
    int i=0, j=0, h=0;;
    int max_num, max_size=fmax(nums1Size,nums2Size);
    if(nums1Size==0 || nums2Size==0){
        if(nums1Size==0) max_num = nums2[nums2Size-1];
        if(nums2Size==0) max_num = nums1[nums1Size-1];
    }
    else max_num = fmax(nums1[nums1Size-1],nums2[nums2Size-1]);
    int *num = (int *)calloc(max_num,sizeof(int));
    while(h<max_size){
        if(h<nums1Size)num[nums1[h]]+=1;
        if(h<nums2Size)num[nums2[h]]+=1;
        h++;
    }
    int cursor=0, record=0, k=0;
    for(k; k<max_num; k++){
        if(cursor>=numSize/2){
            break;
        }
        if(num[k]!=0) record=k;
        cursor+=num[k];
    }
    if(numSize%2==0){
        printf("record=%d, k=%d\n",record,k);
        if((cursor-1)<numSize/2){
            res = (double) (record+k)/2;
            return res;
        }
        else return (double) k;
    }
    else{
        printf("record=%d, k=%d\n",record,k);
        return (double) k;
    } 
}


double findMedianSortedArrays2(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int length = nums1Size + nums2Size;
    int p = 0,q = 0,pre = -1,next = -1;
    for(int i = 0;i <= length/2;i++){
        pre = next;
        if(p < nums1Size && (q >= nums2Size || nums1[p] < nums2[q])){
            next = nums1[p];
            p++;
        }
        else{
            next = nums2[q];
            q++;
        }
    }
    if(length % 2 == 0)
        return (pre + next) / 2.0;
    return next;

}

int main()
{
    int nums1[6] = {1,2,2,4,7,5};
    int nums2[4] = {0,3,6,6};
    double res = findMedianSortedArrays(nums1,6,nums2,4);
    printf("res = %f\n" ,res);
    return 0;
}