#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
    int n,i,m=0;
    printf("ÇëÊäÈë¼ì²â´ÎÊı:");
    scanf("%d",&n);
    char str[n][100];
    int count[n];
    while(n--){
        printf("ÇëÊäÈë¼ì²â×Ö·û´®:");
        scanf("%s",&str[m]);
        count[m]=0;
        for(i=0;i<strlen(str[m]);i++)
            if(str[m][i]<='9'&&str[m][i]>='0')
                count[m]++;
        m++;                   
    }
    for(i=0;i<m;i++)
        printf("%d\n",count[i]);
    
    system("pause");
    return 0;
}