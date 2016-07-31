#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<3)
        {
            cout<<"-1\n";

        }
        else
        {
            if(n%3 == 0)
            {
                for(int i=0;i<n;i++){
                    cout<<"5";
                }
                cout<<"\n";
            }

            if(n%5 == 0)
            {
                for(int i=0;i<n;i++){
                    cout<<"3";
                }
                cout<<"\n";
            }
            if(n%3!=0 && n%5!=0){

                int check1=0,check2=0;
                int n1_1 = n%5;
                int n2_1 = n%3;
                int n1 = n-n1_1;
                int n2 = n-n2_1;
                int i=1;
                while(check1==0 && check2==0){
                    int n_o1 = n-n1;//other number 1



                    if(n1%5 ==0 && n_o1%3==0){
                        check1=1;
                    }

                    //same for 3
                    int n_o2 = n-n2;//other number 2


                    if(n2%3==0 && n_o2%5==0){
                        check2=1;
                    }

                    if(check1==1 && check2==1){
                        if(n2>=n1)
                        {
                            for(int j=0;j<n2;j++){
                                cout<<"5";
                            }
                            for(int j=0;j<n_o2;j++){
                                cout<<"3";
                            }
                            cout<<"\n";
                        }
                        if(n1>n2)
                        {
                            for(int j=0;j<n1;j++){
                                cout<<"3";
                            }
                            for(int j=0;j<n_o1;j++){
                                cout<<"5";
                            }
                            cout<<"\n";
                        }

                    }
                    else if(check1==1 && check2==0){
                            for(int j=0;j<n1;j++){
                                cout<<"3";
                            }
                            for(int j=0;j<n_o1;j++){
                                cout<<"5";
                            }
                            cout<<"\n";

                    }
                    else if(check1==0 && check2==1){
                            for(int j=0;j<n2;j++){
                                cout<<"5";
                            }
                            for(int j=0;j<n_o2;j++){
                                cout<<"3";
                            }
                            cout<<"\n";

                    }
                    else if(check1==0 && check2 ==0){
                        n1=n1-5;
                        n2 = n2-3;

                    }


                }
            }

        }
    }
    return 0;
}
