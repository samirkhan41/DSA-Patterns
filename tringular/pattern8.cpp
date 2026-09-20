#include<iostream>
using namespace std;
int main()
{
int n=4; 
for(int i=1; i<=n; i++)
{
    //f0r spacing 
    for(int j=1; j<=i-1; j++ )
    {
        cout<<" ";
    }
    for(int k=n; k>=i; k--)
    {
        cout<<i;
    }
    cout<<endl;
}
return 0;
}