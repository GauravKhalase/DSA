#include<iostream>
using namespace std;

int main()
{
    int A = 72;
    int B = 24;
    if(A == 0) return B;
	    if(B == 0) return A;
	    
	    while(A>0 && B>0){
	        if(A>B){
	            A = A - B;
	        }
	        else{
	            B = B - A;
	        }
	    }
	    
        if(A ==B){
            cout<<B;
        }
        else{
            cout<<A;
        }
	    return A == B ? B:A;
    return 0;
}