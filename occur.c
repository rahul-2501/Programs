#include<stdio.h>
typedef struct node
{
int key;
int value;
}node;

int main()
{
int k=0;
char a[20];
char str[20];
node hashtable[20];
int size =20;
printf("enter the string");
scanf("%s",str);
for(int j=0;j<strlen(str);j++)
{    
int i= (int)str[j];
if(hashtable[i%size].key==str[j])
{ 
hashtable[i%size].value++;
continue;
}
hashtable[i%size].value=1;
hashtable[i%size].key=str[j];
a[k]=str[j];
k++;
}
for(int i=0;i<strlen(a);i++)
{
int j=(int) a[i];
printf(" %c :\t%d\n",a[i],hashtable[j%size].value);

}
return 0;
}
