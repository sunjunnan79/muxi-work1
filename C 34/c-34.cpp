#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int A,A1,B,B1,count1=0,count2=0,t;
    printf("请输入划拳次数:");
    scanf("%d",&t);
    while(t--){
        printf("请分别输入甲喊 甲划 乙喊 乙划:");
        scanf("%d%d%d%d",&A,&A1,&B,&B1);
        if(A1==A+B&&B1!=A+B)
            count2++;
        if(A1!=A+B&&B1==A+B)
            count1++;
        }
    printf("甲喝的次数为%d,乙喝的次数为%d",count1,count2);
    system("pause");
    return 0;
}