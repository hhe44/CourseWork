import javax.swing.*;

public class Lab5Program1 {

	public static void main(String[] args) {
	
		String[] wordArray = new String[20];
		int subArrayLength = inputFromFile(args[0], wordArray);
		String isOrIsNot, inputWord;
		
		while (true) {
			inputWord = JOptionPane.showInputDialog(null, "Enter a word in all lower case:");
			
			if ( inputWord.equals("STOP") )
				System.exit(0);

			if (wordIsThere(inputWord, wordArray, subArrayLength)) 
				isOrIsNot = "is";
			else
				isOrIsNot = "is not";
			
			JOptionPane.showMessageDialog(null, "The word " + inputWord + " " + isOrIsNot + " on the list.");
		}
	}

	public static boolean wordIsThere(String item, String[] list, int length) {
		for (int i = 0; i < length; ++i)
			//If item is on the list
			if ( item.equals(list[i]) ) return true;
		return false;
	}
	
	
	//Everything else copied from slide...
	private static int inputFromFile(String filename, String[] words){
      TextFileInput in = new TextFileInput(filename);
      int lengthFilled = 0;
      String line = in.readLine();
      while ( lengthFilled < words.length && line != null ) { 
         words[lengthFilled++] = line;
         line = in.readLine();
      }
	  
      if ( line != null ) {
         System.out.println("File contains too many words.");
         System.out.println("This program can process only " +
                            words.length + " words.");
         System.exit(1);
      } 
      in.close();
      return lengthFilled; 
   }  
} 