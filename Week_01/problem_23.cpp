#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n; cin>>n;
    n-=1;
    long long arr[n];
    long long tra[n+1]={0};
    for (long long i = 1; i <= n; i++)
    {
        cin>>arr[i];
        tra[arr[i]]++;
        
    }
    
    for (long long i = 1; i <= n+1; i++)
    {
        if(tra[i] !=1){
            cout<<i<<endl; 
            break;
        }
    }
    
     

    return 0;
}