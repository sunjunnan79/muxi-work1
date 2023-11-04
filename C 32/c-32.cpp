#include <stdio.h>
#include <windows.h>
int main(){
    int num,a[3],i,n;
    printf("请输入一个数n(0<n<1000):");
    scanf("%d",&num);
    for(i=0;i<3;i++){
        a[i]=num%10;
        num/=10;                        
    }
    for(i=2;i>=0;i--){
        if(i==2){
            n=a[i];
            while(n--)
                printf("B");
        }
        else if(i==1){
            n=a[i];
            while(n--)
                printf("S");
        }
        else if(i==0)
            for(n=1;n<=a[i];n++)
                printf("%d",n);
    }
    system("pause");
    return 0;
}