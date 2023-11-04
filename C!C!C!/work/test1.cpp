#include <stdio.h>
#include <windows.h>
int main(){
    int num;
    printf("请输入一个整数:");
    scanf("%d",&num);
    if(num%(3*5*7)==0)
        printf("能被3,5,7整除");
    else if(num%(3*5)==0)
        printf("能被3,5整除");
    else if(num%(3*7)==0)
        printf("能被3,7整除");
    else if(num%(5*7)==0)
        printf("能被5,7整除");
    else if(num%5==0)
        printf("能被5整除");
    else if(num%7==0)
        printf("能被7整除");
    else if(num%3==0)
        printf("能被3整除");
    else
        printf("不能被3,5,7任一个整除");
    system("pause");
    return 0;    
}