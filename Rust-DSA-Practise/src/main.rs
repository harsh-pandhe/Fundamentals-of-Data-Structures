fn shell_sort(arr: &mut [i32], n: usize) {
    for gap in (0..n / 2).rev() {
        for i in gap..n {
            let temp = arr[i];
            let mut j = i;
            while j >= gap && arr[j - gap] > temp {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

fn main() {
    let mut arr = [54, 26, 93, 17, 77, 31, 44, 55, 20];
    let n = arr.len();
    shell_sort(&mut arr, n);
    println!("Sorted array: {:?}", arr);
}
