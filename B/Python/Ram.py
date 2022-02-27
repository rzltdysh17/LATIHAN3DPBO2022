# Kelas Ram
class Ram:
    __capacity = ""
    __price = 0

    # Constructor
    def __init__(self, capacity ="", price = 0):
        self.__capacity = capacity
        self.__price = price

    # Metode Setter
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    # Metode Getter
    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
    
    # Metode Print
    def printRam(self):
        print("===============================")
        print("Ram:")
        print("===============================")
        print("Kapasitas    : " + self.getCapacity())
        print("Harga        : " + "Rp" + str(self.getPrice()))