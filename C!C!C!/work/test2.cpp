#include <stdio.h>
#include <windows.h>
int main(){
    int score;
    printf("������ɼ�score(0=<score<=100):");
    scanf("%d",&score);
    if(score<60&&score>=0)
        printf("�ɼ�:%d,�ȵ�:E",score);
    else if(score>=60&&score<70)
        printf("�ɼ�:%d,�ȵ�:D",score);
    else if(score>=70&&score<80)
        printf("�ɼ�:%d,�ȵ�:C",score);
    else if(score>=80&&score<90)
        printf("�ɼ�:%d,�ȵ�:B",score);
    else if(score>=90&&score<=100)
        printf("�ɼ�:%d,�ȵ�:A",score);
    else
        printf("������������Χ");
    system("pause");
    return 0;
}