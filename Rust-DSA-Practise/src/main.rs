fn count_sort(input_array: &mut [i32]) -> Vec<i32> {
    let n = input_array.len();
    let mut m = 0;

    for &num in input_array.iter() {
        if num > m {
            m = num;
        }
    }

    let mut count_array = vec![0; (m + 1) as usize];

    for &num in input_array.iter() {
        count_array[num as usize] += 1;
    }

    for i in 1..=m as usize {
        count_array[i] += count_array[i - 1];
    }

    let mut output_array = vec![0; n];

    for &num in input_array.iter().rev() {
        output_array[count_array[num as usize] as usize - 1] = num;
        count_array[num as usize] -= 1;
    }

    output_array
}

fn main() {
    let mut input_array = vec![4, 3, 12, 1, 5, 5, 3, 9];
    let output_array = count_sort(&mut input_array);

    for num in output_array.iter() {
        print!("{} ", num);
    }
}
