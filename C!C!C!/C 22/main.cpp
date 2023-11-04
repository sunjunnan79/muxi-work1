#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <algorithm>
int main(){
    int C1,C2;
    printf("请分别输入打点计时数C1,C2:");
    scanf("%d%d",&C1,&C2);

    int m = std::max(C1,C2),n = std::min(C1,C2);
    clock_t start,finish;

    for(int i=1;i<=m;i++){
        if(i==n)
            start=clock();
        else if(i==m)
            finish=clock();  
    }
    printf("所用时间为:%lf",(double)(finish-start)/CLOCKS_PER_SEC);
    system("pause");
    return 0;
}