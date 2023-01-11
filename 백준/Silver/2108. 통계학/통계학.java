import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		int[] num = new int[n];
		int[] num_count = new int[8001];
		int count = 0;
		String tem = "";
		
		int avg = 0;
		int mid;
		int mode;
		int range;
		
		for(int i=0; i<n; i++) {
			num[i] = Integer.parseInt(br.readLine());
			
			avg += num[i];
			
			num_count[num[i]+4000]++;
			
			if(num_count[num[i]+4000]>count) {
				count = num_count[num[i]+4000];
				tem = "";
				tem += String.valueOf(num[i]) + " ";
			} else if(num_count[num[i]+4000]==count) {
				tem += String.valueOf(num[i]) + " ";
			}
		}
		
		Arrays.sort(num);
		
		avg = (int) Math.round((double)avg/n);
		mid = num[n/2];
		
		StringTokenizer stk = new StringTokenizer(tem);
		if(stk.countTokens()==1) {
			mode = Integer.parseInt(stk.nextToken());
		} else {
			int[] arr = new int[stk.countTokens()];
			
			for(int i=0; i<arr.length; i++) arr[i] = Integer.parseInt(stk.nextToken());
			
			Arrays.sort(arr);
			mode = arr[1];
		}
		
		range = num[n-1] - num[0];
		
		System.out.printf(avg + "\n" + mid + "\n" + mode + "\n" + range);
	}
}