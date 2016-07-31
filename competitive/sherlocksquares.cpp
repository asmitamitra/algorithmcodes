#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        cin>>b;
        //int count=0;
//        for(int i =a;i<=b;i++)
//        {
//            if(sqrt(i) == floor(sqrt(i))){
//               count++;
//
//            }
//
//        }
        int count = floor(sqrt(b))-ceil(sqrt(a))+1;

        cout<<count<<"\n";

    }

}
