import java.util.*;
/**
 * Block_swap_algo
 */
class Block_swap_algo {

public static void swap(int arr[], int a, int b, int r) {
    for (int i = 0; i < r; i++) {
        int temp = arr[a+i];
        arr[a+i] = arr[b+i];
        arr[b+i] = temp;
    }
}

    public static void left_rotation(int arr[], int r){
        int n = arr.length;
        if(r == 0 || r == n) return;
        int A = r;
        int B = n-r;
        while (A!=B) {
            if(A<B){
                swap(arr, r-A, A+B-r, A);
                B = B-A;
            }
            else{
                swap(arr, r-A, r, B);
                A = A-B;
            }
        
            
        }
        swap(arr, r-A, r, B);

    }

    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int no_of_rotation = sc.nextInt();

        left_rotation(arr, no_of_rotation);

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
            
        }




        
    }
    

}

