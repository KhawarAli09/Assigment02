#include<iostream>
using namespace std;
int main ()
{

   int n;
   cout<<"Enter a number :";

   cin>>n; 
   for(int a=1;a<=n;a++)
   {
    for(int b=1;b<=n;b++)
    {
        if(b==1||a==n||a==1||b==n)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   } 
    }
