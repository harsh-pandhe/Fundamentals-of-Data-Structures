public class Practise {

    public static int shellSort(int arr[], int n) {

        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];

                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                    arr[j] = arr[j - gap];
                }
                arr[j] = temp;
            }
        }
        return 0;
    }

    public static void main(String args[]) {
        int[] arr = { 54, 21, 56, 333, 78, 98, 454, 23 };
        int n = arr.length;
        shellSort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}