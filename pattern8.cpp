#include<iostream>
using namespace std;

int main()
{
    int n=3; 
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            char ch= 'A'+i+j-2;
            cout<<ch <<" ";
        }
        cout<<endl;
    }
    return 0;

}