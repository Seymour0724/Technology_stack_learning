#include<stdio.h>

void file_operate()
{
    FILE *fp = NULL;
    fp = fopen("C:\\Users\govalley_gtz\Desktop\hhh.txt","w+");
    fprint(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n",fp);
    fclose(fp);
}

int main()
{
    file_operate();
    return 0;
}