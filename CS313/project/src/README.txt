########################################################################################################################
Project Directory on Venus Server:
/home/sp17/313/hehe1244/CS313/project/src

All Java files in the directory has already been compiled with success.

Below contains the Input and Solution code to each problem.
To view the output, please run command: "java Project_Assignment_1.Main"

########################################################################################################################

Input to Problem#1: A SinglyLinkedList called SLL containing alphabets A to Z and numbers 0 to 1.

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

########################################################################################################################

Input to Problem#2: A String "s" containing the pangram "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG"

Solution to Problem#2 is found under the main class, lines 8 to 13:

public static void recursiveReverse(String s){
    int i = s.length() - 1;
    if (i == -1) return;
    System.out.print(s.charAt(i));
    recursiveReverse(s.substring(0,i--));
}

########################################################################################################################

Input to Problem#3: A simple LinkedBinaryTree called LBT containing the characters A, B, C, D, E, F.
An illustration of the LBT is provided below:

                     A
                   B   C
                  D E F G

Unfortunately, I am not skilled enough in ASCII art to provide a better illustration. Sorry.

Solution to Problem#3 is found under the LinkedBinaryTree class, lines 58 to 64:

public void preorderPrint(Node n){
    if(n != null){
        System.out.print(n.getElement() + " ");
        preorderPrint(n.getLeft());
        preorderPrint(n.getRight());
    }
}

########################################################################################################################

Input for Extra Credit is still the LinkedBinaryTree LBT.

Solution to Extra Credit: The other two tranversal (inorder and postorder) are written LinkedBinaryTree class, lines 66 to 80.

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

########################################################################################################################