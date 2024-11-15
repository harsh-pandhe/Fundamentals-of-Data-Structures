fn linear_search(arr: &[i32], key: i32) -> Option<usize> {
    for (index, &item) in arr.iter().enumerate() {
        if item == key {
            return Some(index);
        }
    }
    None
}

fn main() {
    let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let key = 61;
    let result = linear_search(&arr, key);

    if result.is_some() {
        println!("Element found at index: {}", result.unwrap());
    } else {
        println!("Element not found");
    }
}
