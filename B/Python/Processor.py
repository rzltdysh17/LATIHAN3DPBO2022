# Kelas Processor
class Processor:
    __name = ""
    __price = 0

    # Constructor
    def __init__(self, name="", price = 0):
        self.__name = name
        self.__price = price

    # Metode Setter
    def setName(self, name):
        self.__name = name

    def setPrice(self, price):
        self.__price = price

    # Metode Getter
    def getName(self):
        return self.__name

    def getPrice(self):
        return self.__price
    
    # Metode Print
    def printProcessor(self):
        print("===============================")
        print("Prosessor:")
        print("===============================")
        print("Nama         : " + self.getName())
        print("Harga        : " + "Rp" + str(self.getPrice()))