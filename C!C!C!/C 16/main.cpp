#include <stdio.h>
#include <windows.h>
int main(){
    int n,m,i,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;

    printf("������Ҫ���Ե�ʵ������n:");
    scanf("%d",&n);
    char a[n][100];
    int b[n][5];
    for(i=0;i<n;i++){
        printf("������%d���ַ���:",i+1);
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++){
        for(m=0;m<strlen(a[i]);m++)
            switch(a[i][m]){
                case 'a':count_a++;break;
                case 'e':count_e++;break;
                case 'i':count_i++;break;
                case 'o':count_o++;break;
                case 'u':count_u++;break;
            }

        b[i][0] = count_a;
        b[i][1] = count_e;
        b[i][2] = count_i;
        b[i][3] = count_o;
        b[i][4] = count_u;
        count_a=count_e=count_i=count_o=count_u=0;
    }
    for(i=0;i<n;i++)
    printf("%d���ַ����С�a���ֵĴ���Ϊ:%d e���ֵĴ���Ϊ:%d i���ֵĴ���Ϊ:%d o���ֵĴ���Ϊ:%d u���ֵĴ���Ϊ:%d\n",i+1,b[i][0],b[i][1],b[i][2],b[i][3],b[i][4]);

    system("pause");
    return 0;
}