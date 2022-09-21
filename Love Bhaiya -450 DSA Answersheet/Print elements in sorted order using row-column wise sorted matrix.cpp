//Print elements in sorted order using row-column wise sorted matrix
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int>ans;
       for(int row=0;row<N;row++){
           for(int col=0;col<N;col++){
               ans.push_back(Mat[row][col]);
       }    
           
     }
     sort(ans.begin(),ans.end());
           int count=0;
           for(int row=0;row<N;row++){
               for(int col=0;col<N;col++){
                   Mat[row][col]=ans[count++];
           
                    }
               }
       return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends