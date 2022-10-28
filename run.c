#include<stdio.h>
#include<pthread.h>

int arr[9],n=10,i;

void *th()
{	
	int sum=0;
	float average;
	for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
	average=sum/n;
	printf("The average is:%f",average);
}

void *th1()
{

	int temp=arr[0];
	for(int i=1;i<=n;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
	}
	printf("\nThe Maximum is:=%d",temp);

}

