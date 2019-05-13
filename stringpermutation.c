#include<stdio.h>
#include<string.h>

void stringper(char input[],char result[],int count[],int level,int size)
{
  
 if(level==size)
{
  for (int i=0;i<size;i++)
{
   printf("%c ",result[i]);
}
printf("\n");
}

 else
{
   for(int i=0;i<size;i++)
{
   if(count[i]==0)
{
  continue;
}
else{
  
   result[level]=input[i];
   count[i]--;
   stringper(input,result,count,level+1,size);
   count[i]++;
}
}
}
}

int main()
{
 
char input[]={'A','B','C'};
int size=(sizeof(input))/(sizeof(input[0]));
char result[size];
int count[]={1,1,1};
int level=0;
stringper(input,result,count,level,size);

return 0;
}

