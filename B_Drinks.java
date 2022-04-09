import java.util.Scanner;

public class May31 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        float[] drinks=new float[n];
        for (int i=0;i<n;i++){
            drinks[i]=scan.nextFloat();
        }
        float sum=0;
        for (int i=0;i<n;i++){
            sum+=drinks[i]/100;

        }
        System.out.println(sum/n*100);

    }
}