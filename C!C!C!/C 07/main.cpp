#include <stdio.h>
#include <windows.h>
int main()
{
    int n;
    int a,sum;
    sum = 1;
    printf("请输入你要输入的数字个数n:");
    while(scanf("%d",&n) != EOF)
    {
        if(n==-1)
        break;

        printf("请输入%d个数字:",n);
        while( n--)
        {
            scanf("%d",&a);
            if( a%2 != 0)
            sum *= a;
        }
        printf("你输入的数字总和为:%d\n",sum);
        sum =1;
    printf("请输入你要输入的数字个数n(输入-1以退出):");
    }
    system("pause");
    return 0;
}

