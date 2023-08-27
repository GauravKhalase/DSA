#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    // // for vector
    // vector<int> v{1,2,3,4,5,6,7,8,9};
    // int target = 8;

    // if(binary_search(v.begin(),v.end(),target)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }

    // for array
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 8;
    int target = 8;

    if(binary_search(arr,arr+size,target)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}