#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size_a = 5;
    int brr[] = {6, 7, 8, 9};
    int size_b = 4;

    vector<int> ans;

    for (int i=0;i<size_a;i++){
        ans.push_back(arr[i]);
    }

    for (int i=0;i<size_b;i++){
        ans.push_back(brr[i]);
    }

    for (int i=0;i<ans.size();i++){
        cout<< ans[i] << " ";
    }  

}