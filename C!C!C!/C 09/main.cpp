#include <stdio.h>
#include <windows.h>
int main(){
    int year,month,day,i,sum=0;

    printf("请输入年月日(按以下形式2023-6-25):");
    scanf("%d-%d-%d",&year,&month,&day);

    for(i=1;i<month;i++){
        switch (i)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            sum+=31;
            break;
        case 2:
            sum+=28;
            break;
        case 4:case 6:case 9:case 11:
            sum+=30;
            break;
        }
    }

    if(year%4 == 0 && year%1000 != 0 && month>=3)
        sum +=1;

    sum+=day;

    printf("%d-%d-%d是该年的第%d天",year,month,day,sum);

    system("pause");
    return 0;


}