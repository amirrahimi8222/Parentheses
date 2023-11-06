#include <stdio.h>
unsigned long int cn(int n) {
    int s=n-1;
    int r=0;
if (n==0)
    return 1;
if (n==1)
    return 1;
    for (int i = 0; i <= s; ++i) {
      r=r+cn(i)*cn(s-i);
    }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    unsigned long int s= cn(n);
    printf("%lu",s);
    return 0;
}