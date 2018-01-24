#include <stdio.h>

int main()
{

int len = 10;
int numbers[10] = {23, 4, 5, 67, 11, 30, 98, -4, -28, 10};

for (int i =0; i < len; ++i) 
{

int x, y, *a, *b, temp;
x = numbers[i];
y = numbers[i+1];

printf ("Before Swapping \nx = %d \ny = %d\n", x , y );
a = &x;
b = &y;


temp = *b; 
*b = *a; 
*a = temp; 

printf ("After Swapping \n x = %d \n y = %d \n", x , y); 

return 0;

}

}

