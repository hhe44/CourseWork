import java.util.StringTokenizer;

/**
 * 
 * @author Henry He - CS212 / LabSection:11D
 * class Database is a LinkedList containing ListNodes.
 *
 */

public class Database {
	private ListNode first = new ListNode(null);
	private ListNode last = first;
	private int length = 0;

	/**
	 * The FileName constructor takes in a text file's name as a parameter.
	 * In the while loop...
	 * 1) ProduceItem x is initialized as a vegetable or a fruit, depending on the first tokenized item
	 * 2) The rest of the data pieces or tokenized items are fed into x
	 * 3) x is added into the Database by...
	 *      -creating a ListNode containing x as its data
	 *      -directing ListNode "last" to the new node
	 *      -change "last" to be the new node
	 * @param data The textfile that the constructor is reading from
	 */
	//FileName Constructor
	public Database(String data){
      TextFileInput reader = new TextFileInput(data);
      String line = reader.readLine();
      StringTokenizer dataPiece = new StringTokenizer(line,",");
      ProduceItem x;
      ListNode p = first.next;

      while( line != null) {
         //Check for V or F
         if ((dataPiece.nextToken()).equals("F")) x = new Fruit();
         else  x = new Vegetable();
         
         //Fill in x
         x.setCode(dataPiece.nextToken());
         x.setName(dataPiece.nextToken());
         x.setPrice(Float.parseFloat(dataPiece.nextToken()));
         
         //Append x
         ListNode node = new ListNode(x);
         last.next = node;
         last = node;
         ++length;
         
         //reset line and tokenizer
         line = reader.readLine();
         if (line != null) dataPiece = new StringTokenizer(line,",");
      }
      reader.close();
	}//end fileName constructor
	
	/**
	 * @return An integer representing the Database's length
	 */
	//length() method
   public int length() {
      return length;
   }//end getLength() method

   /**
    * 
    * @param c The code to locate the ProduceItem within the Database
    * @return Either returns the name of the ProduceItem matching the code, or returns null for incorrect code.
    */
   //getName method
   public String getName (String c) {
      ListNode p = first.next;
      while (p != null) {
         if (((p.data).getCode()).equals(c)) return (p.data).getName();
         p = p.next;
      }
      return null;
   }//end getName method
   
   /**
    * 
    * @param c The code to locate the ProduceItem within the Database
    * @return Either returns the price of the ProduceItem matching the code, or returns null for incorrect code.
    */
   //getPrice method
   public float getPrice (String c) {
      ListNode p = first.next;
      while (p != null) {
         if (((p.data).getCode()).equals(c)) return (p.data).getPrice();
         p = p.next;
      }
      return 0.0f;
   }//end getPrice method

   /**
    * An override for toString, probably an optional step.
    */
   //override toString
	public String toString() {
		ListNode p = first.next;
		String returnString = "";
		while (p != null) {
			returnString += p.data + "\n";
			p = p.next;
		}
		return returnString;
	} //end override toString
	
} // class LinkedList

