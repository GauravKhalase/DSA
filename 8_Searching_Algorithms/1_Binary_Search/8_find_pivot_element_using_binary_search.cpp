#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>v){
    int s =0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid+1<=e && v[mid]>v[mid+1]){
            return mid;
        }
        if(mid-1>=s && v[mid-1]>v[mid]){
            return mid-1;
        }
        if(v[s]>v[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int>v{9,10,2,4,6,8};

    int ans = findPivot(v);

    cout<<"index is "<<ans<<endl;
    cout<<"pivot element is "<<v[ans]<<endl;

    return 0;
}