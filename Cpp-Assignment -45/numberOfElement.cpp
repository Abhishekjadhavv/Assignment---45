// Create a c++ program using multiset and returns the number of elements in the
// multiset –> O(1)

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    multiset<int> mset;
    mset.insert(78);
    mset.insert(12);
    mset.insert(76);
    mset.insert(20);
    multiset<int>::iterator it = mset.begin();
    while(it != mset.end()){
     cout<<*it<<" ";
     it++;
    }
    cout<<endl;
    cout<<"Total number of elements in multiset is "<<mset.size()<<endl;
    return 0;
}