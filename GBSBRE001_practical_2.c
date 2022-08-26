#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TITLE (" DECIMAL TO RADIX-i converter \n")   // PART A  Using the variable define
#define AUTHOR (" Brent Gibson \n")
#define YEAR (" 2022\n")

  void Dec2RadixI(int decValue, int radValue)  //Convert the decimal number to a radix number
  {
      int x, n, i, rem, num, index = 0;    // defining my variables
      x = radValue;
      n = decValue;
      char myarray[100];                   //creating an empty array
      printf("The radix-%d value is ",x);

      do
    {
        rem = n % x;             // finding the remainder of the decimal number divided by the radix base
        num = rem + '0';         // finding the new number is the ascii table
        if(num > '9')            // if loop if the number is greater than '9' in the ascii table
            num = 7 + num;
        myarray[index] = num;
        index = index + 1;       //increment the index
        n = n / x;
        }

        while(n != 0);                  //while loop when number is no equal to zero
        for(i = index - 1; i >= 0;--i)  // icrement backwards in the array
        printf("%c",myarray[i]);        // print the array
        printf("\n");                   // print the converted number
  }

int main()
{
    printf("*****************************\n");    //PART A  printing the header
    printf(TITLE);
    printf(" Written by:");
    printf(AUTHOR);
    printf(" Date:");
    printf(YEAR);
    printf("*****************************\n");


    int n;          // define my variables
    int x;
    while(n >= 0){    // For when the entered number is greateer than zero.


            printf("Enter a decimal number: ");
            scanf("%d", &n);                      // get the input from user and assign it to variable n

            if(n>0){
                printf("The number you have entered is %d \n",n);


                printf("Enter a radix for the converter between 2 and 16:");           // get the input from user and assign it to variable x
                scanf("%d", &x);
                printf("The radix you have entered is %d \n",x);

                float log2Num;
                log2Num = log2(n);
                printf("The log2 of the number is %.2f \n", log2Num);  // calculate the log number using math.h

                int div;
                div = (n/x);
                printf("The integer result of the number divided by %d is %d \n", x, div);   //divide the two inputs

                int remainder;
                remainder = n%x;
                printf("The remainder is %d \n", remainder);   // find the remainder of the two inputs divided

            }

            else{
                printf("EXIT");  // if number less than zero exit the code and print exit
                break;
            }
             Dec2RadixI(n,x);  // call function Dec2RadixI and input variables n, x
    }

}

















