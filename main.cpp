#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set <int> mySet;
    set <int>::iterator setIterator;
    int numQueries = 0;

    cin >> numQueries;

    //Data validate numQueries  0 < Q < 1e5
    if (numQueries < 1 && numQueries > 1e5 ) {
        numQueries = 0;
    }

    //Create a count-controlled loop that cycles for n number of queries
    for (int i = 0; i < numQueries; i++) {
        int switchOption = 0;
        int value = 0;

        //get Input ( a = switch options x = value) && validate 1 < a < 3 && 1 < x < 1e9
        cin >> switchOption >> value;
        if (switchOption < 1 || switchOption > 3 ) {
            switchOption = 0;
        }

        if (value < 1 || value > 1e9) {
            value = 0;
        }

        //Switch
        switch(switchOption) {
            case 1:
                // Option 1, Add element x to set
                setIterator = mySet.find(value);
                if (setIterator == mySet.end()) {
                    mySet.insert(value);
                }
                break;
            case 2:
                // Option 2, Delete Element x from set if exists, or do nothing if x not in set
                setIterator = mySet.find(value);
                if (setIterator != mySet.end()) {
                    mySet.erase(value);
                }
                break;
            case 3:
                //Option 3, Print yes if x is found in set or no if x is not found in set
                setIterator = mySet.find(value);
                if (setIterator != mySet.end()) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
                break;
            default:
                break;
                //Default, Do nothing
        }
    }

    return 0;
}