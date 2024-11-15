fn binary(arr: &[i32], key: i32) -> Option<usize> {
    let mut start: i32 = 0;
    let mut end: i32 = arr.len() as i32 - 1;
    while start <= end {
        let mid: i32 = (start + end) / 2;
        if arr[mid as usize] == key {
            return Some(mid as usize);
        } else if arr[mid as usize] < key {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    None
}

fn main() {
    let arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311];
    let key = 111;
    let result = binary(&arr, key);

    if result.is_some() {
        println!("Element found at index: {}", result.unwrap());
    } else {
        println!("Element not found");
    }
}
