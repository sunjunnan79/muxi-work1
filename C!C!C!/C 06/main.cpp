#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
int main(){
    int n,i,b;
    int a[100];

    printf("������������������ݸ���n(n<=100):");
    scanf("%d",&n);

    printf("������%d������:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<n;i++){
        if (i>0&&abs(a[i])>abs(a[i-1])){
            b = a[i-1];
            a[i-1] = a[i];
            a[i] = b;
            i =i-2;
        }
        if(abs(a[i])==abs(a[i-1])&&a[i]>a[i-1]){
            b = a[i-1];
            a[i-1] = a[i];
            a[i] = b;
            i =i-2;
            }
            
        }
    
    printf("�����%d�����ݰ�����ֵ�Ӵ�С���еĽ��Ϊ:",n);
    for(i=0;i < n;i++)
    printf("%d ",a[i]);

    system("pause");
	return 0;
    
}
    

