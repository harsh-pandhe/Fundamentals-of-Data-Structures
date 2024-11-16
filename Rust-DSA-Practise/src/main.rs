fn bubble_sort(arr: &mut [i32], n: usize) {
    let i = 0;
    let j: i32 = 0;
    let mut temp = 0;
    let mut swapped;

    for i in 0..n - 1 {
        swapped = false;
        for j in 0..n - i - 1 {
            if arr[j] > arr[j + 1] {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if swapped == false {
            break;
        }
    }
}

fn main() {
    let mut arr = [54, 26, 93, 17, 77, 31, 44, 55, 20];
    let n = arr.len();
    bubble_sort(&mut arr, n);
    println!("Sorted array: {:?}", arr);
}
