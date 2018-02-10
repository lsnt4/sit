import java.util.Scanner;

public class Ex3 {
	public static void main(String args[]) {
		Scanner scnr = new Scanner(System.in);
		int a, b, c, max, min;

		System.out.print("Enter first number: ");
		a = scnr.nextInt();
		System.out.print("Enter second number: ");
		b = scnr.nextInt();
		System.out.print("Enter third number: ");
		c = scnr.nextInt();

		if(a >= b) {
			max = a;
			min = b;
			if(c > max) {
				max = c;
			}
			if(c < min) {
				min = c;
			}
		} else {
			max = b;
			min = a;
			if(c > max) {
				max = c;
			}
			if(c < min) {
				min = c;
			}
		}

		System.out.println("Smallest: " + min + "\n" + "Largest: " + max);

	}
}