#include "main.h"

/**                                                                     
 * print_sign - return sign                                             
 * @n: integer                                                          
 * Return: Return sign +, 0 or -1                                       
 */                                                                     
int print_sign(int n)                                                   
{                                                                       
	int number;                                                     
                                                                        
        if (n > 0)                                                      
        {                                                               
        	_putchar('+');                                          
		number = 1;                                             
        }                                                               
        else if (n == 0)                                                
        {                                                               
               _putchar('0');                                          
               number = 0;                                             
        }                                                               
        else                                                            
        {                                                               
               _putchar('-');                                          
               number = -1;                                            
        }                                                               
        return (number);                                                
} 