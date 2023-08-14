/*
4. （最大公约数之和）下列程序想要求解整数n
    的所有约数两两之间最大公约数的和对 10007 求余后的值，试补全程序。
    （第一空2 分，其余 3 分）举例来说，4 的所有约数是 1, 2, 4 。
    1 和 2 的最大公约数为 1 ；2 和 4 的最大公约数为 2 ；1 和 4 的最大公约数为 1 。
    于是答案为1 + 2 + 1 = 4。
    要求getDivisor 函数的复杂度为O(n−−√)，gcd 函数的复杂度为O(logmax(a,b))
*/
#include<iostream>
using namespace std;
const int N=110000,P=10007;//P：对结果取模的10007
int n;
int a[N],len;
int ans;
void getDivisor()
{
    len=0;//初始化len
    for(int i=1;/*1->*/i*i/*<-1*/<=n;++i)
        if(n%i==0)
        {
          a[++len]=i;
          if(/*2->*/n/i/*<-2*/!=i) a[++len]=n/i;
        }
}
int gcd(int a,int b)
{
    if(b==0)
    {
        /*3->*/return a/*<-3*/;//递归的终点
    }
    return gcd(b,/*4->*/a%b/*<-4*/);
}
int main()
{
    cin>>n;
    getDivisor();//得到len的值
    ans=0;
    for(int i=1;i<=len;++i)
    {
        for(int j=i+1;j<=len;++j)
        {
        	ans=(/*5->*/ans+gcd(a[i],a[j])/*<-5*/)%P;//题目要求对10007取模，所以加上%P
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*
参考答案：
i*i
n/i
return a
a%b
ans + gcd(a[i], a[j])
*/