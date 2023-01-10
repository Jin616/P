import java.util.*;

class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int count = 0;
		int t = sc.nextInt();
		
		for(int i=0; i<t; i++) {
			String str = sc.next();
			
			while(str.length()>1) {
				String a = str.substring(0, 1);
				if(a.equals(str.substring(1, 2))) str = str.substring(1);
				else if(str.substring(1).contains(a)) break;
				else str = str.substring(1);
			}
			
			if(str.length()==1) count++;
		}
		
		System.out.println(count);
	}
}