// Kelas Disk
class Disk
{
    // Atribut Private
    private String type;
    private String capacity;
    private int price;

    // Constructor
    Disk()
    {
        
    }

    // Constructor Input
    public Disk(String type, String capacity, int price)
    {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    // Metode Getter dan Setter
    public String getType()
    {
        return type;
    }

    public void setType(String type)
    {
        this.type = type;
    }

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
    public void printDisk()
    {
        System.out.println("==================================");
        System.out.println("Hardisk:");
        System.out.println("==================================");
        System.out.println("Tipe            : " + this.type);
        System.out.println("Kapasitas       : " + this.capacity);
        System.out.println("Harga           : " + "Rp" + this.price);
    }
}
