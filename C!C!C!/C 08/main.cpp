#include <stdio.h>
#include <windows.h>
int main(){
    int n,i=0;
    float sum=0,a[100],b;

    printf("��������ί������n:");
    scanf("%d",&n);
    
    printf("��������ί�����ķ���:");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
//Ϊ�����С��������
    for(i=0;i<n;i++){
        if (i>0&&a[i]>a[i-1]){
            b = a[i-1];
            a[i-1] = a[i];
            a[i] = b;
            i =i-2;
        }
    }

    printf("%dλ��ί��ƽ������Ϊ:",n);
    for(i=1;i<n-1;i++)
        sum +=a[i];
    printf("%.2f\n",sum/(n-2));

    system("pause");
    return 0;
    
}