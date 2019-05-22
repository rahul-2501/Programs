public static int BinarySearch(int a[],int num,int left,int right )
	{
		int mid;
		if(right>=left)
		{

			mid=left+(right-left)/2;
			if(num==a[mid])
			{
				return a[mid];
			}
			else if(num<=a[mid])
			{
				return  BinarySearch(a,num,left,mid-1);
				
			}
			else
			{
			   return  BinarySearch(a,num,mid+1,right);
			}

		
	}
		return -1;
	}

	
	public static void main(String[] args)
	{
         int a[]= {1,4,23,35,58,79,123,135,144,147,178,189};
         
                    System.out.println(BinarySearch(a,23,0,11));   //returns 23
                     System.out.println(BinarySearch(a,60,0,11));  //returns -1
		  
		
	}
