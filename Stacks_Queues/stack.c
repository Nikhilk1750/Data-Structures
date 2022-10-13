// create a stack and push 1,2,3 and pop once - print after even push and pop 


#include<stdio.h>
#include<stdlib.h>
#define Size 4
int Top=-1, inp_arr[Size];
void push()
{
        int x;
        
        if(Top==Size-1)
        {
                printf("\nOverflow!!");
        }
        else
        {
                printf("\nEnter element to be inserted to the stack:");
                scanf("%d",&x);
                Top=Top+1;
                inp_arr[Top]=x;
        }
}
 
void pop()
{
        if(Top==-1)
        {
                printf("\nUnderflow!!");
        }
        else
        {
                printf("\nPopped element:  %d",inp_arr[Top]);
                Top=Top-1;
        }
}

void show()
{


        if(Top==-1)
        {
                printf("\nUnderflow!!");
        }
        else
        {
                printf("\nElements present in the stack: \n");
                for(int i=Top;i>=0;--i)
                        printf("%d\n",inp_arr[i]);
      }
}
 
int main()
{
	int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 
