#include <stdio.h>
#include <windows.h>
#include<algorithm>
int main(){
    int a[100][100];
    int t,i,j;
    int b=0,c=0;
    int x,y,n,m,k,h;
    int max=0,xy=0;
    printf("请输入要测试的次数t:");
    scanf("%d",&t);
    printf("请输入m,n,x,y的大小(母矩阵大小为m*n,子矩阵为x*y):");
    scanf("%d*%d%d*%d",&m,&n,&x,&y);
    while(t--){
        memset(a,0,sizeof(a));

        printf("请输入母矩阵m*n:\n");
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

        printf("最大的%d*%d子矩阵为:\n",x,y);        
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