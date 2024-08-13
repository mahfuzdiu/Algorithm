<?php

Class BinarySearch{
    public function __construct(){
        //sorted array
        $array = [1, 2, 15, 30, 55, 70];
        $result = $this->search($array, 15);
        echo $result;
    }

    public function search($array, $valueToSearch){
        if(count($array) == 1)
            return $array[0] == $valueToSearch ? $array[0] : 'Not found';

        $arrayHalf= ceil(count($array) / 2);
        if($array[$arrayHalf] == $valueToSearch){
            return $array[$arrayHalf];
        }

        $arrayChunk = array_chunk($array, $arrayHalf);
        if($array[$arrayHalf] > $valueToSearch){
            return $this->search($arrayChunk[0], $valueToSearch);
        } else
            return $this->search($arrayChunk[1], $valueToSearch);
    }
}

new BinarySearch();