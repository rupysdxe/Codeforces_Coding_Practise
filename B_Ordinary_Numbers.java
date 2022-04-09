import java.util.Scanner;
public class OrdinaryNumber{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        int t= scan.nextInt();
        while (t-->0){
            int n=scan.nextInt();
            int count=0;
            int temp=0;
            int m=(int)Math.log10(n)+1;
            for(int i=1;i<=m;i++){
                temp=temp*10+1;

                for (int j=1;j<=9;j++){
//                  if(temp*j<0){
//                      break;
//                  }
                    if(temp*j<=n && temp<=n){
                        count++;
                    }


                }
            }
            System.out.println(count);


        }
    }
}