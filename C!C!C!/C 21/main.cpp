#include <stdio.h>
#include <windows.h>
#include <math.h>
//�˷��ĺ���,��Ҫ��ʱ�����
int factorial(int i){
    int q=1;
    for(int n=1;n<=i;n++)
        q*=n;
    return q;
}

int main(){
    int t,count=0,i,j;
    printf("���������Ĵ���t:");
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
        printf("\n���������Ĵ���n:");    
    
    }
    system("pause");
    return 0;
}