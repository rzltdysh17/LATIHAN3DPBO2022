#include <string>
#include <iostream>

using namespace std;

// Kelas Disk
class Disk
{
    // Atribut Private
    private:
        string type;
        string capacity;
        int price;

    // Atribut Public
    public:
        // Constructor
        Disk()
        {
        
        }

        // Constructor Input
        Disk(string type, string capacity, int price)
        {
            this->type = type;
            this->capacity = capacity;     
            this->price = price;
        }

        // Metode Setter
        void setType(string type)
        {
            this->type = type;
        }

        void setCapacity(string capacity)
        {
            this->capacity = capacity;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        // Metode Getter
        string getType()
        {
            return this->type;
        }

        string getCapacity()
        {
            return this->capacity;
        }

        int getPrice()
        {
            return this->price;
        }

        // Metode Print
        void printDisk()
        {
            cout << "===============================" << endl;
            cout << "Hardisk:" << endl;
            cout << "===============================" << endl;
            cout << "Tipe           : " << this->type << endl;
            cout << "Kapasitas      : " << this->capacity << endl;
            cout << "Harga          : " << "Rp" << this->price << endl;
        }

        // Destructor
        ~Disk()
        {

        };
};