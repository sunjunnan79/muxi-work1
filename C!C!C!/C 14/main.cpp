#include <stdio.h>
#include <windows.h>
int main(){
    int i,n,a[21],min,count,b;
    printf("������Ҫ���Ե���������n�Լ�����:");
    while(scanf("%d",&n)){
        if (n==0)
        break;

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        for(i=0;i<n;i++)
            if(i==0)
                min = a[i];    
            else if(i>0 && min>a[i]){
                min = a[i];
                count = i;    
            }
        
        b=a[0];
        a[0]=a[count];
        a[count]=b;

        for(i=0;i<n;i++)
        printf("%d ",a[i]);

        printf("\n������Ҫ���Ե���������n�Լ�����(����0�Խ���):");
    }
    system("pause");
    return 0;
}