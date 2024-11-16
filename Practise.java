public class Practise {
    public static int min(int x, int y) {
        return (x <= y) ? x : y;
    }

    public static int fibo(int[] arr, int key, int n) {
        int a = 0;
        int b = 1;
        int c = b + a;
        while (c < n) {
            b = a;
            a = c;
            c = b + a;
        }

        int offset = -1;

        while (c > 1) {
            int i = min(offset + b, n - 1);

            if (arr[i] < key) {
                c = a;
                a = b;
                b = c - a;
                offset = i;
            } else if (arr[i] > key) {
                c = b;
                a -= b;
                b = c - a;
            } else {
                return i;
            }
        }

        if (a == 1 && (arr[n - 1] == key)) {
            return n - 1;
        }

        return -1;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 11, 45, 67, 76, 111, 212, 5765, 12311 };
        int key = 212;
        int n = arr.length;
        int result = fibo(arr, key, n);
        if (result <= 0) {
            System.out.println("Element not found");
        } else {
            System.out.println("Element found at index: " + result);
        }

    }
}