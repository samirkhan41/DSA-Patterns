#include<iostream>
using namespace std;

int main()
{
             char value = 'A';
    for(int i=1; i<=3; i++)
    {
         
        for(int j=1; j<=3; j++)
        {
           
            cout<<value;
            ++value;

        }
        cout<<endl;
    }
    return 0;
}