#include <stdio.h>
#include <windows.h>
int main(){
    int num;
    printf("������һ������:");
    scanf("%d",&num);
    if(num%(3*5*7)==0)
        printf("�ܱ�3,5,7����");
    else if(num%(3*5)==0)
        printf("�ܱ�3,5����");
    else if(num%(3*7)==0)
        printf("�ܱ�3,7����");
    else if(num%(5*7)==0)
        printf("�ܱ�5,7����");
    else if(num%5==0)
        printf("�ܱ�5����");
    else if(num%7==0)
        printf("�ܱ�7����");
    else if(num%3==0)
        printf("�ܱ�3����");
    else
        printf("���ܱ�3,5,7��һ������");
    system("pause");
    return 0;    
}