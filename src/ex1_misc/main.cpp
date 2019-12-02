/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.11.2019
 *
 *  Misc
 */

#include <iostream>
#include <vector>

using std::cout;


int main()
{
    cout << "Hello world!\n\n";

    using std::vector;
    vector<int> v1 = {10, 20, 30, 40};
    vector<int>::iterator it = v1.begin();


    return 0;
}
