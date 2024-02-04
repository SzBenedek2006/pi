#include <stdio.h>
#include <math.h>







long long int factorial(long long int n)
{
    if (n == 1 || n == 0) {
      return 1;
    }

    return n * factorial(n - 1);
}





long double piGen(int prec) {




                                              //
    long double pi = 0;

    for (int k = 0; k < prec; k++) {
        pi = pi + ( ( (2 * sqrt(2) ) / 9801) *
        ( factorial((4 * k)) * 1103 + 26390 * k ) /
        ( pow(factorial(k), 4) * pow(396, 4 * k) )      );
        printf("%.100Lf\n", pi);

    }


return pow(pi, -1);


}


int main () {

    //printf("%.100lf", acos(-1));
    printf("%Lf", piGen(100));

    return 0;
}
