import java.util.Scanner;
public class YoungPhysicist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
        boolean check = true;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum += arr[j][i];
            }
            if(sum!=0){
                check = false;
            }
        }
        if(check==true){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }

    }
}
