



#include<stdio.h>

void swap(int *arr,int lb,int end)
{
        int temp;
        temp = arr[lb];
        arr[lb] = arr[end];
        arr[end] = temp;
}

int partition(int *arr,int lb,int ub)
{
        int pivot = arr[lb],start = lb,end = ub;
        while(start<=end)
        {
                while(pivot>=arr[start])
                        start++;
                while(pivot<arr[end])
                        end--;
                if(start<end)
                        swap(arr,start,end);
        }
        swap(arr,lb,end);
        return end;
}


void quick_sort(int *arr,int lb,int ub)
{
        int loc;
        if(lb<ub)
        {
                loc = partition(arr,lb,ub);
                quick_sort(arr,lb,loc-1);
                quick_sort(arr,loc+1,ub);

        }
}


int main()
{
	int n,i;
	printf("Enter the No.of array element\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Before Sorting the Array element are\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n ",i,arr[i]);
	printf("\n");

	quick_sort(arr,0,n-1);
	
	printf("After Sorting an Array element are\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n ",i,arr[i]);
	printf("\n");
}

