#include <stdio.h>
#define PI 3.14159

int main() {

    double R,v;
    scanf("%lf",&R);
    v=4.0/3*PI*R*R*R;
    printf("VOLUME = %.3lf\n",v);

    return 0;
}
