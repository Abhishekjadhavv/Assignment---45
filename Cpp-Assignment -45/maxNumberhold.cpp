// Create a c++ program using multiset and returns the maximum number of elements
// that the multiset can hold –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    multiset<int>mset{12,34,56,77};
    cout<<"Total number of elements is "<<mset.size()<<endl;
    cout<<"This multiset can hold "<<mset.max_size()<<" elements"<<endl;  
    return 0;
}