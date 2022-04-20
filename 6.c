//选择排序
#include <stdio.h>
#include<stdlib.h>
#define N 100
void swapmin(int* p, int n)
{
	int i = 0;
	int get = 0;
	int min = 100000;
	for (i = 0; i < n - 1; i++)
	{
		if (p[i] <= p[i + 1] && p[i] <= min)
		{
			min = p[i];
		}
		else if (p[i + 1] <= p[i] && p[i + 1] <= min)
		{
 			min = p[i + 1];
 		}
		else
		{
			min = min;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (p[i] == min)
		{
			get = i;
			break;
		}
	}
	int tmp = 0;
	tmp = p[0];
	p[0] = p[get];
	p[get] = tmp;
}
void Bubble_sort(int* p, int n)
{
	int i;
	for (i = 0; i < n - 1; i++)
	{
		swapmin(p + i, n - i);
		int a = 0;
		for (a = 0; a < n; a++)
		{
			printf("%d ", p[a]);
		}
		printf("\n");
	}
}
int main()
{
	/********** Begin **********/
	int i = 0;
	int count = 0;
	int arr[N] = { 0 };
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", arr + i);
	}
	Bubble_sort(arr, count);
	/********** End **********/
	return 0;
}
