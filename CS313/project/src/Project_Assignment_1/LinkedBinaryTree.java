package Project_Assignment_1;

public class LinkedBinaryTree<E>{

    protected static class Node<E>{
        private E element;
        private Node<E> parent;
        private Node<E> left;
        private Node<E> right;
        protected Node(E e, Node<E> above, Node<E> leftChild, Node<E> rightChild){
            element = e;
            parent = above;
            left = leftChild;
            right = rightChild;
        }

        public E getElement(){ return element;}
        public Node<E> getParent(){ return parent; }
        public Node<E> getLeft(){ return left; }
        public Node<E> getRight(){ return right; }

        public void setElement(E e){ element = e; }
        public void setParent(Node<E> parentNode){ parent = parentNode; }
        public void setLeft(Node<E> leftChild){ left = leftChild; }
        public void setRight(Node<E> rightChild){ right = rightChild; }
    }

    public Node<E> createNode(E e, Node<E> parent){
        return new Node<E>(e, parent, null, null);
    }

    public Node<E> createNode(E e, Node<E> parent, Node<E> left, Node<E> right){
        return new Node<E>(e, parent, left, right);
    }

    protected Node<E> root = new Node("EMPTY",null,null,null);

    public LinkedBinaryTree(){}

    public Node<E> root(){ return root; }
    public Node<E> left(Node<E> n){ return n.getLeft(); }
    public Node<E> right(Node<E> n){ return n.getRight(); }

    public void addLeft(Node<E> n, E e){
        Node<E> parent = n;
        Node<E> child = createNode(e, parent, null, null);
        parent.setLeft(child);
    }

    public void addRight(Node<E> n, E e){
        Node<E> parent = n;
        Node<E> child = createNode(e, parent, null, null);
        parent.setRight(child);
    }

    public void set(Node<E> n, E e){n.setElement(e);}

    public void preorderPrint(Node n){
        if(n != null){
            System.out.print(n.getElement() + " ");
            preorderPrint(n.getLeft());
            preorderPrint(n.getRight());
        }
    }

    public void inorderPrint(Node n){
        if(n != null){
            inorderPrint(n.getLeft());
            System.out.print(n.getElement() + " ");
            inorderPrint(n.getRight());
        }
    }

    public void postorderPrint(Node n){
        if(n != null){
            postorderPrint(n.getLeft());
            postorderPrint(n.getRight());
            System.out.print(n.getElement() + " ");
        }
    }
}
