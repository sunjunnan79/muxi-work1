#include <stdio.h>
#include <windows.h>
int main(){
    char picture;
    int Edge_length;
    printf("������߳�:");
    scanf("%d",&Edge_length);
    printf("������ͼ��:");
    getchar();
    scanf("%c",&picture);
    int count1=Edge_length,count2;
    while(count1--){
        count2 = Edge_length;
        if(count1==Edge_length-1){
            while(count2--)
                printf("%c",picture);
            printf("\n");
        }
        else if(count1==0){
            while(count2--)
                printf("%c",picture);
            printf("\n");
        }
        else
            {printf("%c",picture);
            count2=count2-2;
            while(count2--)
                printf(" ");
            printf("%c\n",picture);
            }

    }
    system("pause");
    return 0;
}