// 
// tests.h:
//    Contains the declarations of the test functions.
//

#include <iostream>
#include <cassert>
#include "avg3.h"
using namespace std;


int testFindMax() {
    assert( findMax(1,2,3,4,5) == 5);
    assert( findMax(5,4,3,2,1) == 5);
    assert( findMax(-1,2,3,4,-5) == 4);
    assert( findMax(0,2,0,0,0) == 2);
    assert( findMax(0,0,1,0,0) == 1);
    cout << "All findMax tests passed" << endl;    
}

int testFindMin() {
    assert( findMin(1,2,3,4,5) == 1);
    assert( findMin(5,4,3,2,1) == 1);
    assert( findMin(-1,2,-5,4,-3) == -5);
    assert( findMin(0,-2,0,0,0) == -2);
    assert( findMin(0,0,1,0,0) == 0);
    cout << "All findMin tests passed" << endl;    
}


void testAvgMiddle3() {
    assert (avgMiddle3 (1,2,3,4,5) == 3.0);
    assert (avgMiddle3 (10,2,10,10,50) == 10.0);
    cout << "All avegMiddle3 tests passed..." << endl;

}

void testAll() {
    testFindMax();
    testFindMin();
    testAvgMiddle3();  
}