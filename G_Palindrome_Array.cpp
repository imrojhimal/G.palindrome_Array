#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    bool flag=false;
    int i,j;
    int A[n];
    for(int c=0;c<n;c++)
    {
        cin>>A[c];
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(A[i]==A[j])
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    cout<<"YES";
    else
    cout<<"NO";


}