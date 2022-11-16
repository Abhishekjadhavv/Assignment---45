
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset<int> mset;
    mset.insert(39);
    mset.insert(23);
    mset.insert(67);
    mset.insert(21);
    multiset<int>::iterator it = mset.begin();

    while (it != mset.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}