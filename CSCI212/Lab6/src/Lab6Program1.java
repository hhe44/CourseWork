import javax.swing.*;

public class Lab6Program1 {
	
	public static void main(String[] args) {
		int[] numArray = new int[20];
		int subArraylength = inputFromFile(args[0], numArray);
		
		int sum = sum(numArray, subArraylength);
		int avg = average (numArray, subArraylength);
			
		JOptionPane.showMessageDialog(null, "The sum of all integers is  " + sum + ".");
		JOptionPane.showMessageDialog(null, "The average of all integers is  " + avg + ".");
		
	} 
	
	
	public static int inputFromFile(String filename, int[] numArray){
		TextFileInput in = new TextFileInput(filename);
		int lengthFilled = 0;
		String line = in.readLine();
		while ( lengthFilled < numArray.length && line != null ) {
			//Probably better to keep the parsing...even if redundant.
			//Store in numArray, move to new line
			numArray[lengthFilled++] = Integer.parseInt(line);		
			line = in.readLine();
		}
		if ( line != null ) {
			System.out.println("File contains too many numbers.");
			System.out.println("This program can process only " + numArray.length + " numbers.");
			System.exit(1);
		}
		in.close();
		return lengthFilled; 
	}
	

	public static int sum (int[] array, int arraysize) {
		int arraySum = 0;
		for (int i = 0; i < arraysize; ++i)
			arraySum += array[i];
		return arraySum;
	}//sum

	public static int average (int[] myArray, int myArraySize) {
		return sum(myArray, myArraySize)/myArraySize;
	}
	
} 