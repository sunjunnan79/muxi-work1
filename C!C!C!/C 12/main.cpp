#include <stdio.h>
#include <windows.h>
int main(){
    int n,count=0;
    printf("����������n:");
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n/=2;
        printf("%d��2=%d\n",n*2,n);    
            count++;}
            
        else{
            n = 3*n+1;
        printf("3X%d+1=%d\n",(n-1)/3,n);    
            count++;}
    }
    printf("Ҫ����%d�ο����Ȳ���������ܵõ�n=1:",count);
    system("pause");
    return 0;
}