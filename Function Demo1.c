#include<stdio.h> //printf() , scanf()
#include<math.h>  // ex. Math functions
#include<ctype.h> // ex. Character manipulation functions
//prototype
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
int main(void) { //wrong type ruturn
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
  	//a1)
  	 functionM(); //pass compile 
  	 //a2)
  	 printf("%f\n",functionM());
  	 //b)
  a = functionM(); //return is double but a is type int;
  //c)
  b = functionN(5, 6);
  printf("%d\n",b);
  //d)
  r = functionO(1,a,5,b);
  printf("%f\n",r); //must format float don't int
  //e)
  s = functionP(a,b,c,d); //paramiter wrong chang b is n
  //f)
  u = functionM();
  //g)
  c = d + functionN(r,s);
  //h)
  t = s * functionO(r, a, r, a);
  //i)
  a = v + functionP(r, s, t, t);
  //j)
  functionP(functionN(a, a), s, t, t+r);
  //k) 
  v = functionP(functionN(a, a), s, t, t+r);
}
//must have body
double functionM(void){
	return 2.0;
}
int functionN(int n, double x){
	//printf("%d %f\n",n,x);
	return n+x; //b is n+x
}
double functionO(double a , int b , double c, int d){
 //have variable
 return a+b+c+d;
	
}
double functionP(int a, int n, int b, int c){
	
}




