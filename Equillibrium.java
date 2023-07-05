import java.util.*;
/**
 * Equillibrium
 */
public class Equillibrium {

    public static int equil(int a[], int n){
        int i;
        int sum = 0;
        int max = 0;
        int p_sum = 0;
        for (i = 0; i < n; i++) {
            sum = sum + a[i];
        }
        for (i = 0; i < n; i++) {
            p_sum += a[i];
            if(p_sum == sum)
            max = Math.max(max,p_sum);
            sum = sum - a[i];
        }
        return max; 

    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int res = equil(a, n);
        System.out.println(res);
    }
}