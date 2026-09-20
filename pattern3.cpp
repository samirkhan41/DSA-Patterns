#include<iostream>
using namespace std;

int main()
{
    int count =1;
int row=4;
int column=4;
for(int i=1; i <=row;i ++)
{
    for(int j =1; j<=i; j++)
    {
        cout<<count;
        count=count+1;
    }
    cout<<endl;
}
return 0;
}