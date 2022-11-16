// Create a c++ program using multiset and removes all the elements from the multiset
// –> O(n)

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset<int> mset;
    mset.insert(20);
    mset.insert(6);
    mset.insert(4);
    mset.insert(12);
    cout<<"Before remove all elements"<<endl;
    multiset<int>::iterator it = mset.begin();
    while (it != mset.end())
    {
        cout << *it << " ";
        it++;
    }
    cout<<endl;
    mset.clear();
    cout<<"After remove all elements"<<endl;
    if(mset.empty()){
        cout<<"Multiset is empty"<<endl;
    }

    return 0;
}