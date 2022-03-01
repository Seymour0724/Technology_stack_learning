#include<stdio.h>
#include<string.h>

char *strlong(char *str1, char *str2){
    if(strlen(str1)>strlen(str2)){
        return str1;
    }
    else{
        return str2;
    }
}

int main(){
    char str1[30], str2[30], *str;
    getchar();
    fgets(str1,30,stdin);
    getchar();
    fgets(str2,30,stdin);
    str = strlong(str1,str2);
    printf("Long string: %s", str);
    return 0;
}