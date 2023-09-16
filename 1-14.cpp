//14. 为了统计一个非负整数的二进制形式中 1 的个数，代码如下：
//14. To count the number of 1s in binary form of a non-negative integer, the code is as follows:
int CountBit(int x)
{
	int ret=0;
	while(x)
	{
		ret++;
		___________;
	}
	return ret;
}
/*
则空格内要填入的语句是（ B ）。
A. x >>= 1
B. x &= x - 1
C. x |= x >> 1
D. x << 1
*/
//非编译运行文件，此为选择题
/*
Then the statement to be filled in the space is ( B ).
A. x >>= 1
B. x &= x - 1
C. x |= x >> 1
D. x << 1
*/
//Non-compiled run file, this is a multiple choice question
