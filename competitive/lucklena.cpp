#include<iostream>
using namespace std;
typedef struct node
{
    int t;
    int l;

}node;


node list[100];

void find_min(int n)
{
    int min=9999;

    int pos;
    for(int i=0;i<n;i++)
    {
        if(list[i].t==1 && min>list[i].l)
        {
            min = list[i].l;
            pos = i;
        }

    }
    list[pos].l=-1*list[pos].l;
    list[pos].t = 0;
}

int main()
{

    int n,k;
    int c=0;
    int imp[100],unimp[100];

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int l, t;
        cin>>l>>t;

        list[i].l=l;
        list[i].t=t;
        //keep track of how many important tasks
        if(t==1)
        {
            c++;
        }
    }

    for(int j=0;j<c-k;j++)
    {
            find_min(n);
    }

    int sum =0;
    for(int i=0;i<n;i++)
    {
        //cout<<list[i].l<<" ";
        sum+=list[i].l;

    }
    cout<<sum;


}
