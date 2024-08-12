<?php

/*
 * ALso Bubble sort
 * command to run code in cmd : cd > php > php LoopSort.php
 * */

class LoopSort
{
    function __construct(){
        $array = [10, 5, 6 , 9, 5, 1 , 7];
        echo "Unsorted array: " . json_encode($array) . PHP_EOL;
        $sortedArray = $this->sort($array);
        echo "Sorted array: " . json_encode($sortedArray);
    }

    public function sort($array){
        //logic: just swap the values
        //to understand sort [3,2,1] in paper
        for ($i = 0; $i < count($array); $i++){
            for ($j = 0; $j < count($array) - 1; $j++){
                if($array[$j] > $array[$j + 1]){
                    $swapValue = $array[$j + 1];
                    $array[$j + 1] = $array[$j];
                    $array[$j] = $swapValue;
                }
            }
        }
        return $array;
    }
}

//runs the code
new LoopSort();