import java.util.PriorityQueue;
import java.util.ArrayList;

public class heapPriorityQueue<Integer,Character> extends PriorityQueue{

    static class Entry<Integer,Character>{
        private int key;
        private char value;

        public Entry(int key, char value) {
            this.key = key;
            this.value = value;
        }

        public int getKey() {return key;}
        public char getValue() {return value;}

        public char setValue(char value) {
            char old = this.value;
            this.value = value;
            return old;
        }
    }

    protected ArrayList<Entry<Integer,Character>> heap = new ArrayList<>();

    public heapPriorityQueue(){super();}

    protected int parent(int j){return (j-1)/2;}
    protected int left(int j){return 2*j+1;}
    protected int right(int j){return 2*j+2;}
    protected Boolean hasLeft(int j){return left(j) < heap.size();}
    protected Boolean hasRight(int j){return right(j) < heap.size();}

    protected void swap(int i, int j){
        Entry<Integer,Character> temp = heap.get(i);
        heap.set(i,heap.get(j));
        heap.set(j,temp);
    }

    protected boolean compare(Entry<Integer,Character> a, Entry<Integer,Character> b){
        return(a.getKey() >= b.getKey());
    }

    protected void upheap(int j){
        int p = parent(j);
        if(compare(heap.get(j),heap.get(p))) return;
        else swap(j,p);
        upheap(p);
    }

    protected void downheap(int j){
        if (!hasLeft(j) && !hasRight(j)) return;
        int smallerIndex = left(j);
        int leftKey = heap.get(left(j)).getKey();
        int rightKey = heap.get(right(j)).getKey();
        if(leftKey > rightKey) smallerIndex = right(j);
        swap(j, smallerIndex);
        downheap(smallerIndex);
    }

    public Entry<Integer,Character> insert(int key, char value){
        Entry<Integer,Character> newest = new Entry<>(key,value);
        heap.add(newest);
        upheap(heap.size()-1);
        return newest;
    }

    public void printEntries(){
        for(int i=0; i<heap.size(); i++){
            System.out.println(heap.get(i).getKey() + " : " + heap.get(i).getValue());
        }
    }

    public static void main(String[] args){
        heapPriorityQueue HPQ = new heapPriorityQueue();
        HPQ.insert(5,'A');
        HPQ.insert(4,'B');
        HPQ.insert(7,'F');
        HPQ.insert(1,'D');
        HPQ.insert(3,'J');
        HPQ.insert(6,'L');
        HPQ.insert(8,'G');
        HPQ.insert(2,'H');
        HPQ.printEntries();
    }
}
