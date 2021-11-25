#include<stdio.h>

//枚举类型的声明
enum DAY{
    Monday=5, Tuesday, Wedensday, Tursday, Friday, Saturday, Sunday
};

enum Season{
    Spring=1, Summer, Autumn=13, Winter
};

int main()
{
    enum DAY day;
    day = Tursday;
    printf("Tursday value is: %d\n", day);
    printf("-------------------\n");
    int b = 3;
    enum Season season;
    season = (enum Season) b;
    printf("b is: %d\n",b);
    printf("season is: %d\n", season);
    for(season=Spring; season<=Winter; season++)
    {
        printf("Season is: %d\n", season);
    }
    return 0;
}
