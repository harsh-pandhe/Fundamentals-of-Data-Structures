class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None


def print_list(last):
    if last is None:
        return
    head = last.next
    while True:
        print(head.data, end=" ")
        head = head.next
        if head == last.next:
            break
    print()


if __name__ == "__main__":
    head = Node(1)
    second = Node(2)
    third = Node(3)

    head.next = second
    second.next = third
    third.next = head

    print_list(third)
