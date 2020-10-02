#include<stdio.h>
int main()
{
	int n,i,j,temp,flag=0;
	printf("Enter the no to be sorted : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d integers : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
				flag=1;
			}
			else
			    break;
		}
		if(flag)
		{
			a[j+1]=temp;
		}
	}
	printf("The sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
