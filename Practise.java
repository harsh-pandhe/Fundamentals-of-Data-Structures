public class Practise {

    public static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low) - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    public static int quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
        return 0;
    }

    public static void main(String args[]) {
        int[] arr = { 54, 21, 56, 333, 78, 98, 454, 23 };
        int n = arr.length;
        quickSort(arr, 0, (n - 1));
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}