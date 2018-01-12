import java.util.Arrays;

public class mergeSort {

    public static void merge(int[] sequence, int[] firstHalf, int[] secondHalf){
        int index1=0, index2=0;
        while(index1+index2 < sequence.length){
            if(index2 == secondHalf.length || ( index1 < firstHalf.length && firstHalf[index1] < secondHalf[index2]))
                sequence[index1+index2] = firstHalf[index1++];
            else sequence[index1+index2] = secondHalf[index2++];
        }
    }

    public static void mergeSort(int[] sequence){
        int n = sequence.length;
        if (n < 2) return;
        int mid = sequence.length / 2;
        int[] firstHalf = Arrays.copyOfRange(sequence, 0, mid);
        int[] secondHalf = Arrays.copyOfRange(sequence, mid, n);
        mergeSort(firstHalf);
        mergeSort(secondHalf);
        merge(sequence, firstHalf, secondHalf);
    }

    public static void main(String[] args){
        int[] sequence = {10,99,52,86,19,7,58,10,32,24};
        System.out.print("Array before mergeSort: ");
        for(int i: sequence) System.out.print(i + " ");
        System.out.println("");
        mergeSort(sequence);
        System.out.print("Array after mergeSort: ");
        for(int i: sequence) System.out.print(i + " ");
        System.out.println("");
    }
}

