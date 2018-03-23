
#include <vector>
#include <iostream>
#include "gtest/gtest.h"

void test_vector_int()
{
    std::vector<int> vi;

    for (int i=1; i<100; i++)
        vi.push_back(i);

    assert(false);
}


int main()
{
    test_vector_int();
    return 0;
}

