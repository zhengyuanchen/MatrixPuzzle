#include <stdio.h>
#include <math.h>
 main()
{
	int n;
	int y;
	int a1;
	int a2; 
	while(scanf("%d",&n))
	{
	if(n <= 0)//防止n<0 
	{
		break; 
	 } 
	for(int i = 0;i < n;++i)//使输出5行 
	{
	for(int j=0;j<n;++j)//使每行5个数 
	{
		if(i>(n-i-1)) 
		{
			a1=(n-1-i);
		}
		else
		{
			a1=i;
		}
		if(j>(n-j-1))
		{
			a2=(n-1-j);
		}
		else
		{
			a2=j;
		}
		if(a1>a2)
		{
			y=a2;
		}
		else
		{
			y=a1;
		} 
		printf("%d",y+1);	
	}
	printf("\n");
	}
	}
}
