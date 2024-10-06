#include<stdio.h>

int main(void)
{
	short number = 0;
	short max = -9999;   // keep track of this value don't get out of range for short int data type.
	short counter = 0;
	
	do
	{
		puts("Please enter the positive number");
		scanf_s("%hd", &number);

		if (number != -1)
		{
			counter++;
			if (number > max)
			{
				max = number;
			}
		}
	} 
	while (number != -1);   // we are looking at positive values only, otherwise we won't be able to check -1 itself.
	                        // as -1 is used as sentinel value means to stop the loop.

	if (counter)
		printf("The largest positive number is %hd\n", max);
	else
		puts("You have enter -1, please enter positive number to begin checking for positive largest number.");
	puts("as we cannot check -1 itself from checking negative values. It is being used as sentinel value.");

	return 0;
}