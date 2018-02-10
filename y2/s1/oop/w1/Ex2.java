import java.util.Scanner;

public class Ex2 {
	public static void main(String args[]) {
		float len, wid, per;
		Scanner scnr = new Scanner(System.in);

		System.out.print("Length: ");
		len = scnr.nextFloat();
		System.out.print("Width: ");
		wid = scnr.nextFloat();

		per = (len + wid) * 2;

		System.out.println("Perimeter: " + per);
	}
}