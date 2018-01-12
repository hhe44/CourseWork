public class Money implements Comparable<Money> {
	
	private int dollars, cents;
	
	/**
	 * Constructor makes a call to {@link #Money(int, int)} 
	 * with (0,0) as parameters
	 */
	public Money() {
		this(0,0);
	}
	
	public Money(int d, int c) {
		dollars = d + (c/100);
		cents = c % 100;
	}
	
	

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// LAB 14
		Money m1 = new Money(), m2= new Money(6,5), m3 = new Money(6,5);
		System.out.println(m1.getCents());
		System.out.println(m2);
		System.out.println(m1.compareTo(m2));
		System.out.println(m1.equals(m2));
		System.out.println(m2.compareTo(m3));
		System.out.println(m2.equals(m3));
		
		// LAB 15
		m1 = new Money(4,87);
		m2 = new Money(5,243);
		m1.add(m2);
		
		System.out.println(m1.toString());
		
	}

	public void add(Money other) {
		int centTotal = cents + other.cents;
		dollars = dollars + other.dollars + (centTotal / 100);
		cents = centTotal % 100;
	}

	@Override
	public int compareTo(Money other) {
		// TODO Fill this in
		/*
		 * Steps:
		 * 1) Test the dollars in both first
		 * 2) If dollar values are equal, test
		 * cents in both
		 * 3) If both dollars and cents are equal return 0
		 * 
		 * Hint: compareTo can be viewed as a subtraction operation
		 */
		if (dollars - other.dollars == 0 && cents - other.cents == 0)return 0;
		else return 1;
	}
	
	@Override
	public boolean equals(Object other) {
		// TODO Fill this in
		/*
		 * Steps:
		 * 1) Test if other is null
		 * 2) Test if other is of type Money
		 * 3) If the above tests pass, then cast other into
		 * type Money
		 * 4) Compare dollar and cents in both. 
		 * If equal return true, otherwise return false
		 */
		if (other == null || other.getClass() != getClass()) { return false;}
		if (this == other) return true;
		if(other!=null && this.getClass().equals(other.getClass())) {
			// Start from step 3
			//code.equals(((ProduceItem)o).getCode())
			if (((Money)other).getCents() == cents &&((Money)other).getDollars() == dollars) return true;
			else return false;
		}
		return false;
	}
	
	@Override
	public String toString() {
		String c;
		if(cents<10) {
			c = "0" + cents;
		} else {
			c = "" + cents;
		}
		return "$ " + dollars + "." + c;
	}
	
	public int getCents() {
		return cents;
	}
	
	public int getDollars() {
		return dollars;
	}

}
