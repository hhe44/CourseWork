/**
 * @author Henry He - CS212 / LabSection:11D
 * Project1Main is the main program that creates the database and its receipt
 */

import java.util.*;

import javax.swing.*;

import java.awt.*;
import java.text.DecimalFormat; //used in "createReceipt" (line 114 - 159)

public class Project1Main {

   /**
    * The createReceipt method creates a GUI that mimics a receipt
    *    -It starts off with an initialization
    *    -4 text areas are organized and added to the GUI
    *    -Information from the transaction file is appended
    *    -Calculations are made using the information between the transaction and database file
    * 
    * @param transaction The text file containing the transactions made
    * @param d The database containing all the info for ProduceItems
    * 
    * 
    */
   public static void createReceipt(String transaction, Database d) {
      
      //Initialization
      JFrame myReceipt=new JFrame();
      myReceipt.setSize(400, 400);
      myReceipt.setLocation(100, 100);
      myReceipt.setTitle("Customer Receipt");
      myReceipt.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      myReceipt.setVisible(true);
      
      //Organization -> 4 columns for name, price, weight, cost
      myReceipt.setLayout( new GridLayout(1, 4) );
      Container content = myReceipt.getContentPane(); 
      
      TextArea name = new TextArea("ITEMS"+ "\n", d.length(), 25, TextArea.SCROLLBARS_NONE);
      TextArea price = new TextArea("PRICE" + "\n", d.length(), 25, TextArea.SCROLLBARS_NONE);
      TextArea weight = new TextArea("WEIGHT" + "\n", d.length(), 25, TextArea.SCROLLBARS_NONE);
      TextArea cost = new TextArea("COST" + "\n", d.length(), 25, TextArea.SCROLLBARS_NONE);

      content.add(name);
      content.add(price);
      content.add(weight);
      content.add(cost);
      
      //Append
      DecimalFormat round = new DecimalFormat("###.##");
      TextFileInput reader = new TextFileInput(transaction);
      String line = reader.readLine();
      StringTokenizer dataPiece = new StringTokenizer(line,",");
      float tCost = 0.0f;
      while (line!=null){
         String code = dataPiece.nextToken();
         name.append( d.getName(code) + "\n");
         price.append( Float.toString( d.getPrice(code) ) + "\n");
         
         String lbs = dataPiece.nextToken();
         weight.append( lbs + "\n");
         float calc = d.getPrice(code) * Float.parseFloat(lbs);
         tCost += calc;

         cost.append( round.format(calc)  + "\n");
  
         line = reader.readLine();
         if (line!=null) dataPiece = new StringTokenizer(line,",");
      }
      
      cost.append( "\n" + "TOTAL:" + "\n" + round.format(tCost));
   } //end createReceipt
   
   public static void main(String[] args) {
      Database inventory = new Database("database2.txt");
      createReceipt("transactions2.txt",inventory);;
   }//main
}//project1