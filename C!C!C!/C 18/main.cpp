#include <stdio.h>
#include <windows.h>
#include<algorithm>
int main(){
    int a[100][100];
    int t,i,j;
    int b=0,c=0;
    int x,y,n,m,k,h;
    int max=0,xy=0;
    printf("������Ҫ���ԵĴ���t:");
    scanf("%d",&t);
    printf("������m,n,x,y�Ĵ�С(ĸ�����СΪm*n,�Ӿ���Ϊx*y):");
    scanf("%d*%d%d*%d",&m,&n,&x,&y);
    while(t--){
        memset(a,0,sizeof(a));

        printf("������ĸ����m*n:\n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                if(i>=x-1&&j>=y-1){
                    for(k=i-x+1;k<=i;k++)
                        for(h=j-y+1;h<=j;h++){
                            xy+=a[k][h];
                            printf("%d\n",xy);
                        }
                }

                if(xy>max){
                    max = xy;
                    b = i;
                    c = j;
                    
                }
                xy = 0;
            }

        printf("����%d*%d�Ӿ���Ϊ:\n",x,y);        
        for(i=b-x+1;i<=b;i++){
            for(j=c-y+1;j<=c;j++)
                printf("%d ",a[i][j]);
            
            printf("\n");
            
        }

        b=c=0;
        max=xy=0;        
    }
    system("pause");
    return 0;
}