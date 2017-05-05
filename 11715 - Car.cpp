/* Afikur Rahman (afikur)*/
#include <cstdio>
#include <cmath>

int main() {
    int n,counter = 0;
    double x,y,z;

    while(scanf("%d", &n) == 1) {
        if(n == 0) break;

        scanf("%lf%lf%lf", &x,&y,&z);

        if(n == 1) {
            double a,s;
            a = (y-x) / z;
            s = (y*y - x*x) / (2*a);

            printf("Case %d: %.3lf %.3lf\n", ++counter, s, a);
        }

        if(n == 2) {
            double s,t;
            t = (y-x) / z;
            s = (y*y - x*x) / (2*z);
            printf("Case %d: %.3lf %.3lf\n", ++counter, s, t);
        }

        if(n == 3) {
            double v,t;
            v = sqrt(x*x + 2*y*z);
            t = (v - x) / y;

            printf("Case %d: %.3lf %.3lf\n", ++counter, v, t);
        }

        if(n == 4) {
            double u,t;
            u = sqrt(x*x - 2*y*z);
            t = (x - u) / y;

            printf("Case %d: %.3lf %.3lf\n", ++counter, u, t);
        }
    }

    return 0;
}
