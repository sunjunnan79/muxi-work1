#include <stdio.h>
#include <windows.h>
int main(){
    int i,n;
    char a[4][100],b;

    for(i=0;i<3;i++){
        printf("ÇëÊäÈë%dºÅ×Ö·û´®:",i+1);
        scanf("%s",a[i]);
    }
    
    for(n=0;n<3;n++)
        for(i=0;i<3;i++)
            if (i>0&&a[n][i]<a[n][i-1]){
                b = a[n][i-1];
                a[n][i-1] = a[n][i];
                a[n][i] = b;
                i =i-2;
            }

    for(n=0;n<3;n++){
        for(i=0;i<3;i++)
            printf("%c ",a[n][i]);
        printf("\n");
    }

    system("pause");
    return 0;
}
