#include <stdio.h>

int main(){
  int x = 1,  y = 2;
  __asm__(
	  "sha512sig0 %[i], %[j]"
	  : [i] "=r" (y)		
	  : [j] "r" (x)		
  );
  __asm__(
	  "sha512sig1 %[i], %[j]"
	  : [i] "=r" (y)
	  : [j] "r" (x)
  );
  __asm__(
	  "sha512sum0 %[i], %[j]"
	  : [i] "=r" (y)
	  : [j] "r" (x)
  );
  __asm__  (
    "sha512sum1 %[i], %[j]"
	  : [i] "=r" (y)
	  : [j] "r" (x)
  );
  return 0;
}
