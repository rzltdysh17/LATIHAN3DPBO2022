#include <string>
#include <iostream>

using namespace std;

// Kelas Processor
class Processor
{
    // Atribut Private
    private:
        string name;
        int price;

    // Atribut Public
    public:
        // Constructor
        Processor()
        {
        
        }

        // Constructor Input
        Processor(string name, int price)
        {
            this->name = name;     
            this->price = price;
        }

        // Metode Setter
        void setName(string name)
        {
            this->name = name;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        // Metode Getter
        string getName()
        {
            return this->name;
        }

        int getPrice()
        {
            return this->price;
        }

        // Metode Print
        void printProcessor()
        {
            cout << "===============================" << endl;
            cout << "Prosessor:" << endl;
            cout << "===============================" << endl;
            cout << "Nama           : " << this->name << endl;
            cout << "Harga          : " << "Rp" << this->price << endl;
        }

        // Destructor
        ~Processor()
        {   

        };
};