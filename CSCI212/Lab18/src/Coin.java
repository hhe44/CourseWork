
public abstract class Coin extends Money {
   private int value;
   
   public Coin(int v) {
      value = v;
   }
   public int getValue () {
      return value;
   }
   public String toString() {
	  int val = getValue();
	  if ( val < 10) return  ("$ 0.0"+val);
      return ("$ 0."+val);
   }
}
