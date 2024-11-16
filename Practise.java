public class Practise {
    public static int bubbleSort(int[] arr, int n) {
        int i, j, temp;
        boolean swapped;

        for (i = 0; i < n - 1; i++) {
            swapped = false;

            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (swapped == false) {
                break;
            }
        }
        return 0;
    }

    public static void main(String args[]) {
        int[] arr = { 54, 21, 56, 333, 78, 98, 454, 23 };
        int n = arr.length;
        bubbleSort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}