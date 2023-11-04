#include <stdio.h>
#include <windows.h>

int main(){
    long long int a;
    int count = 0;
    printf("请输入一个整数:");
    scanf("%d",&a);
    for(long long int i=1;i<=a;i=10*i)
        count++;
    char str[count+1];
    sprintf(str,"%d",a);
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    for(int i = 0;i<count;i++)
        switch (str[i]){
            case '0':
                count0++;
                break;
            case '1':
                count1++;
                break;
            case '2':
                count2++;
                break;
            case '3':
                count3++;
                break;
            case '4':
                count4++;
                break;
            case '5':
                count5++;
                break;
            case '6':
                count6++;
                break;
            case '7':
                count7++;
                break;
            case '8':
                count8++;
                break;
            case '9':
                count9++;
                break;
        }
    if(count0!=0)
        printf("0:%d\n",count0);
    if(count1!=0)
        printf("1:%d\n",count1);
    if(count2!=0)
        printf("2:%d\n",count2);
    if(count3!=0)
        printf("3:%d\n",count3);
    if(count4!=0)
        printf("4:%d\n",count4);
    if(count5!=0)
        printf("5:%d\n",count5);
    if(count6!=0)
        printf("6:%d\n",count6);
    if(count7!=0)
        printf("7:%d\n",count7);
    if(count8!=0)
        printf("8:%d\n",count8);
    if(count9!=0)
        printf("9:%d\n",count9);
    system("pause");
    return 0;
}