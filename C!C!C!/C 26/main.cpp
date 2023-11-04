#include <stdio.h>
#include <windows.h>
int main(){
    int num1,num2;
    printf("请输入两个数:");
    scanf("%d%d",&num1,&num2);
    for(int i =2;;i++)
        if(i%num1==0&&i%num2==0){
            printf("%d",i);
            break;
        }
    system("pause");
    return 0;
    
}