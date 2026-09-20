#include<iostream>
using namespace std;

int main()
{
    int n=3;
    for(int i=1; i <=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            char value = 'A'+j-1;
            cout<<value<<" ";
        }
        cout<<endl;
    }
}