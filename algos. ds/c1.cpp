#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    while(n--)
    {
            double quote[3];
            double ini = 100000;

            for(int i=0;i<3;i++)
            {
                cin>>quote[i];
            }
            double n1 =ini;
            for(int i=0;i<3;i++)
            {
                n1 = n1/quote[i];
            }
            if(n1>=ini)
            {
               n1 = n1-ini;
               n1 = (int)n1;
               cout<<n1<<"\n";
            }
            else
            {
                cout<<"0"<<"\n";
            }
    }


}
