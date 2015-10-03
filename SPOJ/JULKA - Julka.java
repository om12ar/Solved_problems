import java.util.*;
import java.lang.*;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
			Scanner in = new Scanner(System.in);
		int t = 10 ;
		
		while(t-- > 0 ){
			BigInteger x = in.nextBigInteger() ;
			BigInteger y = in.nextBigInteger() ;
		
			
			BigInteger temp = (x.subtract(y)).divide(BigInteger.valueOf(2)) ;
			
			System.out.println(temp.add(y));
			System.out.println(temp );
			
		}
	}
}