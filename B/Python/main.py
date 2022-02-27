from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

# Setter
prosessor = Processor("Intel Core i7", 3000000)
hardisk = Disk("SSD", "1 TB", 2000000)
memory = Ram("8 GB", 1000000)

total = prosessor.getPrice() + hardisk.getPrice() + memory.getPrice(); # Menjumlahkan Total Harga
komputer = Pc(prosessor, hardisk, memory, total)

# Print Data
komputer.printPc()