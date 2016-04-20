/**
 * @file   main.cpp
 * @brief  Assignment #12 - Weighted Graph
 * @author Ethan Slattery && Osvaldo Moreno Ornelas
 * @date   3-MAR-2016
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Graph.h"
using std::cout;
using std::endl;
using std::string;

typedef Graph<string> graph;

int main() {
    std::ofstream oFile;
    oFile.open("ASS13_Graph_out.txt");
    cout << "****************************************************************\n"
         << "** ASSIGNMENT #12 - GRAPH DEPTH FIRST SEARCH                  **\n"
         << "** AUTHOR: Ethan Slattery && Osvaldo Moreno Ornelas           **\n"
         << "** ---------------------------------------------------------- **\n"
         << "** This program implements the graph data structure using the **\n"
         << "** adjacency list method. The graph then uses a depth first   **\n"
         << "** search starting at the Dallas vertex outputting all the    **\n"
		 << "** vertices and edges visited in order.                       **\n"
         << "****************************************************************\n"
         << std::endl;

    /**
     * Use These variables to fill the tree quickly for testing.
     * The tree will fill from the array below in order, make sure that
     * the AR1_SIZE constant is the proper size of the array.
     */
    cout.flush();
    graph USMap;  // Test Tre
    USMap.insertEdge("Seattle", "San Francisco", 807);
    USMap.insertEdge("Seattle", "Denver", 1331);
    USMap.insertEdge("Los Angeles", "Denver", 1015);
    USMap.insertEdge("San Francisco", "Los Angeles", 381);
    USMap.insertEdge("Denver", "San Francisco", 1267);
    USMap.insertEdge("Denver", "Chicago", 1003);
    USMap.insertEdge("Chicago", "Seattle", 2097);
    USMap.insertEdge("Kansas City", "Chicago", 533);
    USMap.insertEdge("Kansas City", "Denver", 599);
    USMap.insertEdge("Kansas City", "Los Angeles", 1663);
    USMap.insertEdge("Kansas City", "New York", 1260);
    USMap.insertEdge("Kansas City", "Atlanta", 864);
    USMap.insertEdge("Chicago", "Boston", 983);
    USMap.insertEdge("Boston", "New York", 214);
    USMap.insertEdge("New York", "Chicago", 787);
    USMap.insertEdge("New York", "Atlanta", 888);
    USMap.insertEdge("Dallas", "Los Angeles", 1435);
    USMap.insertEdge("Dallas", "Kansas City", 496);
    USMap.insertEdge("Dallas", "Atlanta", 781);
    USMap.insertEdge("Houston", "Dallas", 239);
    USMap.insertEdge("Houston", "Atlanta", 810);
    USMap.insertEdge("Atlanta", "Miami", 661);
    USMap.insertEdge("Miami", "Houston", 1187);
    USMap.bst("Kansas City");

    // Print the Graph
    USMap.print(oFile);

    // end the program...
    cout << endl << endl << "I am GROOT" << endl;
    oFile.close();
    return 0;
}
