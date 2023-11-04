#include <stdio.h>
#include <windows.h>
int main(){
    int i,a,count1 = 0,count2 = 0;

    for(i=2;i<=100;i++){
        for(a=2;a<i;a++){
            if(i%a==0)
            count1 = 1;
        }
        if(count1 == 0){
            printf("%d ",i);
            count2++;

        if(count2 == 5){
            printf("\n");
            count2 = 0;}
        }
    count1 =0;
    }
    system("pause");
    return 0;
}