#include<iostream>
using namespace std;
int main ()
{
    int n =4; 
    int row =1; 
    for (int i =1; i<=n; i++)
    {
        for(int j =1; j<=row; j++ )
        {
            int value= row;
            cout<<value;
            row=row+1;
        }
        cout<<endl;
    }
    return 0;
}