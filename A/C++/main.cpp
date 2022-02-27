#include <bits/stdc++.h>
#include <string>
#include "Pc.cpp"

using namespace std;
int main()
{
    // Setter
    Processor prosessor("Intel Core i7", 3000000);
    Disk hardisk("SSD", "1 TB", 2000000);
    Ram memory("8 GB", 1000000);
    int total = prosessor.getPrice() + hardisk.getPrice() + memory.getPrice(); // Menjumlahkan Total Harga
    Pc komputer(prosessor, hardisk, memory, total);

    // Print Data
    komputer.printPc();

    return 0;
}