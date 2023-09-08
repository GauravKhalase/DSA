#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=5;
    if(n==0) return 0;

        vector<bool>prime(n, true);
        prime[0] = prime[1] = false;

        int ans = 0;

        for(int i=2; i<n; i++){
            if(prime[i]){
                ans++;
                int j=2*i;
                while(j<n){
                    prime[j] = false;
                    j = j+i;
                }
            }
        }
        cout<<ans;
        return ans;
    return 0;
}