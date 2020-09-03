//Jordan Hill jlh7084@psu.edu
//Matt Amponsah mma6356@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  
  char* Tempc = readline("Enter temperature in celsius: ");


double Geeg = atof(Tempc);

 Geeg = Geeg*9/5+32;
   
   printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n ", atof(Tempc),Geeg);

return 0;

}