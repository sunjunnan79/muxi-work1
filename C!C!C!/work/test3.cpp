#include <stdio.h>
#include <windows.h>
int main(){
    int score,m;
    printf("������ɼ�score(0=<score<=100):");
    scanf("%d",&score);
    if(score>=0&&score<=100){
        m=score/10;
        switch(m){                    
        case (6):
            printf("�ɼ�:%d,�ȵ�:D",score);break;
        case (7):
            printf("�ɼ�:%d,�ȵ�:C",score);break;
        case (8):
            printf("�ɼ�:%d,�ȵ�:B",score);break;
        case (9):
            printf("�ɼ�:%d,�ȵ�:A",score);break;
        case (10):
            printf("�ɼ�:%d,�ȵ�:A",score);break;
        default:
            printf("�ɼ�:%d,�ȵ�:E",score);           
        }
    }
    else
        printf("������������Χ");
    system("pause");
    return 0;
}