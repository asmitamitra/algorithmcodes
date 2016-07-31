#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        cin>>k;
        int count=0;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;

            //early bcche
            if(a<=0)
            {
                count++;

            }

        }
        if(count>=k)
        {
            cout<<"NO\n";

        }
        else
        {
            cout<<"YES\n";

        }


    }

}
