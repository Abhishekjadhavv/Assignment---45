// Create a c++ program using multiset and inserts the element x in the multiset –>
// O(log n)

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset<int> mset;
    int num;
    cout << "Inserts 5 elements in multiset" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        mset.insert(num);
    }
    multiset<int>::iterator it = mset.begin();
    while (it != mset.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}