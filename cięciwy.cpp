#include<iostream>

using namespace std;

double f(double &x)
{
    return 1.2*x*x*x-257*x+481;
}

void cieciw(double a, double b, int m)
{
    double x = a;
    for(int i = 0; i < m; i++)
    {
        x = x - f(x) / (f(b) - f(x)) * (b - x);
    cout << "Iteracja nr " << i+1 << "\t" << x << "\n\n";
    }

}

int main(){
//f(x)=1.2x^3 -257x + 481

    int m = 10;
    double a = 8;
    double b = 0;

    cout << "Funkcja ma postac: f(x)=1.2x^3 -257x + 481\n";
    cieciw(a, b, m);

    return 0;
}
