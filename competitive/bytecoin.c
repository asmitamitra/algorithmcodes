#include<stdio.h>
static long long int mem[10000001];
long long int func(long long int n)
{
    static long long int k;
    if(n<12)
        return n;
    else if(n==12)
        return 13;
    else if(n<1000000)
    {
        if(mem[n]!=0)
            return mem[n];
    }
    k=func((long long)n/2)+func((long long)n/3)+func((long long)n/4);
    if(n<1000000)
        mem[n]=k;
    return k;
}
int main()
{
    static long long int n,ans;
    while(scanf("%lld",&n)!=EOF)
    {
      ans=func(n);
      printf("%lld\n",ans);
    }
    return 0;
}
