class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function printlist(last) {
    if (last == null) {
        return;
    }
    let first = last.next;
    while (true) {
        console.log(first.data + " ");
        first = first.next;
        if (first == last.next) {
            break;
        }
    }
    console.log("\n");
}


let head = null;
let second = null;
let third = null;

head = new Node(1);
second = new Node(2);
third = new Node(3);

head.next = second;
second.next = third;
third.next = head;

printlist(third);