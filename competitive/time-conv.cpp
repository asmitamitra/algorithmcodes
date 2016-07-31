#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[s.size()-2]=='P'&&s[s.size()-1]=='M'){
        cout<<int(s[0]);
    }

}
