#include <iostream>
#include <string>
#include <list>
#include<math.h>
using namespace std;
int main () {
    int x, y;
    cin>>x>>y;
    int n1=x;
    int n2=y;
    int a[6],b[6];
    int i=0;
    int c1=0,c2=0;
    while(n1!=0)
    {
        a[i++] = n1%10;
        n1= n1/10;
        c1++;
    }
    i=0;
    while(n2!=0)
    {
        b[i++] = n2%10;
        n2= n2/10;
        c2++;
    }
    int min =0 ;
    int max=0;
    int min_n2 =0 ;
    int max_n2=0;
    for(i=0;i<c1;i++)
    {

        if(a[i]==6)
        {

            min+=5*pow(10,i);
            max+=6*pow(10,i);

        }
        else
        {
                if(a[i]==5)
                {
                    min+= a[i] * pow(10,i);
                    max+= 6*pow(10,i);

                }
                else
                {
                    min+=a[i]*pow(10,i);
                    max+=a[i]*pow(10,i);

                }
        }

    }

    for(i=0;i<c2;i++)
    {

        if(b[i]==6)
        {

            min_n2+=5*pow(10,i);
            max_n2+=6*pow(10,i);

        }
        else
        {
            if(b[i]==5)
            {
                min_n2 += b[i]*pow(10,i);
                max_n2 += 6*pow(10,i);

            }

        else
        {
            min_n2+=b[i]*pow(10,i);
            max_n2+=b[i]*pow(10,i);

        }
        }
    }
    min = min + min_n2;
    max = max + max_n2;
    cout<<min<<" "<<max;

    return 0;
}
