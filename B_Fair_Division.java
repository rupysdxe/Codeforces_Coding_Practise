import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        while (t-->0){
            int n=scan.nextInt();
            int[] digits=new int[n];
            int x=0;
            while (x<n){
                digits[x]=scan.nextInt();
                x++;
            }//input while loop

            int sum2;
            int count1=0;
            int count2=0;
            for (int i=0;i<digits.length;i++ ) {
                if(digits[i]==1){
                    count1++;

                }else {
                    count2++;
                }


            }//for loop
            if ((count1 + 2 * count2) % 2 != 0) {
                System.out.println("NO");
            } else {
                 sum2 = (count1 + 2 * count2) / 2;
                if (sum2 % 2 == 0 || (sum2 % 2 == 1 && count1 != 0)) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }




        }//first loop
    }}
}