#include<iostream>
using namespace std;

int main(){
    int n=5;
    int start=1;
    for (int row=0;row<n;row++){
        for (int col=0;col<row+1;col++){
            cout<<start<<" ";
            start=start+1;
        }
        cout<<endl;
    }
}