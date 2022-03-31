//学习-编写判断一个正整数是否为素数的函数
#include <stdio.h>
int prime(int m)
{
	int i;
	if(m==1)
	{
		return 0;
	}
	else if(m==2)
	{
		return 1;
	}
	else
	{
		for(i=2;i<m;i++)
	{
		if(!(m%i))
		{
			return 0;
		}
	}
	return 1;
	}

}                         //prime()函数声明
int main()
{
	int a[10],i;  
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(i=0;i<10;i++)
	{
		if(prime(a[i])==1)
		printf("%d 是素数.\n",a[i]);
		else
		printf("%d 不是素数.\n",a[i]);
	}
	return 0; 
}