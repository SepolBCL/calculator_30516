#define _CRT_SECURE_NO_WARNINGS

/** * * * * * * * * * * * * * * * * * * * * * * *
 * @file   calc.c
 * @author Hugo Lopes_30516
 *
 * @brief Calculator program that performs basic mathematical operations.
 * 
 * This program allows the user to perform operations such as addition, subtraction, 
 * multiplication, division, exponentiation, and square root.
 *
 * @date  September 2024
 * * * * * * * * * * * * * * * * * * * * * * * **/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "funcoes.h"


/**
 * @brief Main function of the calculator program.
 * 
 * This function provides a menu for the user to select a mathematical operation 
 * (addition, subtraction, multiplication, division,exponentiation, or square root). 
 * The program will keep running until the user chooses to exit.
 * 
 * @return Returns 0 if the program executes successfully.
 */


#pragma region Main
int main()  
{
	system("cls");
	printf("*********************************************************\n\n");
	printf("Basic Calculator Program\n#Version 0.1\nAuthor: Hugo Lopes_30516\n\n");
	printf("*********************************************************\n");
	int x;
	float num1 = 0, num2 = 0, res = 0;
	char op, exit = NULL;
		
	while(exit != 'n')
	{
		exit = NULL;
		op = NULL;

		while(op!='+' && op!='-' && op!='*' && op!='/' && op!='e' && op!='s')
			{
				printf("\n____________________________\n\n");
				printf("- Addition.............. (+) \n");
				printf("- Subtraction........... (-) \n");
				printf("- Multiplication........ (*) \n");
				printf("- Division.............. (/) \n");
				printf("- Exponentiation........ (e) \n");
				printf("- Square Root........... (s) \n");
				printf("____________________________\n\n");
				printf("Insert the disired operation: ");
				scanf(" %c", &op);

				if (op!='+' && op!='-' && op!='*' && op!='/' && op!='e' && op!='s')
				
					printf("\n!!!! Invalid Operation !!!!\n");
				
			}

			if(op== 'e')//exponentiation
				{
					printf("Insert the number: ");
					scanf("%f", &num1);
					printf("%.3f to the power of ",num1);
					scanf("%d",&x);
					res= power(num1,x);// Calls the power function to calculate the exponentiation.
					printf("The result of the operation is: %.4f\n", res);
				}
		
			else if(op=='s')//Square Root
				{
					printf("Insert the number: ");
					scanf("%f", &num1);

					if(num1>=0)
						{
								res = sqrt(num1);// Calculates the square root using the sqrt function.
								printf("The result of the operation is: %.3f\n", res);
						}
							else
								printf("\n!!! Impossible to calculate square root of a negative number !!!\n");
				}
		
		else
			{
				printf("Insert the 1st number: ");
				scanf("%f", &num1);
				printf("Insert the 2nd number: ");
				scanf("%f", &num2);
		
				switch (op)
				{

					case '+'://addition

							res = sum(num1,num2);//Calls the sum function for addition.
							printf("The result of the operation is: %.3f\n", res);

					break;

					case'-'://subtraction

							res = subt(num1,num2);// Calls the subt function for subtraction.
							printf("The result of the operation is: %.3f\n", res);
					
					break;

					case'*'://multiplication

							res = mult(num1,num2); // Calls the mult function for multiplication.
							printf("The result of the operation is: %.3f\n", res);
					
					break;

					case'/'://division

							if (num2 == 0)
								{
									printf("\n!!! Impossible to divide by zero !!!\n");
								}
							else
								{
									res = divi(num1,num2); // Calls the divi function for division.
									printf("The result of the operation is: %.3f\n", res);
								}
						break;

						default:

							printf("\n!!!! Invalid Operation !!!!\n");

						break;
					
				}
			}
		
		
			while(exit!='y' && exit!='n')
				{
					printf("\nDo you wont to use de calculator again? (y/n)");
					scanf(" %c", &exit);
				
					if(exit!='y' && exit!='n')

							printf("\n!!! Wrong option !!!\n");
		
					else if(exit=='n')
							{
								system("cls");
								printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
								printf("!!!                                       !!!\n");
								printf("!!!    Thaks for using Calculator #0.1    !!!\n");
								printf("!!!                                       !!!\n");
								printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
							}
				}
	}
	return(0);

}
#pragma endregion