package Project_Assignment_1;

public class SinglyLinkedList<E> {

    public static class Node<E>{
        private E element;
        private Node<E> next;
        public Node(E e, Node<E> n){
            element = e;
            next = n;
        }
        public E getElement(){ return element; }
        public Node<E> getNext(){ return next; }
        public void setNext(Node<E> n){ next = n; }
    }

    private Node<E> first = null;
    private Node<E> last = null;
    private int size = 0;

    public SinglyLinkedList(){}

    public int size(){ return size; }
    public E first(){ return first.getElement();}
    public E last(){ return last.getElement();}

    public void prepend(E e){
        Node<E> n = new Node<>(e, null);
        if (size == 0){
            first = n;
            last = n;
        }
        else{
            n.setNext(first);
            first = n;
        }
        size++;
    }

    public void append(E e){
        Node<E> n = new Node<>(e, null);
        if (size == 0){
            first = n;
            last = n;
        }
        else {
            last.setNext(n);
            last = n;
        }
        size++;
    }

    public void print(){
        Node n = first;
        for(int i=0; i<size; i++){
            System.out.print(n.getElement());
            n = n.next;
        }
        System.out.println("");
    }

    public void reverse(){
        Node prev = null;
        Node current = first;
        Node next = null;
        while(current != null){
            next = current.next;
            current.setNext(prev);
            prev = current;
            current = next;
        }
        Node temp = first;
        first = last;
        last = temp;
    }
}
