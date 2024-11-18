class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None
        self.prev = None


def forwardTraversal(head: Node):
    while head:
        print(head.data, end=" ")
        head = head.next
    print()


def backwardTraversal(tail: Node):
    while tail:
        print(tail.data, end=" ")
        tail = tail.prev
    print()


if __name__ == "__main__":
    head = Node(1)
    second = Node(2)
    third = Node(3)

    head.next = second
    second.prev = head
    second.next = third
    third.prev = second

    forwardTraversal(head)
    backwardTraversal(third)
