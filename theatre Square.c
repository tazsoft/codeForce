#include <stdio.h>
#include <math.h>
int main(){
    long long n,m,a,l,b;
    scanf("%lld%lld%lld",&n,&m,&a);
    l= n/a;
    if(n%a != 0)
    l++;
    b= m/a;
    if(m%a != 0)
    b++;
    printf("%lld",l*b);
    return 0;
}
