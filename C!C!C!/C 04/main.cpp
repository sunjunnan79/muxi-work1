#include <stdio.h>
#include <windows.h>
int main(){
    int a,b,i,c,d,n,m=1;
    printf("请输入两个正整数:");
    scanf("%d%d",&a,&b);
    for(n=1;n<=a;n++){
        if (a%n == 0){
            c = n;
            for(i=1;i<=b;i++){
                if(b%i == 0)
                d = i;
                if(d==c&&d>m)
                m = d;
            }
            
        }
    }printf("%d与%d的最大公因数为:%d",a,b,m);
    system("pause");
    return 0;
}