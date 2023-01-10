import java.util.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int max=0;
		int n=1;
		int m=1;
		
		for(int i=0; i<9; i++) {
			StringTokenizer stk = new StringTokenizer(br.readLine());
			for(int j=0; j<9; j++) {
				int t = Integer.parseInt(stk.nextToken());
				if(t>max) {
					max = t;
					n = i+1;
					m = j+1;
				}
			}
		}
		
		System.out.println(max);
		System.out.println(n + " " + m);
	}
}