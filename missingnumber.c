#include <stdio.h>

int main() 
{
	

	   int m;       
	   scanf("%d",&m);  // get the size of array 
 	   int a[m-1];  // initialize the array
	   static  int temp[1000];
	   for(int i=0;i<m-1;i++)
	   {
	       scanf("%d",&a[i]);
	   }
	   for(int i=0;i<m-1;i++)
	   {
	       temp[a[i]-1]=1;
	   }
	   
	   for(int i=0;i<m;i++)
           {
	           if(temp[i]!=1)
	           {
	           printf("the missing number is:%d \n",(i+1));
	           }
	           
           }
	
	return 0;
}

/*   sample input 
   
    5
    1 5 3 2
    
    the missing number is: 2
*/
