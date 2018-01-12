//Written by Henry He, CS212 LabSection12E
   /*Plan:
    * Write Class "ProduceItem"
    *  - include code (String), name (String) and price (float)
    *  - include default and 3 arguments constructor
    *  - write get and set method
    *  - override Equals method
    *  
    * Write Class "Database"
    *  - create 1D array constructor of ProduceItems
    *  - write getName(String code) method 
    *    -search array for the same code and return name
    *    -apply similar steps for getPrice method
    *  
    *  
    *  Create JFrame receipt
    *  - Read in shopping list
    *  - calculate total cost
    *  
    *  Illustration of Data Structure
    *  Database Name (1D Array)
    *  [Class ProduceItem] - Each class will have name, code, price
    *  [Class ProduceItem]
    *  [Class ProduceItem]
    *  
    *  Update: 10/17/15 5:54PM
    *  Left off at Database Class, didn't write all the methods.
    *  I did make substantial progress by finishing the FileInputConstructor.
    *  Everything else should be easy...unless I was totally wrong. Haha.
    *  Resume work on line 122.
    * */

import java.util.*;

public class Project1 {
   
   public class ProduceItem{
      private String code;
      private String name;
      private float price;
      
      //default constructor
      public ProduceItem(){
         String code;
         String name;
         price = 0.0f;
      }//end default constructor
      
      //three argument constructor
      public ProduceItem(String c, String n, float p) {
         code = c;
         name = n;
         price = p;
      }//end three argument constructor
      
      //get methods 
      //(note2self: ask lab instructor on performing manual code folds)
      public String getCode() {return code;}
      public String getName() {return name;}
      public float getPrice() {return price;}
      
      //set methods
      public void setCode(String c) {code = c;}
      public void setName(String n) {name = n;}
      public void setPrice(float p) {price = p;}
      
      //public string toString
      public String toString() {
         return "Code: " + code + "   " + "Name: " + name + "   " 
                + "Price: " + Float.toString(price);
      }
      
      //Override equals
      public boolean equals (Object o) {
         return ( o != null
                  && getClass() == o.getClass()
                  && code.equals(((ProduceItem)o).getCode())
                  && name.equals(((ProduceItem)o).getName())
                  && price == (((ProduceItem)o).getPrice())
               );   
      }  
   }//end class ProduceItem
   
   public class Database{
      private ProduceItem[] list;

      //default constructor - do I really need one?
      public Database() {
      list = new ProduceItem[0];
      } //end default constructor
         
      //file input constructor
      public Database(String data) {
         TextFileInput reader = new TextFileInput(data);
         String line = reader.readLine(); //reads line 1
         
         /*
         //find listSize for ProduceItem array "list"
         int listSize = 0; //Remember: 0 is technically 1 in an array
         while (line!=null) {
            ++listSize; //Add 1 to list first (reason: refer to line 95)
            line = reader.readLine();
         }
         */
         
         //Create new array w/ listSize
         list = new ProduceItem[10];
         StringTokenizer dataPiece = new StringTokenizer(line,",");
         
         System.out.println(dataPiece.nextToken());
         System.out.println(dataPiece.nextToken());
         System.out.println(dataPiece.nextToken());
         line = reader.readLine();
         
         //Fill in the array of produce items
         for (int i=0; i<10; i++){
            list[i].setCode(dataPiece.nextToken());
            list[i].setName(dataPiece.nextToken());
            list[i].setPrice(Float.parseFloat(dataPiece.nextToken()));
            line = reader.readLine(); //go to next line and do the same thing for the next index
            dataPiece = new StringTokenizer(line,",");
         }
         reader.close();
      }//end file input constructor
      
      //getName method
      public String getName(String c) {
         for (int i=0; i<list.length; i++) {
            if ( (list[i]).equals(c)) return list[i].name;
         }
         return "ERROR";
      }//end getName
      
      //getPrice method
      public float getPrice(String c) {
         for (int i=0; i<list.length; i++) {
            if ( (list[i]).equals(c)) return list[i].price;
         }
         return 0f;
      }//end getPrice
      
   }//end Database class

   public static void main(String[] args) {
      ProduceItem cabbage = new Project1(). new ProduceItem();
      System.out.println(cabbage);
      cabbage.setCode("AAAA");
      cabbage.setName("Cabbage");
      cabbage.setPrice(1.50f);
      System.out.println(cabbage);
      
      Database list = new Project1(). new Database("database.txt");
   }//end main
   
}//end class Project1