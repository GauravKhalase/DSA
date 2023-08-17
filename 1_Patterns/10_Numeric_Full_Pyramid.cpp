#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<"  ";
        }
        for (int col=0;col<row+1;col++){
            cout<<col+row+1<<" ";
        }
        int start = row*2;
        for (int col=0; col<row;col++){
            cout<<start<<" ";
            start=start-1;
        }
        cout<<endl;
    }
}