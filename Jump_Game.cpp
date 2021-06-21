// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        
        if(A[0]==0){
            
            return 0;
        }
        int max=A[0]-1;
        int x=1;
        for(int i=1;i<N-1;i++){
            
            
            if(A[i]>max){
                max=A[i];
            }
            
            if(max<=0){
                x=0;
                break;
            }
            
            max--;
            
            
        }
        
        return x;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends