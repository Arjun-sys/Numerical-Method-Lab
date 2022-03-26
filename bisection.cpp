#include<iostream>
using namespace std;
double func(double x)
{
    return x*x - 4*x -10;
} 
double e=0.01,c; 
void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
        
    }
 
    c = a;
 
    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0){
            cout << "Root = " << c<<endl;
            break;
        }
        else if (func(c)*func(a) < 0){
                cout << "Root = " << c<<endl;
                b = c;
        }
        else{
                cout << "Root = " << c<<endl;
                a = c;
        }
    }
}
 
int main()
{
    double a=-2,b=-1.5;
  
    cout<<"The function used is x^2-4x-10\n";
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    bisection(a,b);
    cout<<"Accurate Root calculated is = "<<c<<endl;
 
    return 0;
}
