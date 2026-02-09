#include <stdio.h>
#include <math.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;

    functionM(); 
    a = functionM(); //pass
    
    b = functionN(a, b); //pass have warning b is int but funtion passing parameter (int,long)

    r = functionO(r, a, s, b); //pass  have warning b is int but 

    s = functionP(a, b, c, d, e); //error passing 5 argrument but in prototype have 4 argrument

    u = functionM(); //pass
    
    c = d + functionN(r, s); //pass have warning r is double but passing parameter is int

    t = s * functionO(r, a, r, a); //pass

    a = v + functionP(r, s, t, t); //pass but have warning wrong type variable

    functionP(functionN(a, a), s, t, t+r); //pass but have warning wrong type variable must double not int

    v = functionP(functionN(a, a), s, t, t+r); //pass  but have warning wrong type variable must double not int

    return 0;
}



