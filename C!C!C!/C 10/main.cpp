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

    printf("请问要输入几个同学的数据?:");
    scanf("%d",&n);
    struct student students[n];

    for(i=0;i<n;i++){
        printf("请输入%d号同学的学号,姓名,分数:",i+1);
         scanf("%s %s %f", students[i].id, students[i].name, &students[i].score);
        sum+=students[i].score;
    }

    average = sum/n;
    printf("这%d位同学的平均分为:%.2f\n",n,average);

    printf("低于平均分的同学有:");
    for(i=0;i<n;i++){
        if(students[i].score<average){
            printf("%s %s",students[i].id,students[i].name);
        }
    }
    
    system("pause");
    return 0;
    

}