#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//复杂化的阶乘累加求和
int jiecheng(int n)
{
	int i=1;
	for (; n != 0; n--)
	{
		i = i * n;
	}
	return i;
}
int main()
{
	int x;
	scanf("%d", &x);
	int a = 1;
	int b=0;
	
	for (; x != 0; x--)
	{
		a = jiecheng(x);
		b = b + a;
	}
	printf("%d", b);
	return 0;
}