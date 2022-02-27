#include <string>
#include <iostream> 
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

// Kelas Pc Composite Kelas Processor, Disk, dan Ram
class Pc
{
    // Atribut Private
    private:
        Processor o_processor;
        Disk o_disk;
        Ram o_ram;
        int totalPrice;
    
    // Atribut Public
    public:
        // Constructor
        Pc() 
        {

        }

        // Constructor Input
        Pc(Processor o_processor, Disk o_disk, Ram o_ram, int totalPrice)
        {
            this->o_processor = o_processor;
            this->o_disk = o_disk;
            this->o_ram = o_ram;
            this->totalPrice = totalPrice;
        }

        // Metode Setter
        void setProcessor(Processor o_processor)
        {
            this->o_processor = o_processor;
        }

        void setDisk(Disk o_disk)
        {
            this->o_disk = o_disk;
        }

        void setRam(Ram o_ram)
        {
            this->o_ram = o_ram;
        }

        void setTotalPrice(int totalPrice)
        {
            this->totalPrice = totalPrice;
        }

        // Metode Getter
        Processor getProcessor()
        {
            return this->o_processor;
        }

        Disk getDisk()
        {
            return this->o_disk;
        }

        Ram getRam()
        {
            return this->o_ram;
        }

        int getTotalPrice()
        {
            return this->totalPrice;
        }

        // Metode Print
        void printPc()
        {
            cout << "===============================" << endl;
            cout << "Spesifikasi Komputer:" << endl;
            this->o_processor.printProcessor();
            this->o_disk.printDisk();
            this->o_ram.printRam();
            cout << "===============================" << endl;
            cout << "Total Harga    : " << "Rp" << this->totalPrice << endl;
            cout << "===============================" << endl;
        }

        // destructor
        ~Pc()
        {

        }
};