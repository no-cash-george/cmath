+--------------------------------------------+
|Basic math library created by no_cash_george|
+--------------------------------------------+

+===========================================================================================+
||This is my basic version of a math library in pure c (i am not a python dev of course)   ||
||that i created because i was bored. Bellow you can find basic information about its usage||
||and the way it gives errors to the main programm. Currencty most of it returns floats    ||
||(i will change it to doubles in the future) exept of the factorial function that returns ||
||an unsigned long long.                                                                   ||
||Thanks for your attention and i hope you have fun with it                                ||
+===========================================================================================+


DOCUMENTATION FOR EACH OF THE FUNCTIONS INCLUDED:


+-----------------------------------------------------------------------------------------------------+
|int_pow(integer power):                                                                              |
|input = a floating point number as the base of the power, and an integer as the exponent of the power|
|return = a float containing a^b                                                                      |
+-----------------------------------------------------------------------------------------------------+
+--------------------------------------------------------+
|pow(power):                                             |
|input = two floating point numbersv(a,b)                |
|return = a float containing a^b                         |
|error handling: The function detects if the given number|
|for the base of the power is negative and returns -1    |           
+--------------------------------------------------------+
+-----------------------------------------------+
|E(natural exponential function):               |
|input = a floating point number                |
|return = a floating point number containing e^x|
+-----------------------------------------------+
+--------------------------------------------------------------------+
|sqrt(square root):                                                  |
|input = a floating point number                                     | 
|return = the square root of the floating point number               |
|error handling: The function detects if the given number is negative|
|and returns -1                                                      |
+--------------------------------------------------------------------+
+--------------------------------------------------------------------+
|root(square root):                                                  |
|input = an integer (a) and a floating poing number                  | 
|return = the (a) root of the floating point number                  |
|error handling: The function detects if the given number is negative|
|and returns -1                                                      |
+--------------------------------------------------------------------+
+--------------------------------------------------------------------+
|ln(natural logarithm):                                              |
|input = a floating point number (x)                                 |
|return = the ln(x)                                                  |
|error handling: The function detects if the given number is negative|
|and returns -1                                                      |
+--------------------------------------------------------------------+
+--------------------------------------------------------------------+
|fact(factorial):                                                    |
|input = an integer (a)                                              |
|return = an unsigned long long containing a!                        |
|error handling: The function detects if the given number is negative|
|and returns -1                                                      |
+--------------------------------------------------------------------+
+------------------------------------+
|absolute:                           |
|input =  a floating point number (x)|
|return = absolute value of x        |
+------------------------------------+
+---------------------------------------------------------+
|int_part(the integer part of a floating point number):   |
|input = a floating point number (x)                      |
|return = the integer part of x                           |
+---------------------------------------------------------+
+--------------------------------------------------------------------------------------------+
|sin(sine),cos(cosine):                                                                      |
|input = a floating point number (x) IN RAD!!!!!(degree implementation comming in the future)|
|output = the sine/cosine of x                                                               |
|error handling: The function detects if the given number is negative                        |
|and returns 2                                                                               |
+--------------------------------------------------------------------------------------------+
+--------------------------------------------------------------------------------------------+
|tan(tangent),ctg(cotangent):                                                                |
|input = a floating point number (x) IN RAD!!!!!(degree implementation comming in the future)|
|output = the tangent/cotangent of x                                                         |
|error handling: The function detects if the given number is negative                        |
|and returns 2                                                                               |
+--------------------------------------------------------------------------------------------+