public class Practise {
    public static int insertionSort(int[] arr, int n) {
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        return 0;
    }

    public static void main(String args[]) {
        int[] arr = { 54, 21, 56, 333, 78, 98, 454, 23 };
        int n = arr.length;
        insertionSort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}