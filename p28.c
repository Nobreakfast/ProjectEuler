#include <stdio.h>

int main(int argc, char const *argv[]) {
  int max=501,temp=0;
  long long int sum=1;
  for(int i=2;i<=max;i++)
  {
    temp=(2*i-1)*(2*i-1);
    sum=sum+4*temp-6*(2*i-2);
  }
  printf("%d\n", sum);
  return 0;
}
