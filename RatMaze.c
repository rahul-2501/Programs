#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int prow[]={0,0,-1,1};
int pcol[]={1,-1,0,0};
bool canmove(int a[4][4],int visit[4][4],int row,int col);
void ratmaze(int a[4][4],int visit[4][4],int row,int col,int desrow,int descol,int move)
{
  if((row==desrow) && (col==descol))
{
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
		{
 		   printf("%d ",visit[i][j]);
		}
            printf("\n");
	}
}
else{
      int size= sizeof(prow)/sizeof(prow[0]);
 	for(int index=0;index<size;index++)
	{
 	   int newrow= row + prow[index];
	   int newcol= col + pcol[index];
        
        if(canmove(a,visit,newrow,newcol))
	{
	   move++;
            visit[newrow][newcol]=move;
          
	  ratmaze(a,visit,newrow,newcol,desrow,descol,move);
         move--;
         visit[newrow][newcol]=0;   
  
	 }
}
}
}


bool canmove(int a[4][4],int visit[4][4],int row,int col)
{
  if((row>=0&&row<4) && (col>=0&&col<4) && (visit[row][col]==0) &&(a[row][col]==1))
{
  return true;
}
 return false;

}     
 







int main()
{
  int a[4][4]={ {1,1,0,1},
	      {0,1,1,1},
	      {0,1,0,1},
	      {0,1,1,1} };
 int visit[4][4]={
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}};
visit[0][0]=1;
ratmaze(a,visit,0,0,3,3,1);

return 0;
}


