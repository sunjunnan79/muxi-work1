#include <stdio.h>
#include <windows.h>
int main(){
    int n,m,i,b;

    printf("请输入总人数n:");
    scanf("%d",&n);
    int a[n];

    printf("请输入要找出的大富翁数量m:");
    scanf("%d",&m);
    printf("请输入%d个人的财产金额:",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if (i>0&&a[i]>a[i-1]){
            b = a[i-1];
            a[i-1] = a[i];
            a[i] = b;
            i =i-2;
        }
    }

    printf("隐藏的大富翁的资产排序为:");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);

    system("pause");
    return 0;
}