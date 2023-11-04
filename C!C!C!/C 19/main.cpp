#include <stdio.h>
#include <windows.h>
#include <math.h>
int main(){
    int t,count=1;
    printf("请输入要测试的次数t:");
    scanf("%d",&t);
    float a[t+1],b[t+1],max=0;
    
    while(t--){
        printf("请分别输入%d号复数的实部和虚部:",count);
        scanf("%f%f",&a[t],&b[t]);
        if(sqrt(a[t]*a[t]+b[t]*b[t])>max)
            max=sqrt(a[t]*a[t]+b[t]*b[t]);
        count++;

    }
    printf("输入复数的谱半径为:");
    printf("%.2f",max);
    system("pause");
    return 0;
}
