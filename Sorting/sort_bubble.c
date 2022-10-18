



#include<stdio.h>
#include<stdlib.h>
int main()
{
        int arr[50];
        int i,j,n;
	printf("Enter the no.of Elements:");
	scanf("%d",&n);
	printf("Enter the array elements:");
        for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
       printf("\n"); 
        for(i=1;i<=n-1;i++)
        {
                for(j=0;j<n-i;j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
       printf("\n");
}

