/**
 * 
 * @author Henry He - CS212 / LabSection:D
 * class Vegetable is a subclass of ProduceItem
 * The super() method is used to gain access to ProduceItem's default and three-arg constructors.
 */
public class Vegetable extends ProduceItem{
   private String desc = "Vegetables are all edible parts of the plants, aside from the developed ovaries of a plant"
         + "(which is the fruit). They're extremely unpopular with children and worshipped by hypocritical environmentalists.";
   
   public Vegetable() { super(); }
   public Vegetable(String c, String n, float p) { super(c,n,p); }
   public String description() {return desc;}
}
