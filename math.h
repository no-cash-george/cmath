#ifndef math   /* Include guard */
#define math

float pow(float a, float b); //a^b (done)
float E(float x); //e^x (done)
float sqrt(float x); //square root of x (if return value is -1 then input to the function is incorrect) (done)
float root(int x, float y); //x root of y (if return value is -1 then input to the function is incorrect) (done)
float ln(float x); //natural logarithm of x (if return value is -1 then input to the function is incorrect) (done) 
unsigned long long fact(int x); //x factorial (if return value is -1 then input to the function is incorrect) (done)
float absolute(float x); //absolute value of x (done)
int int_part(float x); //convert float to integer (done)
float sin(float x); //sine of x (rad) (done)
float cos(float x); //cosine of x (rad) (done)
float tan(float x); //tangent of x (rad) (if return value is 2 than the input to the function is incorrect) (done)
float ctg(float x); //cotangent of x (rad) (if return value is 2 than the input to the function is incorrect) (done)
float int_pow(float a, int b);//floating point number to integer power (deprecated)

#endif // FOO_H_
