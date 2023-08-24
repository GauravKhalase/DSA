#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{8, 9, 3, 4, 6};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;      // for duplicates
                ans.push_back(element);
            }
        }
    }

    for (auto value: ans)
    {
        cout << value << " ";
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
}