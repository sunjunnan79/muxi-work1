#include <stdio.h>
#include <windows.h>

//Number of digits����һ�������м�λ
int Nod(long long int m){
    int count=0,i;
	for(i=1;i<=m;i=10*i)
        count++;
    return count;
}

//sum of number�����nλ�����ܺ�
int SoN(long long int m,int n){
    int sum=0,i=n;
	long long int j=m;
    while(i--){
        sum+=j%10;
        j/=10;
    }
    return sum;
}

//��һ������ת��Ϊint�ַ�����
int to_arrary(long long int m,int a[]){
    int length = Nod(m);
    for(int i=0;i<length;i++){
        a[i]=m%10;
        m/=10;
    }
}

int main(){
    int count,sum;
    long long int m;
    char b[9][10]={"ling","yi","er","san","si","wu","qi","ba","jiu"};
	printf("������������m:");
	scanf("%lld",&m);
    count=Nod(m);//��λ��
	sum = SoN(m,count);//��ԭ�����������ܺ�
    count =Nod(sum);//����ͺ��λ��
    int a[count];
    to_arrary(sum,a);//���ܺ�ת��Ϊ�ַ�����
    while(count--){
        printf("%s ",b[a[count]]);
    }
    system("pause");
	return 0;   
}