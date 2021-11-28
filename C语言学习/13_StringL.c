#include<stdio.h>
#include<string.h>

void defString()
{
    char name[] = "Seymour";
    printf("我的名字叫：%s\n",name);
    return;
}

void operate_String()
{
    char str1[20] = "gaotianze";
    char str2[20] = "cuiwen";
    char str3[20] = "love";
    char cop[20];
    /*将str1复制到cop中*/
    strcpy(cop,str1);
    printf("strcpy(cop,str1) = %s\n",cop);
    /*将两个字符串进行拼接*/
    strcat(str1,strcat(str3,str2));
    printf("The best thing is: %s\n", str1);
    printf("The length of str1 is: %d\n", strlen(str1));
    printf("The first o index is: %d\n", (strchr(str1,'o')-str1)/sizeof(str1[0]));
    printf("The first love index is %d\n", *strstr(str1,"love"));
    return;
}

int main()
{
    defString();
    operate_String();
    return 0;
}