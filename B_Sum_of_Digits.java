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
        String num=read.next();
        int count=0;
        while(num.length()!=1){
            long temp=0;
            for(int i=0;i<num.length();i++){
            char a=num.charAt(i);
            int b=(int)a-48;
            temp+=b;
        }
        num=String.valueOf(temp);
        count++; 
    }
        System.out.println(count);
        


        
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