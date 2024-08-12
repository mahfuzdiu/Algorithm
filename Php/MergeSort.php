<?php

/*
 * Merge sort
 * command to run code in cmd : cd > php > php MergeSort.php
 * */

class MergeSort
{

    public function __construct()
    {
        //ex for understanding; $array = [2, 3, 1];
        $array = [5, 10, 2, 50, 9, 3, 13, 36];
        echo 'Unsorted array: ' . json_encode($array) . PHP_EOL;
        $sortedArray = $this->sort($array);
        echo 'Sorted array : ' . json_encode($sortedArray);
    }

    public function sort($array)
    {
        if (count($array) <= 1) return $array;

        //divide array into half till 1 element in an sub array
        $halfLength = ceil((count($array) / 2)); //using ceil to limit the array chunk in two arrays
        $arrayChuck = array_chunk($array, $halfLength);

        // when recursion goes down to 1 element in the sub array chain, return that 1 element array
        // from sort function and then merges, sorts and return the sorted array to previous merge function in call stack
        return $this->merge($this->sort($arrayChuck[0]), $this->sort($arrayChuck[1]));
    }

    private function merge($firstHalf, $secondHalf)
    {
        //ex: merge([4, 5], [1, 3, 9])
        //merging with sorting.
        $newSortedArray = [];
        $i = $j = 0;

        //merging two sorted arrays into one. continues till one half is done
        while ($i < count($firstHalf) && $j < count($secondHalf)){
            if($firstHalf[$i] < $secondHalf[$j]){
                $newSortedArray[] = $firstHalf[$i];
                $i++;
            }
            else if($firstHalf[$i] > $secondHalf[$j]){
                $newSortedArray[] = $secondHalf[$j];
                $j++;
            }
        }

        //after one half is put in the newArray element, some element may left over in either one of sub array
        //since the left over elements (could be from $firstHalf or $secondHalf) are sorted we just add them to newArray
        while ($i < count($firstHalf)){
            $newSortedArray[] = $firstHalf[$i];
            $i++;
        }

        while ($j < count($secondHalf)){
            $newSortedArray[] = $secondHalf[$j];
            $j++;
        }

        return $newSortedArray;
    }
}

//runs the code
new MergeSort();

