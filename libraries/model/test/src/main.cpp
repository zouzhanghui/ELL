//
// Graph tests
// 

#include "Graph_test.h"
#include "OutputPortElements_test.h"

// testing
#include "testing.h"

// stl
#include <iostream>
#include <unordered_map>



int main()
{
    TestStaticGraph();
    TestNodeIterator();
    TestExampleGraph();
    TestInputRouting1();
    TestInputRouting2();

    TestCopyGraph();
    TestRefineGraph();

    // OutputPortElements tests
    TestSlice();
    TestAppend();

    if (testing::DidTestFail())
    {
        return 1;
    }

    return 0;
}