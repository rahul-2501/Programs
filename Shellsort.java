	public static void main(String[] args) 
	{
		

		int ar[] = {81,94,11,96,12,35,17,95,28,58,41,75,15};
		Integer temp = 0;
		int j=0;
		for(int gap=ar.length/2;gap>0;gap=gap/2)
		{
			for(int i=gap;i<ar.length;i++)
			{
				temp=ar[i];
				
				for(j=i;j>=gap && temp.compareTo(ar[j-gap])<0 ;j=j-gap)
				{
					ar[j]=ar[j-gap];
				}
				ar[j]=temp;
			 }
		}
    
                for (int i=0;i<ar.length;i++) 
		{
			
		System.out.print(ar[i]+" ");
		
		}
    
         }
		



//output:  11 12 15 17 28 35 41 58 75 81 94 95 96
