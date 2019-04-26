#include<stdio.h>
void merge(int a[],int temp[],int left,int mid,int right);
void ms(int a[],int temp[],int left,int right)
{
int mid;
if(right>left)
{
	mid=(right+left)/2;
	ms(a,temp,left,mid);
	ms(a,temp,mid+1,right);
	merge(a,temp,left,mid+1,right);

    }

  }

void merge(int a[],int temp[],int left,int mid,int right)
{
int leftend,i,size,temp1;;
leftend=mid-1;
size=right-left+1;
temp1=left;

while(left<=leftend && mid<=right)
{
	if(a[left]<=a[mid])
{
       temp[temp1]=a[left];
       temp1=temp1+1;
 	left=left+1;	
       
 	}
else{
      temp[temp1]=a[mid];
	temp1=temp1+1;
mid=mid+1;
}
 }

while(left<=leftend)
{
 temp[temp1]=a[left];
 temp1=temp1+1;
 left=left+1; 
}

while(mid<=right)
{
 temp[temp1]=a[mid];
 temp1=temp1+1;
 mid=mid+1;

 }


for (i=0;i<size;i++)
{
   a[right]=temp[right];;
right=right-1;
}

}



int main()
{

int n;
printf("enter the value of max");
scanf("%d",&n);
 int a[n];
int temp[n];

for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int left=0;
int right=n-1;

ms(a,temp,left,right);

for(int i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

return 0;
}


