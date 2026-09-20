#include<iostream>
using namespace std;
int main()
{
    // row =4; column=4;
    int row=4,column=4;

    for(int i=1; i<=row; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}