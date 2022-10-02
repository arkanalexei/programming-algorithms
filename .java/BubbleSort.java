import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class BubbleSort {

    /**
     * @param x (int[])
     * Performs the bubble sort algorithm in-place.
     */
    public static void bubbleSort(int[] x) {
        int temp;
        boolean clean = false; // flag for optimization
        while (!clean) {
            clean = true; // stop running if there are no swaps in a loop
            for (int i = 1; i < x.length; i++) {
                if (x[i] < x[i-1]) {
                    // Swap x[i-1] and x[i]
                    clean = false;
                    temp = x[i-1];
                    x[i-1] = x[i];
                    x[i] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read value of N (length of array)
        int N = sc.nextInt();

        // Read value of x (values of N-length array)
        int[] x = new int[N];
        for (int i = 0; i < N; ++i) {
            x[i] = sc.nextInt();
        }

        bubbleSort(x);
        System.out.println(Arrays.toString(x));
    }
}