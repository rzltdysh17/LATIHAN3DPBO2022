<?php

// Kelas Disk
class Disk
{
    private $type;
    private $capacity;
    private $price;

    // Constructor
    function __construct($type, $capacity, $price) 
    {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // Metode Setter
    function setType($type) 
    {
        $this->type = $type;
    }

    function setCapacity($capacity) 
    {
        $this->capacity = $capacity;
    }

    function setPrice($price) 
    {
        $this->price = $price;
    }

    // Metode Getter
    function getType() 
    {
        return $this->type;
    }

    function getCapacity() 
    {
        return $this->capacity;
    }

    function getPrice() 
    {
        return $this->price;
    }

    // Metode Print
    function printDisk() 
    {
        echo "===============================". "<br/>";
        echo "Disk:". "<br/>";
        echo "===============================". "<br/>";
        echo "Tipe          : ". $this->getType(). "<br/>";
        echo "Kapasitas     : ". $this->getCapacity(). "<br/>";
        echo "Harga         : ". "Rp". $this->getPrice(). "<br/>";
    }
}
?>