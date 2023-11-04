#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
int main(){     
    int i,sum1=0,sum2=0,A1,B1;
    long long int A,B;
    printf("«Î ‰»ÎA,A1,B,B1:");
    scanf("%lld%d%lld%d",&A,&A1,&B,&B1);

    for(i=0;A!=0;i++){
        if(A%10==A1)
            sum1=sum1*10+A1; 
        A/=10;
    }
    for(i=0;B!=0;i++){
        if(B%10==B1)
            sum2=sum2*10+B1; 
        B/=10;
    }
    printf("%d",sum1+sum2);
    system("pause");
    return 0;
}