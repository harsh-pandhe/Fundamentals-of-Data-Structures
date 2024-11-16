public class Practise {
    public static int selectionSort(int[] arr, int n) {
        int i, j, a, temp;
        for (i = 0; i < n - 1; i++) {
            a = i;
            for (j = i + 1; j < n; j++) {
                if (arr[j] < arr[a]) {
                    a = j;
                }
            }
            temp = arr[a];
            arr[a] = arr[i];
            arr[i] = temp;
        }
        return 0;
    }

    public static void main(String args[]) {
        int[] arr = { 54, 21, 56, 333, 78, 98, 454, 23 };
        int n = arr.length;
        selectionSort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}