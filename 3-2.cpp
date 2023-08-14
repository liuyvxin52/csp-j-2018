//2.
#include<stdio.h>
int main()
{
	int x;
    scanf("%d",&x);
    int res=0;
    for(int i=0;i<x;++i)
    {
      	if(i*i%x==1)
        {
      		++res;
      	}
    }
    printf("%d",res);
    return 0;
}
/*
输入：15
输出：_________
参考答案：4
*/