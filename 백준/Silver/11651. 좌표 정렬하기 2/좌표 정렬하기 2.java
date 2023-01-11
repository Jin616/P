import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer stk;
		
		int n = Integer.parseInt(br.readLine());
		int[][] p = new int[n][2];
		
		for(int i=0; i<n; i++) {
			stk = new StringTokenizer(br.readLine());
			p[i][0] = Integer.parseInt(stk.nextToken());
			p[i][1] = Integer.parseInt(stk.nextToken());
		}
		
		Arrays.sort(p, (o1, o2) -> {
			return o1[1]!=o2[1] ? o1[1]-o2[1] : o1[0]-o2[0];
		});
		
		StringBuilder sb = new StringBuilder();
		
		for(int i=0; i<n; i++) {
			sb.append(p[i][0]).append(" ").append(p[i][1]).append("\n");
		}
		
		System.out.println(sb);
	}
}