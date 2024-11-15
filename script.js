arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311]
key = 111

i = 0;
n = arr.length;
last = arr[n - 1];

while (arr[i] != key) {
    i++;
}

arr[n - 1] = key;

if ((i < n - 1) || arr[n - 1] == key) {
    console.log(key + " found at position: ", i);
}
else {
    console.log("Element not found");
}