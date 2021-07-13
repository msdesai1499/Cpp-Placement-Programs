// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int find_height(int a[], int n, int k)
    {
        
        int max=0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        int l=0;
        int h=max;
        int sum;
        int mid=0;
        while(l<h){
            mid=(l+h)/2;
            sum=0;
            for(int i=0;i<n;i++){
                if(a[i]>mid){
                    sum=sum+(a[i]-mid);
                }
            }
            if(sum==k){
                return mid;
            }
            else if(sum>k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
        return -1;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}  // } Driver Code Ends