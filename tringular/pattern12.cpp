#include<iostream>
using namespace std;

int main()
{
    int n=5; 
    int count=5;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=count;j++)
        {
            cout<< j <<" ";
        }
        
        //for left side start printing h
        for(int start=i-1; start>=1; start--)
        {
            cout<<"* ";
        }

        //Right side 

        //right side start printing 
        for(int last=i-1; last>=1; last--)
        {
            cout<<"* ";
        }

        //right side number printing 

        for(int end=count; end>=1; end--)
        {
            cout<< end <<" ";
        }
        --count;
        cout<<endl;

    }
    return 0;
}