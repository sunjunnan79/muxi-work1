#include <stdio.h>
#include <windows.h>
#include <math.h>
int main(){
    int t,count=1;
    printf("������Ҫ���ԵĴ���t:");
    scanf("%d",&t);
    int a[t+1];
    float b[t+1];
    printf("��ֱ�������Ҫ��͵�����:");
    while(t--){
        
        scanf("%d",&a[t]);
        
        for(int i=1;i<=a[t];i++)
            b[t]+=pow(-1,i+1)*1/i;

        printf("ǰ%d��ĺ�Ϊ:%.2f\n",a[t],b[t]);
    }
    
    system("pause");
    return 0;
}
