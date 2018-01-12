public class TwoDimArray {

	public static int[][] myArray = {{1,2,3},{4,5,6},{7,8,9}};
	
	public static void main(String[] args) {
		printArray(myArray);
		printArrayEven(myArray);
		
		myArray = fillArray("twodimension.txt");
		printArray(myArray);
		printArrayEven(myArray);
	}
	private static void printArray (int[][] theArray) {
		for (int i=0; i<theArray.length; i++) {
			for (int j=0; j<theArray[i].length;j++)
				display(theArray[i][j]);
			System.out.println();
		}
	}
	private static void display (int num){
		System.out.print(num+" ");
	}
	
	private static void printArrayEven(int[][] array){
		System.out.println();
		for (int i=0; i<array.length; i++) {
			for (int j=0; j<array[i].length;j++)
				if (array[i][j] % 2 == 1)
					System.out.print("* ");
				else 
					display(array[i][j]);
			System.out.println();
		}
	}
	
	public static int[][] fillArray(String myFile) {
		TextFileInput reader = new TextFileInput(myFile);
	
		String line = reader.readLine();
		int numRows = Integer.parseInt(line); 
		
		line = reader.readLine(); 
		int numCols = Integer.parseInt(line); 
		
		int[][] array = new int[numRows][numCols]; 
		
		for (int i = 0; i < numRows; ++i) {
			for (int j = 0; j < numCols; ++j) {
				line = reader.readLine(); 
				array[i][j] = Integer.parseInt(line);
			}
		}
		
		reader.close();
		return array;
	}
}
