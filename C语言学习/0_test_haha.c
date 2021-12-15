#include<stdio.h>

int main(){
    char str1[30], str2[30];
    scanf("%3[^0-9\n]",str1);
    scanf("%*[^\n]");scanf("%*c");
    scanf("%3[^a-z]",str2);
    scanf("%*[^\n]");scanf("%*c");
    printf("%s\n%s\n",str1,str2);
    return 0;
}

