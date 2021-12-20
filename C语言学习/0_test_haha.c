#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){
    char ch;
    int i = 0;
    //循环监听，直到按Esc键退出
    while(1){
        if(kbhit()){  //检测缓冲区中是否有数据
            ch = getch();  //将缓冲区中的数据以字符的形式读出
            if(ch == 27){
                break;
            }
        }
        printf("Number: %d\n", ++i);
        Sleep(1000);  //暂停1秒
    }
    return 0;
}