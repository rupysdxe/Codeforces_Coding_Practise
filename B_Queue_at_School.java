import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {

        Scanner scan =new Scanner(System.in);
        int n=scan.nextInt();
        int t=scan.nextInt();
        String S=scan.next();
        char[] a=S.toCharArray();
        for(int i=1;i<=t;i++){

        for(int j=0;j<a.length-1;j++){
            if(a[j]=='B' && a[j+1]=='G'){

                char temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                j++;
            }
        }//inner for loop
        }//outer for loop
        System.out.println(String.valueOf(a));










    }
}