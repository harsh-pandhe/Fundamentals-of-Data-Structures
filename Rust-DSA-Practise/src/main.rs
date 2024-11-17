fn partition(arr: &mut [i32], low: usize, high: usize) -> usize {
    let pivot = arr[high];
    let mut i = low as isize - 1;
    for j in low..high {
        if arr[j as usize] < pivot {
            i += 1;
            let temp = arr[i as usize];
            arr[i as usize] = arr[j as usize];
            arr[j as usize] = temp;
        }
    }
    let temp = arr[(i + 1) as usize];
    arr[(i + 1) as usize] = arr[high as usize];
    arr[high as usize] = temp;
    (i + 1) as usize
}

fn quick_sort(arr: &mut [i32], low: usize, high: usize) {
    if low < high {
        let pi = partition(arr, low, high);
        if pi > 0 {
            quick_sort(arr, low, pi - 1);
        }
        quick_sort(arr, pi + 1, high);
    }
}

fn main() {
    let mut arr = [54, 26, 93, 17, 77, 31, 44, 55, 20];
    let high = arr.len() - 1;
    quick_sort(&mut arr, 0, high);
    println!("Sorted array: {:?}", arr);
}
