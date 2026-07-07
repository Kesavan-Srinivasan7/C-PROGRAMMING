/*type conversion 

There are two types of conversion in C:

Implicit Conversion (automatically)
 Automatic conversion: int to float
float myFloat = 9;

printf("%f", myFloat); // 9.000000

Explicit Conversion (manually)
// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%f", sum); // 2.500000

#const keyword, which makes a variable unchangeable and read-only:

const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'

Like this:

const int minutesPerHour = 60;
This however, will not work:

const int minutesPerHour;   good partice for constant all in uppercase "const int BIRTHYEAR = 1980;"

minutesPerHour = 60; // error
*/

