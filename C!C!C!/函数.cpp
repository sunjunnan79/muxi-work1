//�˷��ĺ���,��Ҫ��ʱ�����
int factorial(int i){
    int q=1;
    for(int n=1;n<=i;n++)
        q*=n;
    return q;
}
//Number of digits����һ�������м�λ
int Nod(long long int m){
    int count=0,i;
	for(i=1;i<=m;i=10*i)
        count++;
    return count;
}
//sum of number����ÿһλ�����ܺ�
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