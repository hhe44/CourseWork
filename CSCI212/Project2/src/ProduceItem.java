/**
 * 
 * @author Henry He - CS212 / LabSection:D
 * ProduceItem is the superclass of "Fruit" and "Vegetable"
 * it contains the code, name, and price of an actual produce item
 */
public abstract class ProduceItem{
   protected String code;
   protected String name;
   protected float price;
   
   /**
    * The default constructor; contains nothing
    */
   //default constructor
   public ProduceItem(){
      code = null;
      name = null;
      price = 0.0f;
   }
   
   /**
    * 
    * @param c The String containing the ProduceItem's code
    * @param n The String containing the ProduceItem's name
    * @param p The float containing the ProduceItem's price
    */
   //three argument constructor
   public ProduceItem(String c, String n, float p) {
      code = c;
      name = n;
      price = p;
   }
   
   /**
    * 
    * @return Depending on the get-method used, it will return code, name or price
    */
   //get-methods
   public String getCode() {return code;}
   public String getName() {return name;}
   public float getPrice() {return price;}
   
   /**
    * 
    * @param c The String containing the code to input into a ProduceItem
    */
   //set-methods
   public void setCode(String c) {code = c;}
   
   /**
    * 
    * @param n The String containing the name to input into a ProduceItem
    */
   public void setName(String n) {name = n;}
   
   /**
    * 
    * @param p The String containing the price to input into a ProduceItem
    */
   public void setPrice(float p) {price = p;}
   
   /**
    *  An override for toString; likely an optional step
    */
   //toString override
   public String toString() {
      return "Code: " + code + "   " + "Name: " + name + "   " 
             + "Price: " + Float.toString(price);
   }
   
   /**
    * The equals override checks that...
    *    -the classes are the same
    *    -the codes are the same
    *    -the names are the same
    *    -the price are the same
    *  ...between two different objects.
    */
   //equals override
   public boolean equals (Object o) {
      return ( o != null
               && getClass() == o.getClass()
               && code.equals(((ProduceItem)o).getCode())
               && name.equals(((ProduceItem)o).getName())
               && price == (((ProduceItem)o).getPrice())
            );   
   }  
}//end class ProduceItem