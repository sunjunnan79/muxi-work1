#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
int main(){
    int n,i,b;
    int a[100];

    printf("请输入您想输入的数据个数n(n<=100):");
    scanf("%d",&n);

    printf("请输入%d个数据:",n);
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
    
    printf("输入的%d个数据按绝对值从大到小排列的结果为:",n);
    for(i=0;i < n;i++)
    printf("%d ",a[i]);

    system("pause");
	return 0;
    
}
    

