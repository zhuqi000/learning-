#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//¼òÒ×°æ½×³ËºÍ
int main()
{
	int n;
	int jc = 1;
	int sum=0;
	int x=1;
	scanf("%d", &n);
	
	do
	{
		jc = jc * x;
		x++;
		sum = sum + jc;
	} while (x <= n);
	
	
	
	
	
	
	
	//while (x <= n)
	//{
	//	jc = jc * x;
	//	x++;
	//	sum = sum + jc;
	//}



	//for (x=1; x<=n; x++)
	//{
	//	jc = jc * x;
	//	sum = sum + jc;
	//}
	printf("%d\n", jc);
	printf("%d", sum);
	return 0;
}