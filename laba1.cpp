

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    x = 12.394;
    y = 7.139;
    z = sqrt(abs(tan(x))) + pow((x + y), log(x));
    printf("z= %f\n", z);
    return 0;
}

