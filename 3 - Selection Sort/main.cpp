#include <iostream>

using namespace std;
int v[25],n,i,j,aux,mini;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n-1;i++){
            mini=i;
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
    {
        mini=j;
        aux=v[j];v[j]=v[i];v[i]=aux;
    }
    }
    for (i=0;i<n;i++)
        cout<<v[i]<<" ";

}
