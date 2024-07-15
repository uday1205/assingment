#include<stdio.h>
main()
{
	int a[4],i,j,temp;
	
	for (i=0;i<4;i++)
	{
		printf("\nENTER VALUE : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	    }
	}
	
		printf("\nMax Number is : %d",a[3],a[3]);
	
	
}
