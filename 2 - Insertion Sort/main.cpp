#include <iostream>

using namespace std;
int v[25],i,j,n,x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>v[i];
    for(i=2;i<=n;i++)
        if(v[i]-v[i-1])
    {
        x=v[i];j=i-1;
        while (j>=0&&v[j]>x)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=x;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
