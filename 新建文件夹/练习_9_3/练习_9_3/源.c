#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int back_bit(int n)
{
	int count = 0;//创建一个计数器。
	while (n)//如果n不为零，则证明n中有1，进入循环。
	{
		n = n & (n - 1);//将n（二进制位中)中最右边的一个1去除。
		//eg.
		//n = 3 =>011(前面那些位都是0，对结果影响不大，就省略了。)
		//n -1 = 2 => 010
		//n = n & (n-1) = 010      count++ = 1;
		//n = 2 =>010
		//n - 1 = 1 => 001
		//n = n & (n-1) = 000      count++ = 2;
		count++;//去除之后，计数器加1，证明n（二进制位中）至少有一个1。
		//返回判断n是否等于0，不等于0则证明n中还有1（在二进制为中），继续循环。若n为0，则结束循环。
	}
	return count;//返回计数器中的值，即为1（在二进制为中）的个数。
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = back_bit(n);//计算1的个数的函数，其返回值就是1的个数。
	printf("二进位中1的个数是 %d\n", i);
		return 0;
}
