#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>cooksRanks,int nP, int mid){
    int currP = 0;
    for(int i=0; i<cooksRanks.size(); i++){
        int R = cooksRanks[i];
        int j = 1;
        int timeTaken = 0;

        while(true){
            if(timeTaken + (j*R) <=mid){
                currP++;
                timeTaken = timeTaken + (j*R);
                j++;
            }
            else{
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> cooksRanks, int nP){
    int start = 0;
    int heighestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = heighestRank * (nP * (nP + 1)/2);
    int ans = -1;

    while(start<=end){
        int mid = (start + end)/2;
        if(isPossibleSolution(cooksRanks,nP,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int T;
    cout<<"Enter the no. of test cases: "<<endl; 
    cin>>T;
    while(T--){
        int nP, nC;
        cout<<"Enter the no. of pratha: "<<endl;
        cin >> nP;
        cout<<"Enter the no. of cooks: "<<endl;
        cin >> nC;
        vector<int> cooksRanks;
        cout<<"Enter the ranks of all cooks: "<<endl;
        while(nC--){
            int R;
            cin>>R;
            cooksRanks.push_back(R);
        }
        cout<<"The number of minutes needed to get the order done is: "<<endl;
        cout<<minTimeToCompleteOrder(cooksRanks, nP)<<endl;
    }

    return 0;
}