<?php

function simple_search(array $list, $item)
{
    $start = microtime(true);
    $times = 0;
    foreach ($list as $val) {
        $times++;
        if ($val === $item) {
            $run_time = microtime(true) - $start;
            echo "Simple search: loop ${times} times, total ${run_time}ms, found ${item}" . PHP_EOL;
            return true;
        }
    }
    $run_time = microtime() - $start;
    echo "Simple search: loop ${times}, total ${run_time}ms, not found" . PHP_EOL;
    return false;
}


function binary_search(array $list, $item)
{
    $start = microtime(true);
    $times = 0;
    $high_index = count($list) - 1;
    $low_index = 0;
    while ($low_index <= $high_index) {
        $times++;
        $middle_index = intval(($low_index + $high_index) / 2);
        $guess = $list[$middle_index];
        if ($guess === $item) {
            $run_time = microtime(true) - $start;
            echo "Binary search: loop ${times} times, total ${run_time}ms, found ${item}" . PHP_EOL;
            return true;
        }
        if ($guess > $item) {
            $high_index = $middle_index - 1;
        } else {
            $low_index = $middle_index + 1;
        }
    }
    $run_time = microtime(true) - $start;
    echo "Binary search: loop ${times} times, total ${run_time}ms, not found" . PHP_EOL;
    return false;
}


$list = range(1, 1000000);
$item = 380060;
simple_search($list, $item);
binary_search($list, $item);