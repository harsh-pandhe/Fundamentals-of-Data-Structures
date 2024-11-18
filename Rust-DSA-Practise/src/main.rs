use std::rc::Rc;
use std::cell::RefCell;

#[derive(Debug)]
struct Node {
    data: i32,
    next: Option<Rc<RefCell<Node>>>,
    prev: Option<Rc<RefCell<Node>>>,
}

impl Node {
    fn new(data: i32) -> Rc<RefCell<Node>> {
        Rc::new(RefCell::new(Node {
            data,
            next: None,
            prev: None,
        }))
    }
}

fn forward_traversal(head: Option<Rc<RefCell<Node>>>) {
    let mut temp = head;
    while let Some(current) = temp {
        print!("{} ", current.borrow().data);
        temp = current.borrow().next.clone();
    }
    println!();
}

fn back_traversal(tail: Option<Rc<RefCell<Node>>>) {
    let mut temp = tail;
    while let Some(current) = temp {
        print!("{} ", current.borrow().data);
        temp = current.borrow().prev.clone();
    }
    println!();
}

fn main() {
    let head = Node::new(1);
    let second = Node::new(2);
    let third = Node::new(3);

    head.borrow_mut().next = Some(second.clone());
    second.borrow_mut().prev = Some(head.clone());
    second.borrow_mut().next = Some(third.clone());
    third.borrow_mut().prev = Some(second.clone());

    forward_traversal(Some(head.clone()));
    back_traversal(Some(third.clone()));
}