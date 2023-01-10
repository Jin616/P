import java.util.*;


class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		String num = sc.next();
		int answer = 0;
		
		for(int i=0; i<t; i++) {
			answer += Integer.parseInt(num.substring(i, i+1));
		}
		
		System.out.println(answer);
	}
}