import java.math.BigInteger;

public class EulerFifteen {
	private static BigInteger factorial(BigInteger n) {
		if (n.equals(BigInteger.ZERO)) {
			return BigInteger.ONE;
		} else {
			return n.multiply(factorial(n.subtract(BigInteger.ONE)));
		}
	}

	public static void main(String[] args) {
		BigInteger w = new BigInteger("20");
		BigInteger h = new BigInteger("20");

		BigInteger paths = factorial(w.add(h)).divide(factorial(w).multiply(factorial(h)));

		System.out.println(paths);
	}
}