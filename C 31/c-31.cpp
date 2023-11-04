#include <stdio.h>
#include <windows.h>
int main(){
    int T,count=0;
    printf("请输入数据数量T:");
    scanf("%d",&T);
    int num1[T],num2[T];
    char anwers[T][3];
    while(T--){
        printf("请输入数据:");
        scanf("%d%d",&num1[count],&num2[count]);
        count++;
    }
    for(int i=0;i<count;i++){
        if (num1[i]%num2[i]==0)
            printf("Yes\n");
        else
            printf("No\n");        
    }
    system("pause");
    return 0;
}