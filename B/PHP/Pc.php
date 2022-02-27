<?php
include "Processor.php";
include "Disk.php";
include "Ram.php";

// Kelas Pc Composite Kelas Processor, Disk, dan Ram
class Pc
{
    private $o_processor;
    private $o_disk;
    private $o_ram;
    private $totalPrice;

    // Constructor
    function __construct($o_processor, $o_disk, $o_ram, $totalPrice) 
    {
        $this->o_processor = $o_processor;
        $this->o_disk = $o_disk;
        $this->o_ram = $o_ram;
        $this->totalPrice = $totalPrice;
    }

    // Metode Setter
    function setProcessor($o_processor) 
    {
        $this->o_processor = $o_processor;
    }

    function setDisk($o_disk) 
    {
        $this->o_disk = $o_disk;
    }

    function setRam($o_ram) 
    {
        $this->o_ram = $o_ram;
    }

    function setTotalPrice($totalPrice) 
    {
        $this->totalPrice = $totalPrice;
    }

    // Metode Getter
    function getProcessor() 
    {
        return $this->o_processor;
    }

    function getDisk() 
    {
        return $this->o_disk;
    }

    function getRam() 
    {
        return $this->o_ram;
    }

    function getTotalPrice() 
    {
        return $this->totalPrice;
    }

    // Metode Print
    function printPc() 
    {
        echo "===============================". "<br/>";
        echo "Spesifikasi Komputer:". "<br/>";
        $this->o_processor->printProcessor();
        $this->o_disk->printDisk();
        $this->o_ram->printRam();
        echo "===============================". "<br/>";
        echo "Total Harga   : ". "Rp". $this->getTotalPrice(). "<br/>";
        echo "===============================". "<br/>";
    }
}
?>