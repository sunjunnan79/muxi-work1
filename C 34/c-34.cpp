#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int A,A1,B,B1,count1=0,count2=0,t;
    printf("�����뻮ȭ����:");
    scanf("%d",&t);
    while(t--){
        printf("��ֱ�����׺� �׻� �Һ� �һ�:");
        scanf("%d%d%d%d",&A,&A1,&B,&B1);
        if(A1==A+B&&B1!=A+B)
            count2++;
        if(A1!=A+B&&B1==A+B)
            count1++;
        }
    printf("�׺ȵĴ���Ϊ%d,�ҺȵĴ���Ϊ%d",count1,count2);
    system("pause");
    return 0;
}