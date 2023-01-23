#include <stdio.h>

int main() {

float temperature;
scanf("%f", &temperature);

printf("temperature in Fahrenheit: ");

switch ((int) temperature / 11) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:

printf("Very cold weather\n");

break;

   case 5:
   case 6:

printf("Cold weather\n");
break;

   case 7:
   case 8:

printf("Normal in temp\n");
break;
   case 9:
   case 10:
   case 11:

printf("It is hot\n"); break;

default:

printf("Its very hot\n");

}
return 0;
}
