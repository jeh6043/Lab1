//Jordan Hill jlh7084@psu.edu
//

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  
  char* Tempc = readline("Enter temperature in Celsius:");


double Tempf = atof(Tempc);

 Tempf = Tempf*9/5+32;
   
   printf("%f° is equivalent to %f\n° Fahrenheit. ", atof(Tempc),Tempf);

return 0;

}