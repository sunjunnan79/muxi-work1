#include <stdio.h>
#include <windows.h>
int main()
{ int a,b,c;
  printf("�����������ε����߱߳�");
  scanf("%d%d%d",&a,&b,&c);
  if (a+b>c && b+c>a && a+c>b)
  {if (a==b||a==c||b==c){
    if(a==b&&b==c)
    {printf("��������Ϊ����������1");}
    else
    {printf("��������Ϊ����������2");}
  }
  else
  {printf("��������Ϊһ��������3");}
  }
  else
  {printf("�޷�����������0");}
  system("pause");
  return 0;

}