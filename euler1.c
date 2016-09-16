//Celine Yan Period 5
#include <stdio.h>
#include <stdlib.h>

/*  Problem 1
If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

int prob1(){
  int ans = 0;
  int x = 0;
  for (x = 999; x >= 3; x--){
    if ((x%3 == 0) || (x%5 == 0))
      ans += x;
  }
  return ans;
}

int main(){
  int x = prob1();
  printf("%d \n", x);
  return 0;
}

//answer = 233168
