#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;

    if((x2>x1 && v2>v1)||(x2 == x1 && v2>v1)||(x2==x1 && v1>v2))
    {
        cout<<"NO";

    }
    if(x2 == x1 && v1==v2)
    {
        cout<<"YES";

    }
    if(x2>x1 && v1>v2)
    {
        int d1 =x1-x2;
        int d2 = v1-v2;
        int jump = d1/d2;
        if(floor(jump) == jump)
        {
           cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

        //int f =0;
        //for(int i=v1,j=v2;;)
        //{
           // if((x1+i)==(x2+j))
            //{
               // f=1;
               // break;
            //}
            //i+=v1;
            //j+=v2;

//        }
   //     if(f == 1)
      //  {
         //   cout<<"YES";

        //}
        //else{
           // cout<<"NO";
        //}



    }




}
