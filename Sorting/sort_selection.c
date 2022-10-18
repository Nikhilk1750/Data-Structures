



#include<stdio.h>
void sort_sel(int *arr,int n)
{
int i,j;
for(i=0;i<=n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(arr[i]>arr[j])
                        {
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
printf("After Sorting the Elements\n");
        for(i=0;i<n;i++)
                printf("arr[%d] = %d\n ",i,arr[i]);
       printf("\n");
}
int main()
{
        int arr[50];
        int i,j,n;
	printf("Enter the no.of Elements:");
	scanf("%d",&n);
	printf("Enter the array elements\n");
        for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
       printf("\n"); 
  
printf("Before Sorting the Elements\n");
        for(i=0;i<n;i++)
                printf("arr[%d] = %d\n ",i,arr[i]);
       printf("\n");
sort_sel(arr,n);
}

