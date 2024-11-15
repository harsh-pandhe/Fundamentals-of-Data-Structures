arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
key = 6
for (i = 0; i < arr.length; i++) {
    if (arr[i] == key) {
        console.log("Element found at index " + i);
        break;
    }
    if(i == arr.length - 1){
        console.log("Element not found");
    }
}