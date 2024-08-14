//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
     set<int>ans;
        int count=0;
        if(arr.size()<2){
            return -1;
        }
        sort(arr.begin(),arr.end(),std::greater<int>());
        for(auto i:arr){
            ans.insert(i);
            if(ans.size()==2){
                break;
            }
        }
        for(auto i:ans){
            count=i;
            break;
        }
        return count;    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends