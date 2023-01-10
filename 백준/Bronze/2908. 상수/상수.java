import java.util.*;

class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		int a = t/100 + 10*((t/10)%10) + 100*(t%10);
		
		t = sc.nextInt();
		int b = t/100 + 10*((t/10)%10) + 100*(t%10);
		
		if(a>b) System.out.println(a);
		else System.out.println(b);
	}
}