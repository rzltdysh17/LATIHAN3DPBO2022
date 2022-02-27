<?php

// Kelas Ram
class Ram
{
    private $capacity;
    private $price;

    // Constructor
    function __construct($capacity, $price) 
    {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // Metode Setter
    function setCapacity($capacity) 
    {
        $this->capacity = $capacity;
    }

    function setPrice($price) 
    {
        $this->price = $price;
    }

    // Metode Getter
    function getCapacity() 
    {
        return $this->capacity;
    }

    function getPrice() 
    {
        return $this->price;
    }

    // Metode Print
    function printRam() 
    {
        echo "===============================". "<br/>";
        echo "Ram:". "<br/>";
        echo "===============================". "<br/>";
        echo "Kapasitas     : ". $this->getCapacity(). "<br/>";
        echo "Harga         : ". "Rp". $this->getPrice(). "<br/>";
    }
}
?>