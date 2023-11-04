#include <stdio.h>
#include <windows.h>

float max(float a[],int lenth){
    float max = 0.0;
    while(lenth--){
        if(max<a[lenth])
            max=a[lenth];
    }
    return max;
}

int main(){
    int t1,t2[10],t3,count=0;
    printf("请输入案例数量t:");
    scanf("%d",&t1);
    float num[t1][100];
    while(t1--){
        scanf("%d",&t2[count]);
        t3 = t2[count];
        while (t3--)
            scanf("%f",&num[count][t3]);
        count++;
    }       
    for ( int i = 0; i < count; i++)
        printf("%f\n",max(num[i],t2[i]));               
    system("pause");
    return 0;
}