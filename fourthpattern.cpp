#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {for(int d=r;d<=5;d++){
        cout<<" ";
    }
        for(int s=1;s<=r;s++)
        {
        cout<<"*";
        
       }
       cout<<endl; 
    }
}