import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.lang.Math.abs;

public class Run {
    public static void main(String[] args) {
        FastReader read = new FastReader();
        int n=read.nextInt();
        int m=read.nextInt();
       List<Match> mat=new ArrayList<>();
       for(int i=0;i<m;i++){
           mat.add(new Match(read.nextInt(), read.nextInt()));
       }
       mat.sort(new SortM2());
       int res=0;
       for(Match a:mat){
          if(a.m1>n){
              res+=(n)*a.m2;
              break;
          }else {
              res+=a.m1*a.m2;
              n-=a.m1;
          }
          if(n<=0)break;

       }
        System.out.println(res);




    }//main


}//class main
class Match{
    int m1;
    int m2;
    Match(int m1, int m2){
        this.m1=m1;
        this.m2=m2;
    }
        }
class SortM2 implements Comparator<Match> {

    public int compare(Match a, Match b)
    {
        return  b.m2-a.m2;
    }
}

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