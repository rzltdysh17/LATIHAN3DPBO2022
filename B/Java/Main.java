class Main
{
    public static void main(String[] args)
    {
        // Setter
        Processor prosessor = new Processor("Intel Core i7", 3000000);
        Disk hardisk = new Disk("SSD", "1 TB", 2000000);
        Ram memory = new Ram("8 GB", 1000000);
        int total = prosessor.getPrice() + hardisk.getPrice() + memory.getPrice(); // Menjumlahkan Total Harga
        Pc komputer = new Pc(prosessor, hardisk, memory, total);

        // Print Data
        komputer.printPc();
    }
}
