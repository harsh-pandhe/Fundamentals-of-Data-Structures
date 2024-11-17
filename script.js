class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

let head = null;
let second = null;
let third = null;

head = new Node(1);
second = new Node(2);
third = new Node(3);

head.next = second;
second.next = third;
console.log(head)