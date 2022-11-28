public class EulerOne {
	public static void main(String[] args) {
		int p = 0;
		for (int i = 0; i < 1000; i++) {
			if(i % 3 == 0 || i % 5 == 0) {
				p += i;
			}
		}
		System.out.print(p);
	}
}