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
import static java.lang.Math.pow;
import java.util.Arrays;


public class JustForFunDoNotMindMe {
    public static void main(String[] args) {
        // FileInputOutput file=new FileInputOutput("input.txt","output.txt");
        FastReader read = new FastReader();
        int n=read.nextInt();
        int pce=read.nextInt()-1;
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=read.nextInt();
        }
        int maxLeft=pce; //3 
        int maxRight=n-maxLeft-1; // 6-2-1=3
        int start=max(maxLeft,maxRight);
        int sure=0;
        if(arr[pce]==1)sure++;
        for(int i=1;i<=start;i++){
            if(pce-i>=0 && arr[pce-i]==1 && pce+i<n && arr[pce+i]==1)sure+=2;
            if(i>maxLeft && arr[pce+i]==1)sure++;
            if(i>maxRight && arr[pce-i]==1)sure++;
        }
        

        System.out.println(sure);
      
        
    }//main
   

}//class main
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
 class FastReader {
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