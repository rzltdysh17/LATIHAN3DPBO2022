#include <string>
#include <iostream>

using namespace std;

// Kelas RAM
class Ram
{
    // Atribut Private
    private:
        string capacity;
        int price;

    // Atribut Public
    public:
        // Constructor
        Ram()
        {
        
        }

        // Constructor Input
        Ram(string capacity, int price)
        {
            this->capacity = capacity;     
            this->price = price;
        }

        // Metode Setter
        void setCapacity(string capacity)
        {
            this->capacity = capacity;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        // Metode Getter
        string getCapacity()
        {
            return this->capacity;
        }

        int getPrice()
        {
            return this->price;
        }

        // Metode Print
        void printRam()
        {
            cout << "===============================" << endl;
            cout << "RAM:" << endl;
            cout << "===============================" << endl;
            cout << "Kapasitas      : " << this->capacity << endl;
            cout << "Harga          : " << "Rp" << this->price << endl;
        }
        // Destructor
        ~Ram()
        {

        };
};