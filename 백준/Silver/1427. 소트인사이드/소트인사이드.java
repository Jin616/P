import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String[] arr = br.readLine().split("");

		Arrays.sort(arr, Collections.reverseOrder());
		
		StringBuilder sb = new StringBuilder();
		for(int i=0; i<arr.length; i++) sb.append(arr[i]);
		
		System.out.println(sb);
	}
}