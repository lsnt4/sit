public class LEx6 {
	public static void main(String args[]) {
		int x = 0;
		int y = 0;
		int z = 0;

		for (x = 0; x <= 5; x++) {
			System.out.print("* * * * *     ");
			for (y = 5; y >= x; y--) {
				System.out.print(" ");
			}
			for (z = 0; z <= x; z++) {
				System.out.print("* ");
			}
			System.out.println();
		}

	}
}