#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(char first, char second){
    // return first > second;       //descending order of chars
    return first < second;      //ascending order of chars
}

int compare(int a, int b){
    return a < b;       //for ascending order
    // return a > b;       //for descending order
}

int main()
{
    string s = "gaurav";
    sort(s.begin(),s.end(),comparator);
    cout<<s<<endl;

    vector<int>v{1,2,3,4,5};
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<< i <<" ";
    }
    return 0;
}