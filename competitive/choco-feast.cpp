#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c, m;
        cin>>n>>c>>m;
        int n1 = n/c;
        int count =n1;
        if(n1<m)
        {
            cout<<n1<<"\n";

        }
        if(n1 == m)
        {   //cout<<"what";
            count+=1;
            cout<<count<<"\n";

        }
        int flag=0;
        if(n1>m)
        {   //cout<<"where";
            while(n1!=m)
            {
                n1=n1-m+1;
                count++;
                if(n1<m)
                {
                    flag=1;
                    break;

                }
                if(n1 == m)
                {

                    count++;
                    cout<<count<<"\n";
                    break;
                }
            }
            if(flag==1)
            {
                cout<<count<<"\n";

            }
        }

    }

}
