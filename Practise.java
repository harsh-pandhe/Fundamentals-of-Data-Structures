public class Practise {

    public static int jump(int[] arr, int x, int n) {
        int step = (int) Math.floor(Math.sqrt(n));
        int prev = 0;

        for (int minStep = Math.min(step, n) - 1; arr[minStep] < x; minStep = Math.min(step, n) - 1) {
            prev = step;
            step += (int) Math.floor(Math.sqrt(n));
            if (prev >= n)
                return -1;
        }

        while (arr[prev] < x) {
            prev++;
            if (prev == Math.min(step, n))
                return -1;
        }

        if (arr[prev] == x) {
            return prev;
        }

        return -1;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 11, 45, 67, 76, 111, 212, 5765, 12311 };
        int key = 212;
        int n = arr.length;
        int result = jump(arr, key, n);
        if (result <= 0) {
            System.out.println("Element not found");
        } else {
            System.out.println("Element found at index: " + result);
        }

    }
}