public static void quicksrt(int a[],int left,int right)
	
	{
		int pivot;
		if(left<right)
		{
			pivot=part(a,left,right);
			
			quicksrt(a,pivot+1,right);
			quicksrt(a,left,pivot-1);
	
		}
	}
		
	public static int part(int a[],int left,int right)
		{
		
		   int pivot=a[right];
		   int j=left-1;
		   int temp;
		   for(int i=left;i<right;i++)
		   {
			if(a[i]<=pivot)
			{
				j++;
				
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		   }
			
			
			    temp=a[j+1];
				a[j+1]=a[right];
				a[right]=temp;	
		
		
		return j+1;
	
		}

		
	public static void main(String[]args)
	{
		
		
		int a[]= {1,2,3,2,8,4,1,5,3,8,4};
		
		quicksrt(a,0,a.length-1);
		
		for(int i=0;i<a.length;i++)
		{
			
			System.out.print(a[i]+" ");
		}
		
		
		
	}
