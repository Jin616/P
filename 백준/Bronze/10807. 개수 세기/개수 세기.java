import java.util.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		br.readLine();
		StringTokenizer stk = new StringTokenizer(br.readLine());
		int count = 0;
		
		String n = br.readLine();
		
		while(stk.hasMoreTokens()) {
			if(n.equals(stk.nextToken())) count++;
		}
		
		System.out.println(count);
	}
}