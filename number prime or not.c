#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int t=0;
	int c=0;
	printf("\nEnter a number");
	scanf("%d",&n);
	t=n;
	//printf("\nlen=%d",t);
	for(int i=t;i>0;i--)
	{
		if((no%i)==0)
		c++;
	}
	if(c==2)
	{
	printf("\nprime");
	}	
	else
	{
		printf("\nnot a prime");
	}
return 0;
}
