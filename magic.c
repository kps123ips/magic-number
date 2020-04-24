#include<stdio.h>
int main()
{
	int n,sum,num,rem;
	printf("Enter a Number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
		if(n==0&&sum>=10)
		{
			n=sum;
			sum=0;
		}
	}
	if(sum==1)
	printf("It is a Magic Number");
	else
	printf("It is not a Magic Number");
	getch();
}
