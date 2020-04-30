#include "threads/fixed-point.h"

//Convert n to fixed point: 	n * f
int i_to_f(int n){
  return n*FIXPOINT;
}

//Convert x to integer (rounding toward zero): 	x / f
int f_to_i_zero(int x){
  return x/FIXPOINT;
}

//Convert x to integer (rounding to nearest): (x + f / 2) / f if x >= 0,
int f_to_i_near(int x){
  if(x >= 0){
    return (x + FIXPOINT / 2) / FIXPOINT;
  }else{
    return (x - FIXPOINT / 2) / FIXPOINT ;
  }
}

//Add x and y: 	x + y
int add_f_f(int x, int y){
  return x + y;
}

//Subtract y from x: 	x - y
int sub_f_f(int x, int y){
  return x - y;
}

//Add x and n: 	x + n * f
int add_f_i(int x, int n){
  return x + n *FIXPOINT;
}

//Subtract n from x: 	x - n * f
int sub_f_i(int x, int n){
  return x - n * FIXPOINT;
}

//Multiply x by y: 	((int64_t) x) * y / f
int mul_f_f(int x, int y){
  return ((int64_t) x) * y / FIXPOINT;
}

//Multiply x by n: 	x * n
int mul_f_i(int x, int n){
  return x*n;
}

//Divide x by y: 	((int64_t) x) * f / y
int div_f_f(int x, int y){
  return ((int64_t) x) * FIXPOINT / y;
}

//Divide x by n: 	x / n
int div_f_i(int x, int n){
  return x/n;
}

