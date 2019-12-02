/*! \file       vect_utils.h
 *  \author     Sergey Shershakov
 *  \version    0.1.1
 *  \date       28.11.2019
 *
 *  Headers for utilities for std::vector
 */
 
#include <vector>
#include <iostream>
 
typedef std::vector<int> IntVector;

void fillRandomVec(IntVector& v, unsigned int k);
void outputVec(const IntVector& v, std::ostream& ostr);
void printVec(const IntVector& v);
void inputVectorFromStream(IntVector& v, std::istream& istr);
int findMilEl(const IntVector& v, int& val);

