//冒泡排序
#include <stdio.h>
#include<stdlib.h>
#define N 100
void Bubble_sort(int* p, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (p[j] >= p[j + 1])
			{
				int tmp = 0;
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
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