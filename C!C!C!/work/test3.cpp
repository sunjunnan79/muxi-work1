#include <stdio.h>
#include <windows.h>
int main(){
    int score,m;
    printf("请输入成绩score(0=<score<=100):");
    scanf("%d",&score);
    if(score>=0&&score<=100){
        m=score/10;
        switch(m){                    
        case (6):
            printf("成绩:%d,等第:D",score);break;
        case (7):
            printf("成绩:%d,等第:C",score);break;
        case (8):
            printf("成绩:%d,等第:B",score);break;
        case (9):
            printf("成绩:%d,等第:A",score);break;
        case (10):
            printf("成绩:%d,等第:A",score);break;
        default:
            printf("成绩:%d,等第:E",score);           
        }
    }
    else
        printf("输入结果超出范围");
    system("pause");
    return 0;
}