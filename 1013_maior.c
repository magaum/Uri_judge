#include <stdio.h>

int main () {
  
  int maiorAB, a,b,abs;
    scanf("%d %d %d", &a ,&b ,&abs);
      maiorAB = (a+b+abs(a-b))/2;
    printf ("%d eh o maior", maiorAB);
  return 0;
}
