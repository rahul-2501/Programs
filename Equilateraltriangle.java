
public class equitriangle {

	public static void main(String[] args) 
	{
		
		int ar=5;
		for(int i=0;i<ar;i++)
		{
			for(int j=0;j<ar+i;j++)
			{
				int n=1+i;
				if(j>=ar-n)
				{
					System.out.print("*");
				}
				else
				{
					System.out.print(" ");
				}
				System.out.print(" ");
			}
			System.out.println();
		}
		

	}

}
