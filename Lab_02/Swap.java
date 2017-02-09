class Swap
{
	public static void swapAwesomeness(AwesomeClass ac) {
		int temp = ac.a;
		ac.a = ac.b;
	  ac.b = temp;
	}


	public static void main (String[] args) throws java.lang.Exception
	{
		AwesomeClass ac = new AwesomeClass(2, 4);

		print(ac.a, ac.b);
		System.out.println();

		swapAwesomeness(ac);

		print(ac.a, ac.b);
	}

	public static void print(int a, int b) {
	  System.out.println("A is " + a);
	  System.out.println("B is " + b);
	}

	// Passed by value
	public static void swap(int a, int b) {
	  int temp = a;
	  a = b;
	  b = temp;
	}
}

class AwesomeClass {
	public int a = 2;
	public int b = 4;

	public AwesomeClass(int a, int b) {
		this.a = a;
		this.b = b;
	}
}
