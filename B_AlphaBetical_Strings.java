import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.lang.Math.abs;
import java.util.Arrays;
public class JustForFunDoNotMindMe{
	public static void main(String[] args){
		// FileInputOutput input=new FileInputOutput("input.txt","output.txt");
		FastReader read=new FastReader();
	   int t=read.nextInt();
       while(t-->0){
         boolean check=true;
        String s=read.next();
        int l=s.length();
        char[] arr=s.toCharArray();
        int i=s.indexOf("a");
        if(i==-1){
            System.out.println("NO");
        }else{
            int start=97;
            int L=i-1;
            int R=i+1;
            while(L>=0 || R<=l-1){
                if(L>=0 && (int)arr[L]==start+1){
                    L--;
                    start++;
                }else if(R<=l-1 && (int)arr[R]==start+1){
                    R++;
                    start++;
                }else{
                    check=false;
                    break;
                }

            }
            if(check){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }

        }


       }//while
	}//main

static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader()
        {
            br = new BufferedReader(
                    new InputStreamReader(System.in));
        }

        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        char nextChar()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken().charAt(0);
        }

        int nextInt() { 
        	return Integer.parseInt(next()); }

        long nextLong() {
         return Long.parseLong(next()); }

        double nextDouble()
        {
            return Double.parseDouble(next());
        }

        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
 }//Fast Reader
}//JustForFun
class FileInputOutput{
	FileInputStream one;
	FileOutputStream two;
	PrintStream three;
	FileInputOutput(String input,String output){
	try{
		one=new FileInputStream(input);
		two=new FileOutputStream(output);
		three=new PrintStream(two);
		System.setIn(one);
		System.setOut(three);
	}catch(Exception e){
		e.printStackTrace();
	}


	}//cons
}//FileInputOutput