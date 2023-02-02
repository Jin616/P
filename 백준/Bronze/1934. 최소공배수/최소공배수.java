import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
	
		int n = Integer.parseInt(br.readLine());
		
		StringTokenizer stk;
		for(int i=0; i<n; i++) {
			
			stk = new StringTokenizer(br.readLine());
			
			int a = Integer.parseInt(stk.nextToken());
			int b = Integer.parseInt(stk.nextToken());
			
			int A = a;
			int B = b;
			
			int t;
			
			int c; 
			
			while(true) {
				if(b>a) {
					t = a;
					a = b;
					b = t;
				}
				
				if(a%b==0) {
					c = b;
					break;
				} else {
					a = a % b;
				}
			}
			
			int total = (A/c)*(B/c)*c;
			sb.append(total).append("\n");
		}
		
		System.out.println(sb);
		
	}
}
