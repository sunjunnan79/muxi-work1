#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
    int n,i,j,sum=0;
    printf("请输入组合数个数n:");
    scanf("%d",&n);
    int num[n];
    printf("请输入组合数:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i!=j)
                sum += num[i]*10+num[j];                                
    printf("%d",sum);
    system("pause");
    return 0;
    
}