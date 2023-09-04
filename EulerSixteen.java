import java.math.BigInteger;

public class EulerSixteen {
	public static void main(String[] args) {
		BigInteger base = new BigInteger("2");
		BigInteger power = base.pow(1000);
		
		String powerString = power.toString();

		long sum = 0;
		for (int i = 0; i < powerString.length(); i++) {
			sum += Character.getNumericValue(powerString.charAt(i));
		}

		System.out.println(sum);
	}
}