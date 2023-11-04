#include <stdio.h>
#include <windows.h>
int main(){
    int n,i,t=0,count=0;
    float Q,money,sum1[100],sum2[100];
    char m;
    
    while(1){
        //printf("请输入报销额度Q,发票张数N(N<=30):");
        scanf("%f%d",&Q,&n);
        if(n==0)
            break;
        sum1[t]=sum2[t]=0;
        while(n--){            
            scanf("%d",&i);
            while(i--){
                scanf("%c%c%c",&m,&m,&m);
                scanf("%f",&money);
                if(money<=600&&money<=Q)
                    sum1[n]+=money;
                if(sum1[n]>1000)
                    sum1[n]=1000;
                printf("%f",sum1[n]);
            }
            if(sum1[n]<Q)
                sum2[t]+=sum1[n];
            if(sum2[t]>Q)
                sum2[t] = Q;
            
        }
        t++;
        count = t;
    }
    for(t=0;t<count;t++)
        printf("%.2f\n",sum2[t]);

    system("pause");
    return 0;
}