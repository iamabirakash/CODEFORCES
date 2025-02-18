import java.util.Scanner;
public class GeorgeRoom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                a[i][j] = sc.nextInt();
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(a[i][1]-a[i][0]>=2){
                sum++;
            }
        }
        System.out.println(sum);
        sc.close();
    }
}
