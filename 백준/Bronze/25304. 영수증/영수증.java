import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int x = Integer.parseInt(br.readLine());
		int n = Integer.parseInt(br.readLine());
		
		int sum = 0;
		
		StringTokenizer stk;
		for(int i=0; i<n; i++) {
			stk = new StringTokenizer(br.readLine());
			
			sum += Integer.parseInt(stk.nextToken())*Integer.parseInt(stk.nextToken());
		}
		
		if(x==sum) System.out.println("Yes");
		else System.out.println("No");
	}
}