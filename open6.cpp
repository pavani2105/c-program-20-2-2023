#include<stdio.h>
main()
{
	int n,k=0,i;
	scanf("%d",&n);//enter a number
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		k=1;
		break;}
		if(k==0)
		printf("PRIME");
		
		else
		printf("NOT A PRIME");
		
	
	
}
