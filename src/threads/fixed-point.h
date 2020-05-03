/**
Convert n to fixed point: 	n * f
Convert x to integer (rounding toward zero): 	x / f
Convert x to integer (rounding to nearest): 	(x + f / 2) / f if x >= 0,
(x - f / 2) / f if x <= 0.
Add x and y: 	x + y
Subtract y from x: 	x - y
Add x and n: 	x + n * f
Subtract n from x: 	x - n * f
Multiply x by y: 	((int64_t) x) * y / f
Multiply x by n: 	x * n
Divide x by y: 	((int64_t) x) * f / y
Divide x by n: 	x / n
*/
#include <stdint.h>
#define FIXPOINT 16384
int i_to_f (int n);
int f_to_i_zero(int x);
int f_to_i_near(int x);
int add_f_f(int x, int y);
int sub_f_f(int x, int y);
int add_f_i(int x, int n);
int sub_f_i(int x, int n);
int mul_f_f(int x, int y);
int mul_f_i(int x, int n);
int div_f_f(int x, int y);
int div_f_i(int x, int n);



