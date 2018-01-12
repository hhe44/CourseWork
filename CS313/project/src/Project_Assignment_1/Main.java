/* CS313 - Project Assignment#1
*  Completed by Henry He */

package Project_Assignment_1;

public class Main {

    public static void recursiveReverse(String s){
        int i = s.length() - 1;
        if (i == -1) return;
        System.out.print(s.charAt(i));
        recursiveReverse(s.substring(0,i--));
    }

    public static void main(String[] args) {

        //Problem#1: Implement an algorithm for reversing a singly linked list. You can use the linked list classes provided in Chapter 3.
        SinglyLinkedList SLL = new SinglyLinkedList();
        for(int i = 65; i<91; i++){SLL.append(Character.toString ((char) i));}
        for(int i = 0; i<10; i++){SLL.append(i);}
        System.out.println("PROBLEM#1");
        System.out.print("SLL order before reverse method:");
        SLL.print();
        //Code for reverse method is under SinglyLinkedList class, lines 62 to 75
        SLL.reverse();
        System.out.print("SLL order after reverse method: ");
        SLL.print();
        System.out.println(" ");

        //Problem#2: Write a recursive method that takes a character string "s" and outputs its reverse. For example, the reverse of "potspans" would be "snapstop"
        System.out.println("PROBLEM#2");
        String s = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG";
        System.out.println("String before recursiveReverse method: " + s);
        System.out.print("String after recursiveReverse method:  ");
        //Code for recursiveReverse method is under main class, lines 8 to 13
        recursiveReverse(s);
        System.out.println("");
        System.out.println("");

        //Problem#3: Implement an algorithm that will perform a preorder traversal of a binary tree. You can use the Tree class provided in chapter 8
        System.out.println("PROBLEM#3");
        //Create simple LinkedBinaryTree
        /*           A
                   B   C
                  D E F G
        * */
        LinkedBinaryTree LBT = new LinkedBinaryTree();
        LBT.set(LBT.root(), 'A');
        LBT.addLeft(LBT.root(),'B');
        LBT.addRight(LBT.root(),'C');
        LBT.addLeft(LBT.root().getLeft(),'D');
        LBT.addRight(LBT.root().getLeft(),'E');
        LBT.addLeft(LBT.root().getRight(),'F');
        LBT.addRight(LBT.root().getRight(),'G');
        //Code for preorderPrint is under LinkedBinaryTree class, lines 58 to 64
        System.out.print("Preorder Traversal: ");
        LBT.preorderPrint(LBT.root());
        System.out.println();

        //The next two traversals are completed for extra credit.
        //Code for both traversals is under LinkedBinaryTree class, lines 66 to 80.
        System.out.print("Inorder Traversal: ");
        LBT.inorderPrint(LBT.root());
        System.out.println();
        System.out.print("Postorder Traversal: ");
        LBT.postorderPrint(LBT.root());
        System.out.println();
    }
}
