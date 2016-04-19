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
    oFile.open("ASS12_Graph_out.txt");
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
    graph USMap;  // Test Tree

//    // Connect all the vertices
//    USMap.insertEdge("Seattle","Chicago", 2097);
//    USMap.insertEdge("Seattle","Denver", 1331);
//    USMap.insertEdge("Seattle","San Francisco", 807);
//    USMap.insertEdge("San Francisco","Los Angeles", 381);
//    USMap.insertEdge("San Francisco","Denver", 1267);
//    USMap.insertEdge("Los Angeles","Denver", 1015);
//    USMap.insertEdge("Los Angeles","Kansas City", 1663);
//    USMap.insertEdge("Los Angeles","Dallas", 1435);
//    USMap.insertEdge("Denver","Chicago", 1003);
//    USMap.insertEdge("Denver","Kansas City", 599);
//    USMap.insertEdge("Chicago","Kansas City", 533);
//    USMap.insertEdge("Chicago","Boston", 983);
//    USMap.insertEdge("Chicago","New York", 787);
//    USMap.insertEdge("Kansas City","Dallas", 496);
//    USMap.insertEdge("Kansas City","New York", 1260);
//    USMap.insertEdge("Kansas City","Atlanta", 864);
//    USMap.insertEdge("Dallas","Houston", 239);
//    USMap.insertEdge("Dallas","Atlanta", 781);
//    USMap.insertEdge("Houston","Atlanta", 810);
//    USMap.insertEdge("Houston","Miami", 1187);
//    USMap.insertEdge("Atlanta","Miami", 661);
//    USMap.insertEdge("Atlanta","New York", 888);
//    USMap.insertEdge("New York","Boston", 214);

//    USMap.dft("Dallas");

    // Print the Graph
//    USMap.print(oFile);


    USMap.insertDirectedEdge("Seattle", "San Francisco", 807);
    USMap.insertDirectedEdge("Seattle", "Denver", 1331);
    USMap.insertDirectedEdge("San Francisco", "Los Angeles", 381);

    USMap.insertDirectedEdge("Los Angeles", "Denver", 1015);
    USMap.insertDirectedEdge("Denver", "Chicago", 1003);
    USMap.insertDirectedEdge("San Francisco", "Los Angeles", 381);
    USMap.insertDirectedEdge("Denver", "San Francisco", 1267);
    USMap.insertDirectedEdge("Denver", "Chicago", 1003);
    USMap.insertDirectedEdge("Chicago", "Seattle", 2097);
    USMap.insertDirectedEdge("Kansas City", "Chicago", 533);
    USMap.insertDirectedEdge("Kansas City", "Denver", 599);
    USMap.insertDirectedEdge("Kansas City", "Los Angeles", 1663);
    USMap.insertDirectedEdge("Kansas City", "New York", 1260);
    USMap.insertDirectedEdge("Kansas City", "Atlanta", 864);
    USMap.insertDirectedEdge("Chicago", "Boston", 983);
    USMap.insertDirectedEdge("Boston", "New York", 214);
    USMap.insertDirectedEdge("New York", "Chicago", 787);
    USMap.insertDirectedEdge("New York", "Atlanta", 888);
    USMap.insertDirectedEdge("Kansas City", "Los Angeles", 1663);
    USMap.insertDirectedEdge("Dallas", "Los Angeles", 1435);
    USMap.insertDirectedEdge("Dallas", "Kansas City", 496);
    USMap.insertDirectedEdge("Dallas", "Atlanta", 781);
    USMap.insertDirectedEdge("Houston", "Dallas", 239);
    USMap.insertDirectedEdge("Houston", "Atlanta", 810);
    USMap.insertDirectedEdge("Atlanta", "Miami", 661);
    USMap.insertDirectedEdge("Miami", "Houston", 1187);

    //USMap.BST("Kansas City");

    // end the program...
    cout << endl << endl << "I am GROOT" << endl;
    oFile.close();
    return 0;
}
