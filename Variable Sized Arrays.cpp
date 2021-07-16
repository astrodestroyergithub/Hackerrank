#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q;
    
    cin>>n>>q;
    
    vector<int> a[n];
    
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int o;
            cin>>o;
            a[i].push_back(o);
        }
    }
    
    for(int i=0;i<q;i++)
    {
        int r,s;
        cin>>r>>s;
        cout<<a[r][s]<<endl;
    }
       
    return 0;
}
