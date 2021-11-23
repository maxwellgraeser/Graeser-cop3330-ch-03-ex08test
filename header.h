/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Maxwell Graeser
 */

#include <iostream>
using namespace std;

// given an int it returns a string depicting if it is odd or even
string determine(int n) {
    if (n % 2 == 0)
        return "even number";
    else
        return "odd number";
}