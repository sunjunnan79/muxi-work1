#include <stdio.h>
#include <windows.h>
#include <math.h>
//乘方的函数,需要的时候就用
int factorial(int i){
    int q=1;
    for(int n=1;n<=i;n++)
        q*=n;
    return q;
}

int main(){
    int t,count=0,i,j;
    printf("请输入跳的次数t:");
    while(scanf("%d",&t)){ 
        if(t==0)
            break;

        j=t;

        for(i=0;i<=t;i++){                        
            if((i-j)%3==0)
                count+=factorial(t)/(factorial(i)*factorial(t-i));                    
                        
            j--;
        }
              
        printf("%d",count);
        count = 0;
        printf("\n请输入跳的次数n:");    
    
    }
    system("pause");
    return 0;
}