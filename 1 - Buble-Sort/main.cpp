#include <iostream>

using namespace std;
void swp(int *xp,int *yp)
{
    int temp = *xp;
    *xp=*yp;
    *yp=temp;
}
void bs(int v[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        if(v[j]>v[j+1])
        swp(&v[j],&v[j+1]);
}
void print(int v[],int siz)
{
    int i;
    for(i=0;i<siz;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,i;
    cin>>n;
    int v[n];
    for (i=0;i<n;i++)
        cin>>v[i];
    bs(v,n);
    print(v,n);

}
