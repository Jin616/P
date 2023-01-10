import java.util.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		int answer = 0;
		
		for(int i=0; i<str.length(); i++) {
			char c = str.charAt(i);
			
			if(c==90) {
				answer += 10;
			} else if(c>=83) {
				c -= 57;
				answer += c/3;
			} else {
				c -= 56;
				answer += c/3;
			}
		}
		
		System.out.println(answer);
	}
}