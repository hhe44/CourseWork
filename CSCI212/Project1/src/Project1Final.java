import java.util.*;

import javax.swing.*;


public class Project1Final {
   public class ProduceItem{
      private String code;
      private String name;
      private float price;
      
      //default constructor
      public ProduceItem(){
         code = null;
         name = null;
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
      
      //Method will be used in fileName constructor
      //Purpose: count lines of file and return it
      public int findDatabaseSize(String data){
         TextFileInput reader = new TextFileInput(data);
         String line = reader.readLine();
         while(line!=null) {
            line = reader.readLine();
         }
         int lineCount = reader.getLineCount();
         reader.close();
         return lineCount;
      }
      
      //constructor
      public Database(String data){
         list = new ProduceItem[findDatabaseSize(data)];
         for (int i=0; i<list.length; i++){list[i] = new ProduceItem();}

         TextFileInput reader = new TextFileInput(data);
         String line = reader.readLine();
         StringTokenizer dataPiece = new StringTokenizer(line,",");
         for (int i=0; i<list.length; i++){
            list[i].setCode(dataPiece.nextToken());
            list[i].setName(dataPiece.nextToken());
            list[i].setPrice(Float.parseFloat(dataPiece.nextToken()));
            line = reader.readLine();
            if (line!=null) dataPiece = new StringTokenizer(line,",");
         }
         reader.close();
      }//end file input constructor
      
      //getName method
      public String getName(String c) {
         for (int i=0; i<list.length; i++) {
            if((list[i].getCode()).equals(c)) return list[i].name;
         }
         return null;
      }//end getName
      
      //getPrice method
      public float getPrice(String c) {
         for (int i=0; i<list.length; i++) {
            if ( (list[i].getCode()).equals(c)) return list[i].price;
         }
         return 0.0f;
      }//end getPrice
   }//end class Database
   
   public static void main(String[] args) {
      Database inventory = new Project1Final(). new Database("database.txt");
      System.out.println(inventory.getName("3333"));
      System.out.println(inventory.getPrice("4019"));
   }
}
