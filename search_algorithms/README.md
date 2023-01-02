# C - Search Algorithms

This is the project with C.
learn about Search Algorithms.


## General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Tasks
__0- Write a function that searches for a value in an array of integers using the Linear search algorithm__

* Prototype : int linear_search(int \*array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

File: 0-linear.c

__1- Write a function that searches for a value in a sorted array of integers using the Binary search algorithm__

* Prototype : int binary_search(int \*array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won’t appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

File: 1-binary.c

__2- What is the time complexity (worst case) of a linear search in an array of size n?__

File: 2-O

__3- What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?__

File: 3-O

__4- What is the time complexity (worst case) of a binary search in an array of size n?__

File: 4-O

__5- What is the space complexity (worst case) of a binary search in an array of size n?__

File: 5-O

__6- What is the space complexity of this function / algorithm?__

File: 6-O

## Repo
* GitHub repository: holbertonschool-low_level_programming
* Directory: search_algorithms

