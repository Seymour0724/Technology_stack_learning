#include<stdio.h>

int month_days(int year,int month){
    int month_set[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(12<month||month<1){
        return month_set[0];
    }
    else{
        if(month!=2){
            return month_set[month];
        }
        else{
            if((year%4)!=0||(year%100)==0){
                return month_set[2];
            }
            else{
                return month_set[2]+1;
            }
        }
    }
}

int main(){
    int year,month;
    printf("please input the year and month:\n");
    scanf("%d",&year);
    scanf("%*[^\n]");scanf("%*c");
    scanf("%d",&month);
    int res = month_days(year,month);
    printf("year %d, month %d has %d days!",year,month,res);
    return 0;
}