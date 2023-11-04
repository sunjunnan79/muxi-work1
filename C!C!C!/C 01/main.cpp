#include <stdio.h>
#include <windows.h>
int main()
{ int a,b,c;
  printf("请输入三角形的三边边长");
  scanf("%d%d%d",&a,&b,&c);
  if (a+b>c && b+c>a && a+c>b)
  {if (a==b||a==c||b==c){
    if(a==b&&b==c)
    {printf("该三角形为等腰三角形1");}
    else
    {printf("该三角形为等腰三角形2");}
  }
  else
  {printf("该三角形为一般三角形3");}
  }
  else
  {printf("无法构成三角形0");}
  system("pause");
  return 0;

}