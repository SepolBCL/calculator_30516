#define _CRT_SECURE_NO_WARNINGS
/**************************************************
 * @file   funcoes.c
 * @author Hugo Lopes_30516
 *
 * @brief  Header file containing function declarations
 *         for basic mathematical operations such as
 *         addition, subtraction, multiplication, division,
 *         and exponentiation.
 *
 * @date   September 2024
 *************************************************/

#pragma region addition of two numbers

/**
 * Function to calculate the sum of two numbers.
 *
 * \param num1 First float number.
 * \param num2 Second float number.
 * \return Sum of num1 and num2.
 */


float sum(float num1,float num2)
{
float sum;
sum = num1 + num2;
return(sum);
}	
#pragma endregion


#pragma region subtraction of two numbers
/**
 * Function to calculate the subtraction of two numbers.
 *
 * \param num1 First float number.
 * \param num2 Second float number.
 * \return Subtraction result of num1 minus num2.
 */
float subt(float num1,float num2)
{
float subt;
subt = num1 - num2;
return(subt);
}	
#pragma endregion


#pragma region multiplication of two numbers
/**
 * Function to calculate the multiplication of two numbers.
 *
 * \param num1 First float number.
 * \param num2 Second float number.
 * \return Multiplication result of num1 and num2.
 */
float mult(float num1,float num2)
{
float mult;
mult = num1 * num2;
return(mult);
}		
#pragma endregion


#pragma region division of two numbers
/**
 * Function to calculate the division of two numbers.
 *
 * \param num1 First float number (dividend).
 * \param num2 Second float number (divisor).
 * \return Division result of num1 divided by num2.
 */
float divi(float num1,float num2)
{
float divi;
divi = num1 / num2;
return(divi);
}		
#pragma endregion


#pragma region calculate the exponentiation

/**
 * Function to calculate the exponentiation.
 *
 * \param num1 Base number as a float.
 * \param x Exponent as an integer.
 * \return num1 raised to the power of x.
 */
float power(float num1,int x)
{
    float pow,res;
 
    if (x>0) 
        { 
            pow=num1;
            for(int i=1;i<x;i++)
                pow = pow*num1;
            return(pow);
        }
    else if(x==0)
        {
             return(1);
        }
    else if(x<0) 
        {
            res=num1;
            for(int i=1;i<-x;i++)
                {
                    res = res*num1; // Calculate the positive power first.
                }
            pow=(1/res); // Take the reciprocal for negative exponents.
        }
return(pow);
}			

#pragma endregion 
