fn insertion_sort(arr: &mut [i32]) {
    let n = arr.len();
    for i in 1..n {
        let key = arr[i];
        let mut j = i as isize - 1;
        while j >= 0 && arr[j as usize] > key {
            arr[(j + 1) as usize] = arr[j as usize];
            j = j - 1;
        }
        arr[(j + 1) as usize] = key;
    }
}

fn main() {
    let mut arr = [54, 26, 93, 17, 77, 31, 44, 55, 20];
    insertion_sort(&mut arr);
    println!("Sorted array: {:?}", arr);
}
