fn jump_search(arr: &[i32], target: i32) -> Option<usize> {
    let mut step = f32::sqrt(arr.len() as f32) as usize;
    let mut prev = 0;

    while arr[std::cmp::min(step, arr.len()) - 1] < target {
        prev = step;
        step += f32::sqrt(arr.len() as f32) as usize;
        if prev >= arr.len() {
            return None;
        }
    }

    while arr[prev] < target {
        prev += 1;
        if prev == std::cmp::min(step, arr.len()) {
            return None;
        }
    }

    if arr[prev] == target {
        return Some(prev);
    }

    None
}
fn main() {
    let arr = [10, 22, 35, 40, 45, 50, 80, 82, 85, 90];
    let target = 85;

    match jump_search(&arr, target) {
        Some(index) => println!("Element found at index: {}", index),
        None => println!("Element not found"),
    }
}
