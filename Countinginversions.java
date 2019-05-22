public static int mergesrt(int a[],int temp[],int left,int right)
		{
		
		
		int mid;
		int inv=0;
		if(right>left)
		{
			mid=(right+left)/2;
			inv=mergesrt(a,temp,left,mid);
			inv+=mergesrt(a,temp,mid+1,right);
			inv+= merge(a,temp,left,mid+1,right);

		    }
		
		return inv;

		  }

		static int merge(int a[],int temp[],int left,int mid,int right)
		{
		int i=mid;
		int leftend,size,temp1;
		int inv=0;
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
		
		inv=  inv+ (i-left);
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
return inv;
		}
	

	public static void main(String[] args) {
		
	        int arr[] = new int[] { 1,8,9,20,3,7,30,2 }; 
	        int temp[]=new int [arr.length];
	        System.out.println(( mergesrt(arr,temp,0, arr.length-1)));  //output: 12
	}
