fn sentinel(arr: &[i32], key: i32) -> Option<usize> {
    let mut arr = arr.to_vec();
    let n: usize = arr.len();
    let last = arr[n - 1];
    let mut i = 0;

    while i < n && arr[i] != key {
        i += 1;
    }

    arr[n - 1] = last;

    if i < n - 1 || arr[n - 1] == key {
        return Some(i);
    }
    None
}

fn main() {
    let arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311];
    let key = 1111;
    let result = sentinel(&arr, key);

    if result.is_some() {
        println!("Element found at index: {}", result.unwrap());
    } else {
        println!("Element not found");
    }
}
