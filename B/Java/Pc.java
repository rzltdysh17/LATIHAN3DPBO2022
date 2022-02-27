// Kelas Pc Composite Kelas Processor, Disk, dan Ram
class Pc
{
    // Atribut Private
    private Processor o_processor;
    private Disk o_disk;
    private Ram o_ram;
    private int totalPrice;

    // Constructor
    Pc()
    {
        
    }

    // Constructor Input
    public Pc(Processor o_processor, Disk o_disk, Ram o_ram, int totalPrice)
    {
        this.o_processor = o_processor;
        this.o_disk = o_disk;
        this.o_ram = o_ram;
        this.totalPrice = totalPrice;
    }

    // Metode Getter dan Setter
    public Processor getProcessor()
    {
        return o_processor;
    }

    public void setProcessor(Processor o_processor)
    {
        this.o_processor = o_processor;
    }

    public Disk getDisk()
    {
        return o_disk;
    }

    public void setDisk(Disk o_disk)
    {
        this.o_disk = o_disk;
    }

    public Ram getRam()
    {
        return o_ram;
    }

    public void setRam(Ram o_ram)
    {
        this.o_ram = o_ram;
    }

    public int getTotalPrice()
    {
        return totalPrice;
    }

    public void setTotalPrice(int totalPrice)
    {
        this.totalPrice = totalPrice;
    }

    // Metode Print
    public void printPc()
    {
        System.out.println("==================================");
        System.out.println("Spesifikasi Komputer:");
        o_processor.printProcessor();
        o_disk.printDisk();
        o_ram.printRam();
        System.out.println("==================================");
        System.out.println("Total Harga     : " + "Rp" + this.totalPrice);
        System.out.println("==================================");
    }
}