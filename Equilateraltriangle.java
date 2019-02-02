
public class equitriangle {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int ar=5;
		for(int i=0;i<ar;i++)
		{
			for(int j=0;j<ar+i;j++)
			{
				int n=1+i;
				if(j>=ar-n && j<=ar*10)
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
