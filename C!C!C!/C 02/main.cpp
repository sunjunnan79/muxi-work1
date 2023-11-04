#include <stdio.h>
#include <windows.h>
int main(){
    int score1,score2;
    printf("请分别输入成绩1和成绩2:");
    scanf("%D%D",&score1,&score2);
    if (score1 <= 100 &&score2 <= 100)
    {   switch(score1>=60&&score2>=60){
        case 0:printf("it is not pass.");break;
        case 1:printf("it is pass.");break;}
    
    }else
    printf("it is error.");
    system("pause");
    return 0;
}