#[derive(Clone)]
struct Node {
    data: i32,
    next: Option<Box<Node>>,
}

impl Node {
    fn new(data: i32) -> Self {
        Node { data, next: None }
    }
}

fn print_list(last: &Option<Box<Node>>) {
    if let Some(last_node) = last {
        let mut head = Some(last_node.clone());
        while let Some(node) = head {
            print!("{} ", node.data);
            head = node.next;
            if head.is_none() || std::ptr::eq(&*head.as_ref().unwrap(), &*last_node) {
                break;
            }
        }
        println!();
    }
}

fn main() {
    let mut head = Box::new(Node::new(1));
    let second = Box::new(Node::new(2));
    let third = Box::new(Node::new(3));

    head.next = Some(second);
    head.next.as_mut().unwrap().next = Some(third);
    head.next.as_mut().unwrap().next.as_mut().unwrap().next = Some(head.clone());

    print_list(&head.next.as_ref().unwrap().next.as_ref().unwrap().next);
}
