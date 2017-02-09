class Pizza {
  private int numToppings;
  private int slicesLeft = 8;

  public Pizza() {
    this.numToppings = 1; //cheese duh
  }

  public Pizza(int numToppings) {
    this.numToppings = numToppings;
  }

  public boolean eatSlice() {
    if (slicesLeft > 0) {
      --slicesLeft;
      return true;
    }
    return false;
  }

  public static void main (String[] args) {
    Pizza p = new Pizza(); // pizza with just cheese :(
    Pizza p2 = new Pizza(4); // pizza with four tops
    p.eatSlice();
    p2.eatSlice();
    System.out.println("Yum!");
  }

}
