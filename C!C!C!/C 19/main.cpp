#include <stdio.h>
#include <windows.h>
#include <math.h>
int main(){
    int t,count=1;
    printf("������Ҫ���ԵĴ���t:");
    scanf("%d",&t);
    float a[t+1],b[t+1],max=0;
    
    while(t--){
        printf("��ֱ�����%d�Ÿ�����ʵ�����鲿:",count);
        scanf("%f%f",&a[t],&b[t]);
        if(sqrt(a[t]*a[t]+b[t]*b[t])>max)
            max=sqrt(a[t]*a[t]+b[t]*b[t]);
        count++;

    }
    printf("���븴�����װ뾶Ϊ:");
    printf("%.2f",max);
    system("pause");
    return 0;
}
