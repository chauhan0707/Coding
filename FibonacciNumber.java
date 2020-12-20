package algo.dp;

/**
 * Created by sherxon on 3/2/17.
 */
public class FibonacciNumber {

    int fib(int n) {
        if (n <= 0) return 0;
        if (n == 1 || n == 2) return 1;
        int f1 = 1;
        int f2 = 2;
        while (f1 < n) {
            int f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f1;
    }

    int fibonacci(int[] a, int n) {
        if (n <= 0) return 0;
        if (n == 1 || n == 2) return 1;
        if (a[n] != 0) return a[n];
        a[n] = fibonacci(a, n - 1) + fibonacci(a, n - 2);
        return a[n];
    }
}
