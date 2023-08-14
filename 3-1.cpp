//1.
#include<stdio.h>
char st[100];
int main()
{
	scanf("%s",st);
	for(int i=0;st[i];++i)
	{
		if('A'<=st[i]&&st[i]<='Z')
		{
			st[i]+=1;
		}
	}
	printf("%s\n",st);
	return 0;
}
/*
输入：QuanGuoLianSai
输出：_________
参考答案：RuanHuoMianTai
*/