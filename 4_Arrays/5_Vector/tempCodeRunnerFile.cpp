#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> brr(10); 
    vector<int> crr(10, -1); 
    vector<int> drr{10,20,30,50}; // mostly not used

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    cout<<brr.size()<<endl;


}