#include <stdio.h>
#include <windows.h>
int main(){
    int n,m,i,b;

    printf("������������n:");
    scanf("%d",&n);
    int a[n];

    printf("������Ҫ�ҳ��Ĵ�������m:");
    scanf("%d",&m);
    printf("������%d���˵ĲƲ����:",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if (i>0&&a[i]>a[i-1]){
            b = a[i-1];
            a[i-1] = a[i];
            a[i] = b;
            i =i-2;
        }
    }

    printf("���صĴ��̵��ʲ�����Ϊ:");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);

    system("pause");
    return 0;
}