//SKELETON \'/


// function declaration 

/* int main block 
// local variable definition 

call for the function 
finish off 

//define the rest of the function elseware only to be called earlier. 
*/


#include <stdio.h>
#include <limits.h>

//calling the 

int max( int num1, int num2);

//other function

//Variables can be DECLARED outside of the main function 
extern float bob; 
extern int alpha; 
extern int beta;

int main()
{

//Variables DEFINED
int alpha, beta, whooda;
float bob;

//variables to be used in place of the max variables (*'*)
int a = 100; 
int b = 200; 
int ret; 

//calling the max function 
ret = max(a, b); 
printf ("The max value is : %d \n" , ret );
// NOTE:
//other variables can be used in place of the inital ones 

//Variables INITIALIZED
alpha = 10; 
beta = -6;

whooda = alpha + beta; 
printf ("%d \n", whooda);

//print statement 
printf ("Hello, World! \n");

//forever loop
/*for ( ; ; )
{ printf ( "this loop will fun foreva!\n" ); } */
 
//to get the sieze of a data type sizeof(<>) --- %d expects an int unless <limits.h> is included
printf ("Memory occupancy for an INTEGER is : %d \n", sizeof(int));

return 0;
}



/* functions */
// a fucntion declaration indicates that the function will be used to the compiler 
// a function DEFINITION will actually provide girth to the declared function hehe

/* the name of the first line is: function header 
return_type function_name ( parameter list ) 

{
body of the function 

unhilight me for the good color ;) 

}  */



//A function that I see more often than not 

int max(int num1, int num2) 
//could have more simply be noted as type name (type type) without variable names
{

//local var DECLARATION 
int result; 
if (num1 > num2)
{
result =num1;
}

else result = num2;
return result;
}

