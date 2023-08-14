//4.
#include<stdio.h>
int n,d[100];
bool v[100];

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",d+i);
        v[i]=false;
    }
    int cnt=0;
    for (int i=0;i<n;++i)
    {
        if(!v[i])
        {
        	for(int j=i;!v[j];j=d[j])
            {
        		v[j]=true;
        	}
        	++cnt;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
/*
输入：10 7 1 4 3 2 5 9 8 0 6
输出：_________
参考答案：6
*/