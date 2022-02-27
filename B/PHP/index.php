<?php
include "Pc.php";

// Setter
$prosessor = new Processor("Intel Core i7", 3000000);
$hardisk = new Disk("SSD", "1 TB", 2000000);
$memory = new Ram("8 GB", 1000000);
$total = $prosessor->getPrice() + $hardisk->getPrice() + $memory->getPrice(); // Menjumlahkan Total Harga
$komputer = new Pc($prosessor, $hardisk, $memory, $total);

// Print Data
$komputer->printPc(); // print hasilnya
?>