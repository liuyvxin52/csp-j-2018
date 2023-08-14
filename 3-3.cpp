//3.
#include<iostream>
using namespace std;
int n,m;
int findans(int n,int m)
{
    if(n==0) return m;
    if(m==0) return n%3;
    return findans(n-1,m)-findans(n,m-1)+findans(n-1,m-1);
}
int main()
{
    cin>>n>>m;
    cout<<findans(n,m)<<endl;
    return 0;
}
/*
输入：5 6
输出：_________
参考答案：8
*/