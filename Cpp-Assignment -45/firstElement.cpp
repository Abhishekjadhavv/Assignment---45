// Create a c++ program using multiset and returns an iterator to the first element in
// the multiset –> O(1)

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    multiset<int>mset;
    mset.insert(20);
    mset.insert(10);
    mset.insert(40);
    mset.insert(37);
   multiset<int>::iterator it = mset.begin();
   cout<<"First element is "<<*it;
    return 0;
}