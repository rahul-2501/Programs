#include <stdio.h>

int main() {
	

	 long int m;       
	   scanf("%li",&m);  // get the size of array 
 	   long int a[m-1];  // initialize the array
	   static long int temp[10000000];
	   for(long int i=0;i<m-1;i++)
	   {
	       scanf("%li",&a[i]);
	   }
	   for(long int i=0;i<m-1;i++)
	   {
	       temp[a[i]-1]=1;
	       }
	   
	   for(long int i=0;i<m;i++)
	       {
	           if(temp[i]!=1)
	           {
	           printf("the missing number is:%li \n",(i+1));
	           }
	           
	       }
	
	return 0;
}

/*   sample input 
   
    5
    1 5 3 2
    
    the missing number is: 2
*/
