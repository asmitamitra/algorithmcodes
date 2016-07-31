#include<iostream>
using namespace std;

int main() {

    int s[] = {1, 3,0,5,8,5};
    int f[] = {2, 4,6,7,9,9};
    int len = sizeof(f)/sizeof(*f);
    cout<<"Activity: start"<<s[0]<<" and finish"<<f[0]<<"\n";
    int pre = 0;
    for(int i=1;i<len;i++){
        if(s[i]>=f[pre]){
            cout<<"Activity: start"<<s[i]<<" and finish"<<f[i]<<"\n";
            pre = i;
        }

    }


}
