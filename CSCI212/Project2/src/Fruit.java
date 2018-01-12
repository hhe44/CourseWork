/**
 * 
 * @author Henry He - CS212 / LabSection:D
 * class Fruit is a subclass of ProduceItem
 * The super() method is used to gain access to ProduceItem's default and three-arg constructors.
 */
public class Fruit extends ProduceItem{
   private String desc = "Fruits are the seed-bearing structure that develop from the ovary of plants."
         + " I'm not sure if including double-entendre is appropriate, or if doing so would boost my grade.";

   public Fruit() { super(); }
   public Fruit(String c, String n, float p) { super(c,n,p); }
   public String description() {return desc;}
}