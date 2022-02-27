from Processor import Processor
from Disk import Disk
from Ram import Ram

# Kelas Pc Composite Kelas Processor, Disk, dan Ram
class Pc:
    __o_processor = Processor()
    __o_disk = Disk()
    __o_ram = Ram()
    __totalPrice = 0

    # Constructor
    def __init__(self, o_processor, o_disk, o_ram, totalPrice = 0):
        self.__o_processor = o_processor
        self.__o_disk = o_disk
        self.__o_ram = o_ram
        self.__totalPrice = totalPrice

    # Metode Setter
    def setProcessor(self, o_processor):
        self.__o_processor = o_processor
    
    def setDisk(self, o_disk):
        self.__o_disk = o_disk
    
    def setRam(self, o_ram):
        self.__o_ram = o_ram

    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice

    # Metode Getter
    def getProcessor(self):
        return self.__o_processor

    def getDisk(self):
        return self.__o_disk

    def getRam(self):
        return self.__o_ram

    def getTotalPrice(self):
        return self.__totalPrice
    
    # Metode Print
    def printPc(self):
        print("===============================")
        print("Spesifikasi Komputer:")
        self.__o_processor.printProcessor()
        self.__o_disk.printDisk()
        self.__o_ram.printRam()
        print("===============================")
        print("Total Harga  : " + "Rp" + str(self.getTotalPrice()))
        print("===============================")