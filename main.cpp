#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> mySet;

    int numQueries = 0;

    //Data validate numQueries  0 < Q < 1e5

    //Create a count-controlled loop that cycles for n number of queries
    for (int i = 0; i < numQueries; i++) {

        //get Input (getline where a = switch options x = value)
        int switchOption = 0;
        int value = 0;

        //validate 1 < a < 3 && 1 < x < 1e9

        //Swtich

            // Option 1, Add element x to set

            // Option 2, Delete Element x from set if exists, or do nothing if x not in set

            //Option 3, Print yes if x is found in set or no if x is not found in set

            //Default, Do nothing

    }

    return 0;
}