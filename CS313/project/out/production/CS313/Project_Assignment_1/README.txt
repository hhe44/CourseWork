Please run the main class to test the algorithms.



Solution to Problem#1 is found under the SinglyLinkedList class, lines 62 to 75:

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



Solution to Problem#2 is found under the main class, lines 8 to 13:

public static void recursiveReverse(String s){
    int i = s.length() - 1;
    if (i == -1) return;
    System.out.print(s.charAt(i));
    recursiveReverse(s.substring(0,i--));
}



Solution to Problem#3 is found under the LinkedBinaryTree class, lines 58 to 64:

public void preorderPrint(Node n){
    if(n != null){
        System.out.print(n.getElement() + " ");
        preorderPrint(n.getLeft());
        preorderPrint(n.getRight());
    }
}



Extra Credit: The other two tranversal (inorder and postorder) are written LinkedBinaryTree class, lines 66 to 80

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