




#include<stdio.h>


int main()
{
	int i,j,n;
	printf("Enter the No.of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	int temp;
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && arr[j-1] > arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
printf("After the sorting the elements\n");
for(i=0;i<n;i++)
printf("arr[%d]=%d\n",i,arr[i]);
}
