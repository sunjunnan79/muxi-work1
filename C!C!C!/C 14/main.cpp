#include <stdio.h>
#include <windows.h>
int main(){
    int i,n,a[21],min,count,b;
    printf("请输入要测试的数据数量n以及数据:");
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

        printf("\n请输入要测试的数据数量n以及数据(输入0以结束):");
    }
    system("pause");
    return 0;
}