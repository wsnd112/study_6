//求两矩阵之和
#define M 10
#define N 10
int main()
{
	int a[M][N], b[M][N], sum[M][N],  i, j, m, n;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}