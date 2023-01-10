import java.util.*;

class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		
		for(int i=97; i<123; i++) {
			int t = -1;
			for(int j=0; j<str.length(); j++) if(t==-1&&str.charAt(j)==i) t = j;
			System.out.print(t + " ");
		}
	}
}