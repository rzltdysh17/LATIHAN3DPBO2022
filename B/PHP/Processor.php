<?php

// Kelas Processor
class Processor
{
    private $name;
    private $price;

    // Constructor
    function __construct($name, $price) 
    {
        $this->name = $name;
        $this->price = $price;
    }

    // Metode Setter
    function setName($name) 
    {
        $this->name = $name;
    }

    function setPrice($price) 
    {
        $this->price = $price;
    }

    // Metode Getter
    function getName() 
    {
        return $this->name;
    }

    function getPrice() 
    {
        return $this->price;
    }

    // Metode Print
    function printProcessor() 
    {
        echo "===============================". "<br/>";
        echo "Prosessor:". "<br/>";
        echo "===============================". "<br/>";
        echo "Nama      : ". $this->getName(). "<br/>";
        echo "Harga     : ". "Rp". $this->getPrice(). "<br/>";
    }
}
?>