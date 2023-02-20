#include<stdio.h>
main()
{
	int n,a,b,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		
		scanf("%d",&a);
		if(i==1)
		 b=a;
		 if(a<b)
		 b=a;
		 i++;
	}
	printf("%d",b);
}
   

	
	
