#include <stdio.h>
#include <windows.h>
int main(){
    int num[5],i,max,min;
    printf("请输入5个整数:");
    for(i=0;i<5;i++)
        scanf("%d",&num[i]);
    max = num[0];
    for(i=0;i<5;i++)
        if(num[i]>max)
            max=num[i];
    min = num[0];
    for(i=0;i<5;i++)
        if(num[i]<min)
            min=num[i];
    printf("最大值为:%d\n",max);
    printf("最小值为:%d\n",min);
    system("pause");
    return 0;
}