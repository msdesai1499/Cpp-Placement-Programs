// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long> p;
        int l=0;
        int h=v.size()-1;
        int mid=0;
        while(l<=h){
            mid=(l+h)/2;
            if(v[mid]==x){
                long long fo=mid;
                
                while(v[fo]==x){
                    fo--;
                }
                fo++;
                p.first=fo;
                long long lo=mid;
                while(v[lo]==x){
                    lo++;
                }
                lo--;
                p.second=lo;
                return p;
            }
            else if(v[mid]<x){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        p.first=-1;
        p.second=-1;
        return p;
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends