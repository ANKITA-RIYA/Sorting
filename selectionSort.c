#include<stdio.h>
int smallest(int a[],int k,int n);
int main()
{
	int n,i,j,temp,pos,k;
	printf("Enter number of integers to be sorted : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d integers : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<=n-1;k++){
		pos=smallest(a,k,n);
		temp=a[k];
		a[k]=a[pos];
		a[pos]=temp;
	}
	printf("The sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
int smallest(int a[],int k,int n){
	int small = a[k],pos=k,j;
	for(j=k+1;j<=n-1;j++){
		if(small>a[j]){
			small=a[j];
			pos=j;
		}
	}
	return pos;
}
			
