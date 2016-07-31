#include<iostream>
using namespace std;

int main()
{
    long n,t;
    cin>>n>>t;
    long a[100000];

    for(long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(t--)
    {
        long s1, s2;
        cin>>s1>>s2;
        long min=a[s1];
        for(long i=s1;i<=s2;i++)
        {
            if(min>a[i])
            {
                min =a[i];

            }

        }
        cout<<min<<"\n";

    }


}
