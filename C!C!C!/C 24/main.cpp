#include <stdio.h>
#include <windows.h>

//Number of digits计算一个整数有几位
int Nod(long long int m){
    int count=0,i;
	for(i=1;i<=m;i=10*i)
        count++;
    return count;
}

//sum of number计算后n位数的总和
int SoN(long long int m,int n){
    int sum=0,i=n;
	long long int j=m;
    while(i--){
        sum+=j%10;
        j/=10;
    }
    return sum;
}

//将一个整数转化为int字符串型
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
	printf("请输入正整数m:");
	scanf("%lld",&m);
    count=Nod(m);//求位数
	sum = SoN(m,count);//求原来各个数的总和
    count =Nod(sum);//求求和后的位数
    int a[count];
    to_arrary(sum,a);//将总和转化为字符串型
    while(count--){
        printf("%s ",b[a[count]]);
    }
    system("pause");
	return 0;   
}