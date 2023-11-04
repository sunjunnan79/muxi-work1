#include <stdio.h>
#include <windows.h>
int main(){
    int n,count=0;
    printf("请输入数字n:");
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n/=2;
        printf("%d÷2=%d\n",n*2,n);    
            count++;}
            
        else{
            n = 3*n+1;
        printf("3X%d+1=%d\n",(n-1)/3,n);    
            count++;}
    }
    printf("要经过%d次卡拉兹猜想运算才能得到n=1:",count);
    system("pause");
    return 0;
}