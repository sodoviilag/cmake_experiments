#include "MyLib.hpp"
#include <boost/circular_buffer.hpp>

const int myGreatBufferSize = 4;

void WhatAGreatFunction(void)
{
    boost::circular_buffer<int> myGreatCircularBuffer(myGreatBufferSize);
}