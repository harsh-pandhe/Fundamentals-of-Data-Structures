public class Practise {

    public static int sentinel(int[] arr, int key) {
        int n = arr.length;
        int last = arr[n - 1];
        int i = 0;
        arr[n - 1] = key;

        while (arr[i] != key) {
            i++;
        }

        arr[n - 1] = last;
        if ((i < n - 1) || arr[n - 1] == key) {
            return i;
        }

        return -1;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 11, 45, 67, 76, 111, 212, 5765, 12311 };
        int key = 111;
        int result = sentinel(arr, key);
        if (result == -1) {
            System.out.println("Element not found");
        } else {
            System.out.println("Element found at index: " + result);
        }

    }
}