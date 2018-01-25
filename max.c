#include <stdio.h>
int len = 10;
int numbers[10] = {23, 4, 5, 67, 11, 30, 98, -4, -28, 10};
int max(int *numbers, int len);

int main()
{

int final; 
final = max(numbers, len);
printf ("the FINAL number is also %d \n", final);
return 0;
}

int max(int *numbers, int len)
{
int i, j; 
int min_loc; 
int x, y, temp;


for (i = 0; i < len-1; i++) 
{

min_loc = i; //Sets minimum to null 

//j will look at element next to current minimum and compare the value at that array element
for (j= i+1; j< len; j++) 
	if (numbers[j] < numbers[min_loc]) 
		min_loc = j;

	temp = numbers[min_loc]; 
	y = numbers[i];
	numbers[i] = temp; 
	numbers[min_loc] = y; 
}

for (i = 0; i < len; i ++) 
	{
	printf ("%d, ", numbers[i]);
	}
int max; 
max = numbers[9];
printf("The max number is: %d \n", max);

return max;
}

