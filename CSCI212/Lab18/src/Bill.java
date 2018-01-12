
public class Bill extends Money{
   private int dollars;
   
   public Bill (int d) {
      dollars = d;
   }
   public int getValue () {
      return dollars;
   }
   
   /**
    * Returns a String representation of the dollar amount.
    */
   public String toString() {
	   return "$" + dollars + ".00";
   }
}
