#include <stdio.h>
#include <windows.h>
#include <math.h>
//确实找不到问题,难道是我对复数的理解有问题吗?
int main(){
    float R1,R2,P1,P2;
    double x1,x2,y1,y2;
    printf("请分别输入R1,P1,R2,P2");
    scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
    y1 = sin(P1)*R1;
    y2 = sin(P2)*R2;
    x1 = cos(P1)*R1;
    x2 = cos(P2)*R2;
    x1 = x1*x2-y1*y2;
    x2 = y1*x2+y2*x1;
    if(x2>0)
        printf("%.2lf+%.2lfi",x1,x2);
    else if(x2=0)
        printf("%.2lf",x1);
    else
        printf("%.2lf%.2lfi",x1,x2);
    system("pause");
    return 0;
}