#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        int count=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
            if(sum==count)
            {
                ans=i;
                break;
            }
            count+=arr[i];
        }
        if(ans!=-1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}