/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.11.2019
 *
 *  Removing elements from a vector using iterators
 */

#include <iostream>
#include <vector>

#include "../common/vect_utils.h"

using std::cout;
//using std::string;



// makes simple vector
IntVector makeStrVector1()
{
    IntVector v = { 1, -1, 2, -2, 3, -3, 4, -4 };
    return v;
}


/// Removes all negatives.
/// \return the same reference, which allows to use the method with chaining
IntVector& removeNegs(IntVector& v)
{
    for(IntVector::iterator it = v.begin();
        it != v.end();
        /* no modification section here!*/)
    {
        if(*it < 0)
            it = v.erase(it);       // erase remove an element under position it
                                    // and returns NEXT VALID iterator!
        else
            ++it;                   // simply move to the next element
    }

    return v;
}


int main()
{
    cout << "Hello world!\n\n";

    IntVector v1 = makeStrVector1();
    cout << "Initial vector: ";
    printVec(v1);
    cout << "\nVectors w/o negs: ";
    printVec(removeNegs(v1));       // removes and use the result immediately
    cout << "\nVector w/o negs again (want to see whether the init vector is modified or not): ";
    printVec(v1);

    return 0;
}
