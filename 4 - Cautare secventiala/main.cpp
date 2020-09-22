#include <iostream>
using namespace std;
int main()
{
    int n,v[100],i,gasit=0,x,p;
    cin>>n;
    cin>>x;
    for (i=1;i<=n;i++)
     cin>>v[i];
    i=1;
    while ( (i<=n) && (!gasit) )
   {
       if (v[i]==x) {gasit=1;p=i;}
       i++;
   }
   if (gasit) cout<<p;
   else cout<<"error";

   return 0;
}
