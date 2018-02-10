import java.util.Scanner;

public class Ex4 {
	public static void main(String arg[]) {
		Scanner scnr = new Scanner(System.in);
		int odd = 0, even = 0, i = 0, inp;

		while (i < 10) {
			inp = scnr.nextInt();
			if (inp % 2 == 0) {
				even++;
			} else {
				odd++;
			}
			i++;
		}

		System.out.println("You've entered " + odd + " odd numbers and " + even + " even numbers!");
	}
}