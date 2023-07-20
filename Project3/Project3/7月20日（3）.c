#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 初学二分查找
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = 9;
	int k=2;
	scanf("%d",&k);
	while (left <= right)
	{
		int pj = (left + right) / 2;
		if (k > arr[pj])
		{
			left = pj + 1;
		}
		else if (k < arr[pj])
		{
			right = pj - 1;
		}
		else
		{
			printf("%d", pj);
			break;
		}
	}
	if (left >= right)
	{
		printf("wu");
	}
	return 0;
}