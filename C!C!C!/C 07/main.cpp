#include <stdio.h>
#include <windows.h>
int main()
{
    int n;
    int a,sum;
    sum = 1;
    printf("��������Ҫ��������ָ���n:");
    while(scanf("%d",&n) != EOF)
    {
        if(n==-1)
        break;

        printf("������%d������:",n);
        while( n--)
        {
            scanf("%d",&a);
            if( a%2 != 0)
            sum *= a;
        }
        printf("������������ܺ�Ϊ:%d\n",sum);
        sum =1;
    printf("��������Ҫ��������ָ���n(����-1���˳�):");
    }
    system("pause");
    return 0;
}

