import java.util.*;
import java.lang.*;
import java.math.BigInteger;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner in = new Scanner(System.in);
		int t = in.nextInt() ;
		
		while(t-- > 0 ){
			BigInteger x = BigInteger.valueOf(in.nextInt()) ;
			
			System.out.println(factorial(x));
			
		}
				
		
	}
	
	public static BigInteger factorial(BigInteger n) {
	    BigInteger result = BigInteger.ONE;

	    while (!n.equals(BigInteger.ZERO)) {
	        result = result.multiply(n);
	        n = n.subtract(BigInteger.ONE);
	    }

	    return result;
	}
}