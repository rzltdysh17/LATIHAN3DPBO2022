// Kelas Processor
class Processor
{
    // Atribut Private
    private String name;
    private int price;

    // Constructor
    Processor()
    {
        
    }

    // Constructor Input
    public Processor(String name, int price)
    {
        this.name = name;
        this.price = price;
    }

    // Metode Getter dan Setter
    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
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
    public void printProcessor()
    {
        System.out.println("==================================");
        System.out.println("Prosessor:");
        System.out.println("==================================");
        System.out.println("Nama            : " + this.name);
        System.out.println("Harga           : " + "Rp" + this.price);
    }
}
