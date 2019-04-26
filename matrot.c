#include<stdio.h>

void matrot(int m,int n,int a[3][3])
{
   int row=0;
   int col=0;

int prev,curr;
while(row<m&&col<n)
{

  if(row+1==m || col+1==n)
{
 break;
}
 
 prev=a[row+1][col];

for(int i=col;i<n;i++)
{
  curr=a[row][i];
  a[row][i]=prev;
  prev=curr;
}
row++;

for(int i=row;i<m;i++)
{
  curr=a[i][n-1];
  a[i][n-1]=prev;
  prev=curr;
}
n--;

if(row<m)
{
  for(int i=n-1;i>=col;i--)
{
   curr=a[m-1][i];
   a[m-1][i]=prev;
   prev=curr;
}
}
m--;

if(col<n)
{
 for(int i=m-1;i>=row;i--)
{
  curr=a[i][col];
  a[i][col]=prev;
  prev=curr;
}
}
col++;   
}


for(int i=0;i<3;i++)
{
  for(int j=0;j<3;j++)
{
   printf("  %d",a[i][j]);
}
   printf("\n");
}

}

int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 matrot(3,3,a);

return 0;
}

  
