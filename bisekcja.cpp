#include <iostream>
using namespace std;

double f(double &x){
    return 1.2*x*x*x-257*x+481;
}

double bisekcja(double a, double b, int n)
{
    double x = 0;
    for(int i = 0; i < n; i++)
    {
        x = (a + b)/2;
        if(f(x)*f(a)>0)
            a= x;
        else
            b=x;
        cout << "Iteracja nr " << i+1 << " : ";
        cout << x << "\t" << f(x) << endl;
    }
}

int main()
{
    cout << "Funkcja ma postaæ: 1.2*x*x*x-257*x+48\n\n";
    int n = 10;
    double a = 0;
    double b = 8;

    bisekcja(a,b,n);

    return 0;
}
