//
// avg3.cpp
//   Contains the min, max, avg functions and the main.
//

#include <iostream>
#include <cassert>
#include "tests.h"

using namespace std;

//
// A function to find the max of 5 numbers
//
int findMax(int a, int b, int c, int d, int e) {
    int max = a;
    if  (b > max) max = b;
    if  (c > max) max = c;
    if  (d > max) max = d;
    if  (e > max) max = e;
    return max;
}

//
// A function to find the min of 5 numbers
//
int findMin(int a, int b, int c, int d, int e) {
    int min = a;
    if  (b < min) min = b;
    if  (c < min) min = c;
    if  (d < min) min = d;
    if  (e < min) min = e;
    return min;
}

//
// A function to find the average of 5 numbers but not counting the
// highest or lowest
//

float avgMiddle3(int a, int b, int c, int d, int e) {
    int total = a + b + c + d + e;
    total = total - findMin(a,b,c,d,e) - findMax(a,b,c,d,e);
    return total/3.0;
}



int main() {
    testAll();
    return 0;
}