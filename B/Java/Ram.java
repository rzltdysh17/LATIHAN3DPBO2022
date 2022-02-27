// Kelas Ram
class Ram
{
    // Atribut Private
    private String capacity;
    private int price;

    // Constructor
    Ram()
    {
        
    }

    // Constructor Input
    public Ram(String capacity, int price)
    {
        this.capacity = capacity;
        this.price = price;
    }

    // Metode Getter dan Setter
    public String getCapacity()
    {
        return capacity;
    }

    public void setCapacity(String capacity)
    {
        this.capacity = capacity;
    }

    public int getPrice()
    {
        return price;
    }

    public void setPrice(int price)
    {
        this.price = price;
    }

    // Metode Print
    public void printRam()
    {
        System.out.println("==================================");
        System.out.println("Ram:");
        System.out.println("==================================");
        System.out.println("Kapasitas       : " + this.capacity);
        System.out.println("Harga           : " + "Rp" + this.price);
    }
}