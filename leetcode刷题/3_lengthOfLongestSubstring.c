#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

int chrinstr(char *str, char chr, int length){
        for(int i=0; i<length; i++){
            if(str[i]==chr){
                printf("i+1 = %d\n",i+1);
                return i+1;
            }
        }
        return 0;
    }

int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    printf("len=%d",len);
    if(len==0){
        return 0;
    }
    int left=0, right=1;
    int result=1;
    while(right<len){
        int temp = chrinstr(s+left,s[right],right-left);
        if(temp==0){
            right++;
        }else{
            left += temp;
        }
        result = fmax(result,right-left);
        printf("left=%d,right=%d,result=%d\n",left,right,result);
    }
    return result;
}

int main()
{
    char s[] = "";
    int res = lengthOfLongestSubstring(s);
    printf("½á¹ûÊÇ£º%d\n",res);
    return 0;
}