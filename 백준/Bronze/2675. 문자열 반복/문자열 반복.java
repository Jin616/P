import java.util.*;

class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for(int i=0; i<t; i++) {
			int r = sc.nextInt();
			String str = sc.next();
			String rep = "";
			for(int j=0; j<str.length(); j++) {
				for(int k=0; k<r; k++) {
					rep += str.substring(j, j+1);
				}
			}
			System.out.println(rep);
		}
	}
}