import java.util.*;
import java.io.*;

public class Main {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(br.readLine());
		System.out.print(factorial(n));
		
	}
	public static int factorial(int n) {
		if(n == 0) return 1;
		else return n *= factorial(n - 1);
	}
}