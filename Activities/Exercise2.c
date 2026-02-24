#include <stdio.h>
int main() 
{ 
  int a, b, c; int sum, product; 
  printf("Enter three integers: "); 
  scanf("%d %d %d", &a, &b, &c); sum = a + b + c; product = a * b * c;
  printf("Sum = %d\n", sum); printf("Product = %d\n", product);
  return 0; 
}
