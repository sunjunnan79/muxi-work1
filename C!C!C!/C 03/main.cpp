#include <stdio.h>
#include <windows.h>
int main(){
    int i,b;
    char a = '*',c = ' ';
    for(b=5;b!=-1;b=b-2){
    for(i=(5-b)/2;i!=0;i--){
    printf("%c",c);}
    for(i=b;i!=0;i--){
        printf("%c",a);
    }
    printf("\n");}
    for(b=3;b!=7;b=b+2){
    for(i=(5-b)/2;i!=0;i--){
    printf("%c",c);}
    for(i=b;i!=0;i--){
        printf("%c",a);
    }
    printf("\n");}
    system("pause");
    return 0;
}
