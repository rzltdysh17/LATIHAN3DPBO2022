# Kelas Disk
class Disk:
    __type = ""
    __capacity = ""
    __price = 0

    # Constructor
    def __init__(self, type="", capacity ="", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # Metode Setter
    def setType(self, type):
        self.__type = type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    # Metode Getter
    def getType(self):
        return self.__type
    
    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
    
    # Metode Print
    def printDisk(self):
        print("===============================")
        print("Disk:")
        print("===============================")
        print("Tipe         : " + self.getType())
        print("Kapasitas    : " + self.getCapacity())
        print("Harga        : " + "Rp" + str(self.getPrice()))