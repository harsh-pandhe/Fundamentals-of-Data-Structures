fn selection_sort(arr: &mut [i32], n: usize) {
    for i in 0..n - 1 {
        let mut a = i;
        for j in i + 1..n {
            if arr[a] > arr[j] {
                a = j;
            }
        }
        if a != i {
            arr.swap(a, i);
        }
    }
}

fn main() {
    let mut arr = [54, 26, 93, 17, 77, 31, 44, 55, 20];
    let n = arr.len();
    selection_sort(&mut arr, n);
    println!("Sorted array: {:?}", arr);
}
