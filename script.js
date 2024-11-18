class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

function forwardTraversal(head) {
    let temp = head;
    while (temp != null) {
        console.log(temp.data + " ");
        temp = temp.next;
    }
    console.log();
};

function backTraversal(tail) {
    let temp = tail;
    while (temp != null) {
        console.log(temp.data + " ");
        temp = temp.prev;
    }
    console.log();
}

let head = null;
let second = null;
let third = null;

head = new Node(1);
second = new Node(2);
third = new Node(3);

head.next = second;
second.next = third;
second.prev = head;
third.prev = second;

forwardTraversal(head);
backTraversal(third);