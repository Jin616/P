import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] num = new int[5];
		int avg = 0;
		
		for(int i=0; i<5; i++) {
			num[i] = sc.nextInt();
			avg += num[i];
		}
		
		Arrays.sort(num);
		avg /= 5;
		
		System.out.println(avg);
		System.out.println(num[2]);
	}
}
