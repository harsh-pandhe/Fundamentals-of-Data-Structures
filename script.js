function countSort(inputArray) {
    let N = inputArray.length;
    let M = Math.max(...inputArray);
    let countArray = new Array(M + 1).fill(0);

    for (let i = 0; i < N; i++) {
        countArray[inputArray[i]]++;
    }

    for (let i = 1; i <= M; i++) {
        countArray[i] += countArray[i - 1];
    }

    let outputArray = new Array(N);

    for (let i = N - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

let inputArray = [4, 3, 12, 1, 5, 5, 3, 9];
let outputArray = countSort(inputArray);

console.log(outputArray.join(" "));