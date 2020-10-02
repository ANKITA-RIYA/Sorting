#include<stdio.h>
int main()
{
	int n,i,j,temp,pos;
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
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
	printf("The sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
