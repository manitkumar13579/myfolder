#include<stdio.h>
int main()
{
	int i,j,s1,s2,a,k;
        scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(s1=0;s1<=a-i;s1++)
			printf(" ");
		printf("*");
		if(i==(a+1)/2+1)
		{
			for(j=0;j<=i*2-3;j++)
				printf("*");
		}
		else
		{
		for(s2=2;s2<i*2;s2++)
			printf(" ");
		}
		printf("*");
		for(j=0;j<=a-i;j++)
	    	printf(" ");
		if(i==1 || i==(a/2)+1 || i==a)
		{
			for(k=0;k<a;k++)
				printf("*");
			printf("\n");
		}
		else
		{
			printf("*");
			for(k=0;k<a-2;k++)
				printf(" ");
			printf("*\n");
		}

	}
		return 0;
	}
