// Create a c++ program using multiset and returns whether the multiset is empty –>
// O(1)

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset<int> mset{12, 34, 56, 77};

    if (mset.empty())
    {
        cout << "Multiset is empty" << endl;
    }
    else
    {
        cout << "Multiset is not empty" << endl;
    }
}