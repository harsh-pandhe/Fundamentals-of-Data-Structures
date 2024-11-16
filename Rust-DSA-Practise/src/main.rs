fn fibonacci_search(arr: &[i32], target: i32) -> Option<usize> {
    let mut a = 0;
    let mut b = 1;
    let mut c = b + a;
    let n = arr.len();

    while c < n {
        a = b;
        b = c;
        c = b + a;
    }

    let mut offset = 0;

    while c > 1 {
        let i = std::cmp::min(offset + a, n - 1);

        if arr[i] == target {
            return Some(i);
        } else if arr[i] < target {
            c = b;
            b = a;
            a = c - b;
            offset = i;
        } else {
            c = a;
            b -= a;
            a = c - b;
        }
    }

    if arr[offset] == target {
        return Some(offset);
    }

    None
}

fn main() {
    let arr = [10, 22, 35, 40, 45, 50, 80, 82, 85, 90];
    let target = 85;

    match fibonacci_search(&arr, target) {
        Some(index) => println!("Element found at index: {}", index),
        None => println!("Element not found"),
    }
}
