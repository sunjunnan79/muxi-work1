#include<stdio.h>
int main()
{
    float r, h, C, S1, S2, V1, V2;
    float PI = 3.14159;
    printf("��ֱ�����뾶r�͸�h:");
    scanf_s("%f%f", &r, &h);
    C = 2 * r * PI;
    S1 = r * r * PI;
    S2 = 4 * r * r * PI;
    V1 = 4 / 3 * r * r * r * PI;
    V2 = S1 * h * PI;
    printf("Բ�ܳ�=%.2f\n", C);
    printf("Բ���=%.2f\n", S1);
    printf("Բ������=%.2f\n", S2);
    printf("Բ�����=%.2f\n", V1);
    printf("Բ�����=%.2f\n", V2);
}