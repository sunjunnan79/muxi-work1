#include <stdio.h>
#include <windows.h>
int main(){
    int n,i;
    float sum=0,average;

    struct student
    {
        char id[20];
        char name[50];
        float score;
    };

    printf("����Ҫ���뼸��ͬѧ������?:");
    scanf("%d",&n);
    struct student students[n];

    for(i=0;i<n;i++){
        printf("������%d��ͬѧ��ѧ��,����,����:",i+1);
         scanf("%s %s %f", students[i].id, students[i].name, &students[i].score);
        sum+=students[i].score;
    }

    average = sum/n;
    printf("��%dλͬѧ��ƽ����Ϊ:%.2f\n",n,average);

    printf("����ƽ���ֵ�ͬѧ��:");
    for(i=0;i<n;i++){
        if(students[i].score<average){
            printf("%s %s",students[i].id,students[i].name);
        }
    }
    
    system("pause");
    return 0;
    

}