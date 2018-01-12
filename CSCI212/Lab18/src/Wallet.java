import java.text.DecimalFormat;

public class Wallet {
  private MoneyList walletContents = new MoneyList();
  
  public Wallet(){
	  //since walletContents is instantiated already, you may
	  //leave this constructor blank, or you may instantiate it
	  //here instead
  }
  
  /**
   * Adds Money object m to the wallet contents.
   * @param m The Money object to be added.
   */
  public void addToWallet(Money m){
	  walletContents.append(m); //your MoneyList class has an append method, use it!
  }
  
  /**
   * Prints the contents of the wallet to the console.
   */
  public void print () {
	  System.out.println(walletContents); //automatically invokes toString method!
  }
  
  /**
   * Returns the value of the wallet's contents in the following format: "dddd.cc".
   * @return value of wallet's contents in the following format: "dddd.cc" 
   */
  public String getValue() {
     DecimalFormat df = new DecimalFormat("#.##");
     return df.format(walletContents.getValue()); //using getValue method of MoneyList class 
  }											 
}