#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
    int n,a,b,c;
    printf("��������Ҫ�ȽϵĴ���n:");
    scanf("%d",&n);
    char outcome[n][100];
    
    for(int i=0;i<n;i++){
        printf("�������%d����Ҫ�Ƚϵ�������a,b,c:",i+1);
        scanf("%d%d%d",&a,&b,&c);

        if(a+b>c){
            strcpy(outcome[i],"true");
            }
        else
            strcpy(outcome[i],"false");
    }

    for(int i=0;i<n;i++){
        printf("Case #%d: %s\n",i+1,outcome[i]);
    }

    system("pause");
    return 0;
}