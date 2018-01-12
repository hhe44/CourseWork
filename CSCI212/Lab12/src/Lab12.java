import javax.swing.*;
import java.awt.*;
public class Lab12{
   
   static TextFileInput inFile;
   static String inFileName = "lab12.txt";
   static JFrame myFrame;
   static Container cPane;
   static TextArea even, odd;
   
   public static void main(String[] args) {
      initialize();
      readNumbersFromFile(inFileName);
      
   }   
   public static void initialize() {
      inFile = new TextFileInput(inFileName);
      even = new TextArea();
      odd = new TextArea();
      myFrame=new JFrame();
      myFrame.setSize(400,400);
      myFrame.setLocation(200, 200);
      myFrame.setTitle("Lab12");
      myFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   }
   public static void readNumbersFromFile(String fileName){
      /*
       * Add code to this method so...
       * - the two text areas are added to the content pane of the JFrame
       *   (see the code in the PowerPoint on GUIs)
       * - numbers are read from the file, and even numbers are put in 
       *   the TextArea "even", odd numbers in "odd".
       * - At end of file, the JFrame is made visible.
       */
	   
	   
	   
      String line;
      line = inFile.readLine();
      while (line != null) {
          
          
          
          
          
       } //while
   } //readSSNsFromFile
   
      
   
   
   
} //SSN