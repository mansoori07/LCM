#include<stdio.h>
int lcm(int,int);
main()
{
	int a,b,l;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	l= lcm(a,b);
	printf("LCM of %d & %d is ",a,b);
	printf("%d",l);
}
int lcm(int a,int b)
{
	static int p=1;
	if(p%a==0&&p%b==0)
	{
		return p;
	}
	else
	{
		p++;
		lcm(a,b);
		return p;
	}
}
