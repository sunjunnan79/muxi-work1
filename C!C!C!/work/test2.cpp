#include <stdio.h>
#include <windows.h>
int main(){
    int score;
    printf("请输入成绩score(0=<score<=100):");
    scanf("%d",&score);
    if(score<60&&score>=0)
        printf("成绩:%d,等第:E",score);
    else if(score>=60&&score<70)
        printf("成绩:%d,等第:D",score);
    else if(score>=70&&score<80)
        printf("成绩:%d,等第:C",score);
    else if(score>=80&&score<90)
        printf("成绩:%d,等第:B",score);
    else if(score>=90&&score<=100)
        printf("成绩:%d,等第:A",score);
    else
        printf("输入结果超出范围");
    system("pause");
    return 0;
}