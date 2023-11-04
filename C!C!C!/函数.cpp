//乘方的函数,需要的时候就用
int factorial(int i){
    int q=1;
    for(int n=1;n<=i;n++)
        q*=n;
    return q;
}
//Number of digits计算一个整数有几位
int Nod(long long int m){
    int count=0,i;
	for(i=1;i<=m;i=10*i)
        count++;
    return count;
}
//sum of number计算每一位数的总和
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