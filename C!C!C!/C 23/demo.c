#include <windows.h>
#include <stdio.h>
int main(){
	int m,count1=0,count2=0,i;
	printf("������������m:");
	scanf("%d",&m);
	for(i=1;i<=m;i=10*i)count1++;
	printf("���������Ϊ%dλ��\n",count1);
	int a[count1];
	while(count1--){
        a[count2]=m%10;
        m/=10;
		printf("%dλ��Ϊ:%d\n",count2+1,a[count2]);
		count2++;
	}
	printf("�������ֵΪ:");
	for(i=0;i<count2;i++)
		printf("%d",a[i]);	
	system("pause");
    return 0;
}