#include <stdio.h>
#include <windows.h>
int main(){
    int M,N,i,b,c=-1,n,count;
    printf("请输入正整数M,N(M<N):");
    scanf("%d%d",&M,&N);

    int a[N];
    for(n=1;;n++){
        for(i=1;i<n;i++){
            if(n%i==0)
                count++;
        }
        
        if(count==1){
            c++;
            a[c]=n;
        }

        count =0;

        if(c==N-1)
        break;
    }
    for(i=M-1;i<N;i++){
        printf("%d ",a[i]);
        count++;
        if(count%10==0)
        printf("\n");
    }
    system("pause");
    return 0;

}