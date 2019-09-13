## Results

normal g++ compile 

|  Type  | Vector Time  | Pointers Time |
|--------|--------------|---------------|
| Linear | 1.6279s      | 1.12s         |
| Binary | 0.000265499s | 0.00042514s   |

 fast g++ compile or (make fast)

|  Type  | Vector Time  | Pointers Time |
|--------|--------------|---------------|
| Linear |  0.993623s   | 0.612005s     |
| Binary | 0.000224805s | 0.000244121s  |


## Disscusion Results:
where to start on this, when comparing the normal compiler such as "make clean" then "make"
optimalization. it shows clearly that the binarysearch is much faster than the linearsearch
its easy to explain that even in the pointer and array with the vector can be told on which
one is going to finish first. the linear and binary search that have the vector array goes 
number by number to find the value until it reaches the end and giving the results. the 
linear and binary that work with pointers jump from place to place. like it was told in class
the pointers jump from begin, end, and mid pointers until it finds the value and records it.
this is what makes the pointer much faster than the array from the vector.

after the files were tested on my vim, i tried the normal optimalization that was provided 
to find out the speed it takes to complete both binary and linear with vector array and pointers
but when putting the runtests.cpp into the make fast optimalization, it compiled the runtests.cpp
much faster with a much improved time then the normal compiler optimalization. if you can see
by the first table which is the normal optimalization and the fast compile optimalization,
you can see that linears cut a majority of a 1s and the binary by .00002 for both vector array
and pointers.
