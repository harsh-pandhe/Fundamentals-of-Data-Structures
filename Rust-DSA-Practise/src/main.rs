struct Node {
    data: i32,
    next: Option<Box<Node>>,
}

impl Node {
    fn new(data: i32) -> Node {
        Node { data, next: None }
    }
}

fn print_list(mut node: &Option<Box<Node>>) {
    while let Some(n) = node {
        print!("{} ", n.data);
        node = &n.next;
    }
}

fn main() {
    let third = Node {
        data: 3,
        next: None,
    };
    let second = Node {
        data: 2,
        next: Some(Box::new(third)),
    };
    let head = Node {
        data: 1,
        next: Some(Box::new(second)),
    };

    print_list(&Some(Box::new(head)));
}