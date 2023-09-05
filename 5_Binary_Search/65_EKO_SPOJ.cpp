#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid){
    long long int woodCollected = 0;
    for(long long int i = 0; i< trees.size(); i++){
        if(trees[i] > mid){
            woodCollected = woodCollected + (trees[i] - mid);
        }
    }
    return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m){
    long long int start = 0;
    long long int end = *max_element(trees.begin(), trees.end());
    long long int ans = -1;

    while(start<=end){
        long long int mid = start + (end - start)/2;
        if(isPossibleSolution(trees,m,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main()
{
    long long int n, m;
    cout<<"Enter no. of trees: "<<endl;
    cin>>n;
    cout<<"Enter required wood in meters: "<<endl;
    cin>>m;

    vector<long long int> trees;

    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<"The maximum integer height of the sawblade that still allows him to cut off at least m metres of wood is: "<<endl;
    cout<< maxSawBladeHeight(trees,m)<<endl;

    return 0;
}