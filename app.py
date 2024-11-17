class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None


head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)

current = head
while current:
    print(current.data)
    current = current.next
